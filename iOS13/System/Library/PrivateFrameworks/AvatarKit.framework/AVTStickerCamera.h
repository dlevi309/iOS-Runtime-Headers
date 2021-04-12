/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class SCNNode;

@interface AVTStickerCamera : NSObject {

	SCNNode* _node;

}

@property (nonatomic,retain) SCNNode * node;              //@synthesize node=_node - In the implementation block
+(id)stickerCameraCache;
+(id)cameraFromDictionary:(id)arg1 assetsPath:(id)arg2 ;
-(SCNNode *)node;
-(void)setNode:(SCNNode *)arg1 ;
-(id)buildNode;
-(id)initWithScene:(id)arg1 cameraName:(id)arg2 ;
@end

