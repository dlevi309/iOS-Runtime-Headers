/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class JFXTextEffectFrame, NSAttributedString, NSDictionary, UIColor, NSNumber, PVMatrix44Double;

@interface JFXEffectTextEditingProperties : NSObject {

	BOOL _useFullTransform;
	BOOL _isAllCaps;
	BOOL _isEmoji;
	BOOL _isTextFlipped;
	BOOL _outlineDisabled;
	BOOL _moveBeforeScalingToAvoidKeyboard;
	JFXTextEffectFrame* _effectFrame;
	NSAttributedString* _attributedText;
	NSDictionary* _defaultTypingAttributes;
	double _baselineYOffset;
	UIColor* _defaultTextColor;
	UIColor* _customTextColor;
	UIColor* _customTextEditTintColor;
	NSNumber* _cachedScale;
	NSNumber* _cachedRotation;
	PVMatrix44Double* _cachedPartialTransformNoScaleNoTranslation;
	CGRect _cachedFrame;
	CGRect _cachedBounds;

}

@property (nonatomic,retain) JFXTextEffectFrame * effectFrame;                                           //@synthesize effectFrame=_effectFrame - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                                          //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultTypingAttributes;                                       //@synthesize defaultTypingAttributes=_defaultTypingAttributes - In the implementation block
@property (assign,nonatomic) BOOL useFullTransform;                                                      //@synthesize useFullTransform=_useFullTransform - In the implementation block
@property (assign,nonatomic) BOOL isAllCaps;                                                             //@synthesize isAllCaps=_isAllCaps - In the implementation block
@property (assign,nonatomic) BOOL isEmoji;                                                               //@synthesize isEmoji=_isEmoji - In the implementation block
@property (assign,nonatomic) BOOL isTextFlipped;                                                         //@synthesize isTextFlipped=_isTextFlipped - In the implementation block
@property (assign,getter=isOutlineDisabled,nonatomic) BOOL outlineDisabled;                              //@synthesize outlineDisabled=_outlineDisabled - In the implementation block
@property (assign,nonatomic) BOOL moveBeforeScalingToAvoidKeyboard;                                      //@synthesize moveBeforeScalingToAvoidKeyboard=_moveBeforeScalingToAvoidKeyboard - In the implementation block
@property (nonatomic,copy) UIColor * defaultTextColor;                                                   //@synthesize defaultTextColor=_defaultTextColor - In the implementation block
@property (nonatomic,copy) UIColor * customTextColor;                                                    //@synthesize customTextColor=_customTextColor - In the implementation block
@property (nonatomic,copy) UIColor * customTextEditTintColor;                                            //@synthesize customTextEditTintColor=_customTextEditTintColor - In the implementation block
@property (assign,nonatomic) CGRect cachedFrame;                                                         //@synthesize cachedFrame=_cachedFrame - In the implementation block
@property (assign,nonatomic) CGRect cachedBounds;                                                        //@synthesize cachedBounds=_cachedBounds - In the implementation block
@property (nonatomic,retain) NSNumber * cachedScale;                                                     //@synthesize cachedScale=_cachedScale - In the implementation block
@property (nonatomic,retain) NSNumber * cachedRotation;                                                  //@synthesize cachedRotation=_cachedRotation - In the implementation block
@property (nonatomic,retain) PVMatrix44Double * cachedPartialTransformNoScaleNoTranslation;              //@synthesize cachedPartialTransformNoScaleNoTranslation=_cachedPartialTransformNoScaleNoTranslation - In the implementation block
@property (assign,nonatomic) double baselineYOffset;                                                     //@synthesize baselineYOffset=_baselineYOffset - In the implementation block
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) double rotation; 
@property (nonatomic,readonly) CGAffineTransform partialTransformNoScaleNoTranslation; 
+(id)textEditingPropertiesWithTextEffect:(id)arg1 withText:(id)arg2 relativeTo:(CGRect)arg3 atTime:(SCD_Struct_JF3)arg4 index:(unsigned long long)arg5 moveBeforeScalingToAvoidKeyboard:(BOOL)arg6 ;
-(CGRect)bounds;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(double)rotation;
-(double)scale;
-(CGRect)frame;
-(id)description;
-(UIColor *)defaultTextColor;
-(BOOL)isEmoji;
-(void)setCachedFrame:(CGRect)arg1 ;
-(CGRect)cachedFrame;
-(CGRect)cachedBounds;
-(void)setCachedBounds:(CGRect)arg1 ;
-(void)setDefaultTextColor:(UIColor *)arg1 ;
-(BOOL)isTextFlipped;
-(UIColor *)customTextEditTintColor;
-(BOOL)isAllCaps;
-(BOOL)useFullTransform;
-(JFXTextEffectFrame *)effectFrame;
-(NSDictionary *)defaultTypingAttributes;
-(double)baselineYOffset;
-(CGAffineTransform)partialTransformNoScaleNoTranslation;
-(UIColor *)customTextColor;
-(id)initWithTextEffect:(id)arg1 withText:(id)arg2 relativeTo:(CGRect)arg3 atTime:(SCD_Struct_JF3)arg4 index:(unsigned long long)arg5 moveBeforeScalingToAvoidKeyboard:(BOOL)arg6 ;
-(void)setMoveBeforeScalingToAvoidKeyboard:(BOOL)arg1 ;
-(void)JFX_configureWithEffect:(id)arg1 ;
-(void)setEffectFrame:(JFXTextEffectFrame *)arg1 ;
-(void)JFX_configureWithAttributedString:(id)arg1 text:(id)arg2 ;
-(void)JFX_configureWithDefaultTypingAttributes:(id)arg1 ;
-(void)setIsAllCaps:(BOOL)arg1 ;
-(void)setUseFullTransform:(BOOL)arg1 ;
-(void)setCustomTextColor:(UIColor *)arg1 ;
-(void)setCustomTextEditTintColor:(UIColor *)arg1 ;
-(void)setOutlineDisabled:(BOOL)arg1 ;
-(void)setIsEmoji:(BOOL)arg1 ;
-(void)setIsTextFlipped:(BOOL)arg1 ;
-(void)setBaselineYOffset:(double)arg1 ;
-(void)JFX_modifyAttributedString:(id)arg1 ;
-(void)setDefaultTypingAttributes:(NSDictionary *)arg1 ;
-(BOOL)isOutlineDisabled;
-(void)JFX_modifyRangesOfAttributedString:(id)arg1 isOutlineDisabled:(BOOL)arg2 ;
-(void)JFX_modifyEntireAttributedString:(id)arg1 forTargetSize:(CGSize)arg2 fontColor:(id)arg3 ;
-(NSNumber *)cachedScale;
-(void)setCachedScale:(NSNumber *)arg1 ;
-(NSNumber *)cachedRotation;
-(void)setCachedRotation:(NSNumber *)arg1 ;
-(PVMatrix44Double *)cachedPartialTransformNoScaleNoTranslation;
-(void)setCachedPartialTransformNoScaleNoTranslation:(PVMatrix44Double *)arg1 ;
-(BOOL)moveBeforeScalingToAvoidKeyboard;
@end
