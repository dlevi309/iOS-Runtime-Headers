/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(float)value;
-(NSString *)geometry;
-(NSString *)morpher;
-(void)applyToAvatar:(id)arg1 ;
-(id)overridenMorpherForAvatar:(id)arg1 ;
-(id)initWithGeometry:(id)arg1 morpher:(id)arg2 value:(float)arg3 ;
@end

