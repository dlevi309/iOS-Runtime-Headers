/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class NSString, NSOrderedSet;

@interface CFXEffectType : NSObject {

	int _jtEffectType;
	NSString* _identifier;
	NSString* _localizedTitle;
	NSOrderedSet* _effects;

}

@property (nonatomic,retain) NSOrderedSet * effects;               //@synthesize effects=_effects - In the implementation block
@property (assign,nonatomic) int jtEffectType;                     //@synthesize jtEffectType=_jtEffectType - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(void)initialize;
+(id)effectTypeWithIdentifier:(id)arg1 ;
+(id)effectTypeIdentifiers;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSOrderedSet *)effects;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)jtEffectType;
-(void)setEffects:(NSOrderedSet *)arg1 ;
-(void)setJtEffectType:(int)arg1 ;
@end

