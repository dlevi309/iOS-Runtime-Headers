/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


#import <AvatarKit/AvatarKit-Structs.h>
@class NSString;

@interface AVTStickerPropAdjustTransformProperty : NSObject {

	long long _presetCategory;
	NSString* _presetValue;
	SCNVector3 _position;
	SCNVector3 _rotation;
	SCNVector3 _scale;

}

@property (nonatomic,readonly) long long presetCategory;              //@synthesize presetCategory=_presetCategory - In the implementation block
@property (nonatomic,readonly) NSString * presetValue;                //@synthesize presetValue=_presetValue - In the implementation block
@property (nonatomic,readonly) SCNVector3 position;                   //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) SCNVector3 rotation;                   //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,readonly) SCNVector3 scale;                      //@synthesize scale=_scale - In the implementation block
-(SCNVector3)scale;
-(SCNVector3)position;
-(SCNVector3)rotation;
-(long long)presetCategory;
-(id)initWithPresetCategory:(long long)arg1 presetValue:(id)arg2 position:(SCNVector3)arg3 rotation:(SCNVector3)arg4 scale:(SCNVector3)arg5 ;
-(void)applyAdjustmentIfNeededToNode:(id)arg1 forMemoji:(id)arg2 ignoreScaleZ:(BOOL)arg3 ;
-(NSString *)presetValue;
@end

