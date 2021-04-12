/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class NSString;

@interface AVTStickerPropAdjustTransformProperty : NSObject {

	long long _presetCategory;
	NSString* _presetValue;
	 _position;
	 _rotation;
	 _scale;

}

@property (nonatomic,readonly) long long presetCategory;              //@synthesize presetCategory=_presetCategory - In the implementation block
@property (nonatomic,readonly) NSString * presetValue;                //@synthesize presetValue=_presetValue - In the implementation block
@property (nonatomic,readonly)  position;                             //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly)  rotation;                             //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,readonly)  scale;                                //@synthesize scale=_scale - In the implementation block
-()position;
-()rotation;
-()scale;
-(long long)presetCategory;
-(id)initWithPresetCategory:(long long)arg1 presetValue:(id)arg2 ;
-(void)applyAdjustmentIfNeededToNode:(id)arg1 forMemoji:(id)arg2 ignoreScaleZ:(BOOL)arg3 ;
-(NSString *)presetValue;
@end

