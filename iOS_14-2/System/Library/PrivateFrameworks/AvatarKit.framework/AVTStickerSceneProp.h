/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <AvatarKit/AVTStickerProp.h>

@class SCNScene;

@interface AVTStickerSceneProp : AVTStickerProp {

	SCNScene* _scene;

}

@property (nonatomic,readonly) SCNScene * scene;              //@synthesize scene=_scene - In the implementation block
-(SCNScene *)scene;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithScene:(id)arg1 scale:(BOOL)arg2 position:(id)arg3 rotation:(id)arg4 renderLast:(id)arg5 ;
-(id)dictionaryWithTargetPath:(id)arg1 ;
@end

