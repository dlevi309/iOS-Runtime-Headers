/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSOrderedSet *)effects;
-(void)setEffects:(NSOrderedSet *)arg1 ;
-(int)jtEffectType;
-(void)setJtEffectType:(int)arg1 ;
@end

