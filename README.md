# rp2040_8key
[RP2040で作る自作キーボード](https://booth.pm/ja/items/4444554)の第4章で設計したキーボード基板です。

RP2040を用いた8キーの自作キーボード基板です。

検証用のためケースなどは付属しません。RP2040を用いた実際の動作と部品実装例の参考としてご利用ください。

## ファームウェア
ファームウェアは以下のリポジトリの`rp2040_8key`ブランチにあります。Cloneし、ブランチを切り替えてからqmk flashを実行してください。

[https://github.com/kata0510/qmk_firmware/tree/rp2040_8key](https://github.com/kata0510/qmk_firmware/tree/rp2040_8key)

QMK Firmwareのビルド環境未作成の場合は、公式ドキュメントもしくは[RP2040で作る自作キーボード](https://booth.pm/ja/items/4444554)の第2章を参考に構築してください。

[https://docs.qmk.fm/#/newbs_getting_started](https://docs.qmk.fm/#/newbs_getting_started)

```
$ git switch rp2040_8key
$ qmk flash -kb rp2040_8key -km default
```

firmwareフォルダ内にあるファームウェアは書籍の参考用として用意しているものです。お手持ちのqmk_firmwareリポジトリの`keyboards/`以下にフォルダをコピーしても書き込み可能です。

## 基板データについて
基板データは`PCB/`フォルダ以下にあります。Kicad7閲覧することができます。

JLCPCBのPCB Assemblyサービスを想定した部品ファイル(BOM)と配置ファイル(CPL)は`gerver/`フォルダ内にあります。

部品の在庫状況は日々返送するため、在庫無しの場合は同じ性能の部品を選択して製造してください。

## 不具合/問い合わせ
基板の不具合、お問い合わせに関しては以下のメールアドレス、もしくはDiscord(yuchi51)までご連絡ください。
```
yuchi.kbd@gmail.com
```