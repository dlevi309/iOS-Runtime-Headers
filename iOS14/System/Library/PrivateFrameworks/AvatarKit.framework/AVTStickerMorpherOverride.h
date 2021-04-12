/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class NSString;

@interface AVTStickerMorpherOverride : NSObject {

	float _value;
	NSString* _geometry;
	NSString* _morpher;

}

@property (nonatomic,copy,readonly) NSString * geometry;              //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,copy,readonly) NSString * morpher;               //@synthesize morpher=_morpher - In the implementation block
@property (nonatomic,readonly) float value;                           //@synthesize value=_value - In the implementation block
+(id)morpherOverrideFromDictionary:(id)arg1 ;
-(NSString *)geometry;
-(id)description;
-(NSString *)morpher;
-(float)value;
-(void)applyToAvatar:(id)arg1 reversionContext:(id)arg2 ;
-(id)initWithGeometry:(id)arg1 morpher:(id)arg2 value:(float)arg3 ;
@end

