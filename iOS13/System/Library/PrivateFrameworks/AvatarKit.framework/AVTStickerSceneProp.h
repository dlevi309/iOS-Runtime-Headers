/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <AvatarKit/AVTStickerProp.h>

@class SCNScene;

@interface AVTStickerSceneProp : AVTStickerProp {

	SCNScene* _scene;

}

@property (nonatomic,readonly) SCNScene * scene;              //@synthesize scene=_scene - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCNScene *)scene;
-(void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithScene:(id)arg1 scale:(SCNVector3)arg2 position:(SCNVector3)arg3 rotation:(SCNVector3)arg4 renderLast:(BOOL)arg5 palettesDescriptions:(id)arg6 modifiers:(id)arg7 adjustments:(id)arg8 ;
@end

