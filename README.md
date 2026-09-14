# proyecto-algebra-lineal
calculadora de matrices para institucion educativa, catedraticos y alumnos

# Guía de Colaboración en Git y GitHub 🚀

Esta guía explica los conceptos básicos y el flujo de trabajo para nuestro proyecto en grupo.

## 📚 Conceptos Clave

### 1. La Rama (Branch)
Imagina que el código principal (usualmente llamado `main` o `master`) es la línea de tiempo oficial de tu proyecto. 
Si los 4 trabajan directo en `main`, alguien va a sobreescribir el trabajo de otro. Una **rama** es como crear un universo alternativo o una copia exacta del código en ese momento. En tu rama, puedes experimentar, romper cosas y programar tu parte del proyecto en una burbuja aislada sin afectar a tus compañeros.

### 2. El Merge y los Pull Requests (PR)
Una vez que terminaste tu código en tu "universo alternativo" (rama), necesitas juntarlo con la línea de tiempo oficial (`main`). A esa acción de unir los códigos se le llama **Merge**.

En GitHub, la forma educada y segura de hacer un Merge es a través de un **Pull Request (PR)**. Es como levantar la mano y decir: *"Equipo, ya terminé mi parte en mi rama. ¿Alguien puede revisar mi código y aprobar que lo unamos al proyecto principal?"*

### 3. Los Conflictos (Merge Conflicts)
Ocurren cuando dos realidades chocan. Si tú y un compañero modificaron la misma línea del mismo archivo de Python en sus respectivas ramas, Git no sabe a quién hacerle caso.

Git pausará todo y te marcará el archivo diciendo: *"Aquí hay un conflicto, decide tú qué código se queda y qué código se borra"*. Lo resuelves manualmente, guardas, y sigues adelante.

### 4. Force (`git push --force` o `-f`)
**La regla de oro: NUNCA lo uses en un proyecto grupal** a menos que todo el equipo esté de acuerdo.

Normalmente, Git te protege de borrar el trabajo de otros. Si intentas subir algo y alguien más ya subió cambios, Git te dirá *"Primero haz un pull para actualizarte"*. Si usas `--force`, le estás diciendo a Git: *"Ignora las advertencias y aplasta la línea de tiempo del servidor con mi versión local"*. Si alguien más había subido código, lo borrarás para siempre.

---

## 🔄 Nuestro Flujo de Trabajo (Paso a Paso)

Para colaborar sin problemas, la rutina de trabajo para cada tarea debe ser la siguiente:

### Paso 1: Actualiza tu computadora
**Siempre haz esto antes de empezar a programar.** Asegúrate de estar en la rama principal y descarga lo último que hayan hecho los compañeros:
```bash
git checkout main
git pull
```

### Paso 2: Crea tu burbuja aislada (Rama)
**Usa nombres descriptivos.** Crea una rama nueva y muévete a ella al mismo tiempo. Por ejemplo, si vas a crear la base de datos:
```bash
git checkout -b crear-base-datos
```

### Paso 3: Trabaja normalmente
Escribe tu código en Python. Cuando termines, haz los pasos de siempre:
```bash
git add .
git commit -m "Agrega conexión a base de datos"
```

### Paso 4: Sube tu rama a GitHub
Como tu rama es nueva y solo existe en tu compu, la primera vez debes subirla así:
```bash
git push origin crear-base-datos
```

### Paso 5: Crea el Pull Request en GitHub
1. Ve a la página de nuestro repositorio en GitHub.
2. Verás un botón verde gigante que dice **"Compare & pull request"**. Dale clic.
3. Avísale al equipo que lo revisen.
4. Cuando sea aprobado, únelo a `main` desde la misma página de GitHub.
