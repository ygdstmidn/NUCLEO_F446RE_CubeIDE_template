# NUCLEO_F446RE_CubeIDE_template
## 概要
NUCLEO_F446REのCubeIDEのテンプレートプロジェクトです．\
GitHubのテンプレート機能を使って，新しいプロジェクトを作成した後，Scripts内のrenameProject.pyを実行することで，iocファイルの名前等を変更することができます．
>[!NOTE]
>↑この概要は新しいプロジェクト作成後に削除し，新しくプロジェクトの概要を記述してください．\
>また，ファイル先頭のプロジェクト名の部分も変更してください

| 項目         | 仕様             |
| ------------ | ---------------- |
| 使用マイコン | NUCLEO_F446RE    |
| 使用IDE      | CubeIDE,VSCode   |
| 使用言語等   | C++,STM32CubeHAL |

## ピン設定
| ピン | 設定        | ラベル      | 備考           |
| ---- | ----------- | ----------- | -------------- |
| PA5  | GPIO_Output | DebugLED    | ラベルのみ変更 |
| PC13 | GPIO_EXTI13 | DebugButton | ラベルのみ変更 |

## クロック設定
| 項目 | 内容 | 備考 |
| ---- | ---- | ---- |
|      |      |      |

## 変更した設定
### Project Manager
Code Generator, Generated files\
✅Generate peripheral initialization as a pair of '.c/.h' files per peripheral

## プログラム概要
### setup()
Hello WorldとPCに送信
### loop()
now = HAL_GetTick()
#### 0.1秒ごとに
現在の経過時間をPCに送信\
ボタンが押されていた場合，LEDの点灯/消灯を切り替える
