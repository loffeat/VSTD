## 纸件奇想 功能进度

### 主角

- [ ] 移动  玩家可以在平台上进行横向移动。  WASD控制前后左右移动

- [ ] 作业本  玩家按下E键（暂定）切换模式将手枪被替换成作业本，此时玩家可以在地面消耗资源建造炮台，或左键已建造的炮塔将其转换为自动跟随状态，和拉动跟随中的炮台将其部署。  鼠标长按右键抓取，松开右键放下 
- [ ] 装备炮台  玩家可以可以装备炮台以增强自己的战斗能力，被装备的炮台会环绕在主角旁边并自动攻击附近的敌人，在射击状态下则会向鼠标所在方向开火。装备的炮台可以受到能力增幅，玩家的可装备炮台数量与能力等级有关。
- [ ] 升级  通过接近并拾取地上的经验值，玩家可以积累并提升自己的等级。每次升级玩家将可以进入能力池界面进行抽卡，卡池内容包括“炮塔种类，炮台加成，玩家属性等”
- [ ] 死亡  玩家的生命值归0时，这一轮游戏结束。

## 炮塔

- [ ] 射击 炮塔会自动瞄准并射击最近的敌人，对其造成伤害
- [ ] 耐久 在部署情况下，炮塔应当为敌人的最次攻击目标，近战敌人只有在前进路线被堵塞的情况下才会攻击炮塔，但远程敌人的攻击若击中了炮塔则会正常造成伤害。在移动情况下，炮台的被攻击优先级与玩家同级。
- [ ] 跟随状态 进入自动跟随状态的炮塔会变成类似长着四条腿的蜘蛛炮塔的存在，会跟随在主角附近并自动攻击附近的敌人。处于自动跟随状态的炮塔在属性上会有所减益，并且被攻击优先度高。
- [ ] 被破坏 炮塔被摧毁后永久消失，或需要玩家花费数倍的资源重修（暂定）

### 基地

- [ ] 金币存储 基地与玩家不共享血量，且基地无法被摧毁，但玩家的金币会因基地被攻击而减少，从而引导玩家去保护基地。（暂定）
- [ ] 不可移动 基地无法被移动 ，且拥有最高的被攻击优先级。

### 敌人

- [ ] 种类 暂定四种敌人：杂鱼近战，远程单位，巨型精英，Boss
- [ ] 攻击 敌人会在玩家屏幕外生成，并且朝基地的方向移动，沿途会自动攻击范围内被攻击优先级最高的单位。
- [ ] 死亡 敌人血量到达零后死亡，尸体消失并掉落金币与经验

### 地形