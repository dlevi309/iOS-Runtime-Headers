/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTEffect.h>

@class UIColor;

@interface JTTextEffect : JTEffect

@property (nonatomic,readonly) unsigned long long dynamicTextType; 
@property (nonatomic,readonly) UIColor * customTextEditTintColor; 
@property (nonatomic,readonly) BOOL textBakedIn; 
+(BOOL)supportsSecureCoding;
+(double)JT_systemFontWeightFromName:(id)arg1 ;
+(id)JT_systemFontDesignFromName:(id)arg1 ;
+(unsigned)JT_symbolicTraitsFromName:(id)arg1 ;
+(id)JT_fontWithName:(id)arg1 ;
+(CGAffineTransform)transformFromEffectSize:(CGSize)arg1 toBasis:(CGRect)arg2 localToWorld:(CGAffineTransform)arg3 basisOrigin:(int)arg4 ;
+(id)dynamicTextPlaceholderMap;
+(id)placeHolderTextForDynamicTextType:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)strings;
-(unsigned long long)maxCharacters;
-(id)initWithEffectID:(id)arg1 ;
-(void)beginTextEditing;
-(BOOL)hasDynamicText;
-(BOOL)wasDynamicTextSet;
-(void)updateDynamicTextWithCompletionBlock:(/*^block*/id)arg1 ;
-(UIColor *)customTextEditTintColor;
-(void)enableDynamicLineSpacingForDiacritics:(BOOL)arg1 ;
-(void)setString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFont:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFontSize:(float)arg1 atIndex:(unsigned long long)arg2 ;
-(id)defaultAttributedString:(unsigned long long)arg1 ;
-(unsigned long long)dynamicTextType;
-(id)editUIProperties;
-(void)setupLocalizedText;
-(void)setFontScale:(float)arg1 atIndex:(unsigned long long)arg2 ;
-(id)defaultTypingAttributes:(unsigned long long)arg1 ;
-(id)textFrames:(SCD_Struct_JT6)arg1 ;
-(id)textFrames:(SCD_Struct_JT6)arg1 relativeTo:(CGRect)arg2 basisOrigin:(int)arg3 ;
-(id)textTransforms:(SCD_Struct_JT6)arg1 relativeTo:(CGRect)arg2 basisOrigin:(int)arg3 ;
-(long long)textHitTest:(CGPoint)arg1 time:(SCD_Struct_JT6)arg2 relativeTo:(CGRect)arg3 basisOrigin:(int)arg4 ;
-(void)endTextEditing;
-(void)setDynamicTextString:(id)arg1 forType:(unsigned long long)arg2 ;
-(BOOL)textBakedIn;
-(id)customTextEditColor;
@end

