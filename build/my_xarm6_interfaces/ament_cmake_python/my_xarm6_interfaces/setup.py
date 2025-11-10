from setuptools import find_packages
from setuptools import setup

setup(
    name='my_xarm6_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('my_xarm6_interfaces', 'my_xarm6_interfaces.*')),
)
