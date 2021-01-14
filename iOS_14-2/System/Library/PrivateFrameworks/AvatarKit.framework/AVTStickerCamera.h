/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

