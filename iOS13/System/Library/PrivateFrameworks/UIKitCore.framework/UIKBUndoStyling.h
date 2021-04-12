/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIBlurEffect, UIVibrancyEffect, UIColor;

@interface UIKBUndoStyling : NSObject {

	BOOL _undoRedoIconOnly;
	BOOL _isRTL;
	BOOL _cutCopyPasteIconOnly;
	UIBlurEffect* _backgroundBlurEffect;
	UIVibrancyEffect* _backgroundVibrancyEffect;
	UIColor* _HUDbackgroundColor;
	UIColor* _HUDShadowColor;
	UIColor* _buttonGlyphColorEnabled;
	UIColor* _buttonGlyphColorPressed;
	UIColor* _buttonGlyphColorDisabled;
	UIColor* _elementBackgroundColor;
	UIColor* _elementCoverColor;
	long long _appearance;

}

@property (nonatomic,retain) UIBlurEffect * backgroundBlurEffect;                      //@synthesize backgroundBlurEffect=_backgroundBlurEffect - In the implementation block
@property (nonatomic,retain) UIVibrancyEffect * backgroundVibrancyEffect;              //@synthesize backgroundVibrancyEffect=_backgroundVibrancyEffect - In the implementation block
@property (nonatomic,retain) UIColor * HUDbackgroundColor;                             //@synthesize HUDbackgroundColor=_HUDbackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * HUDShadowColor;                                 //@synthesize HUDShadowColor=_HUDShadowColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonGlyphColorEnabled;                        //@synthesize buttonGlyphColorEnabled=_buttonGlyphColorEnabled - In the implementation block
@property (nonatomic,retain) UIColor * buttonGlyphColorPressed;                        //@synthesize buttonGlyphColorPressed=_buttonGlyphColorPressed - In the implementation block
@property (nonatomic,retain) UIColor * buttonGlyphColorDisabled;                       //@synthesize buttonGlyphColorDisabled=_buttonGlyphColorDisabled - In the implementation block
@property (nonatomic,retain) UIColor * elementBackgroundColor;                         //@synthesize elementBackgroundColor=_elementBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * elementCoverColor;                              //@synthesize elementCoverColor=_elementCoverColor - In the implementation block
@property (assign,nonatomic) BOOL undoRedoIconOnly;                                    //@synthesize undoRedoIconOnly=_undoRedoIconOnly - In the implementation block
@property (assign,nonatomic) BOOL cutCopyPasteIconOnly;                                //@synthesize cutCopyPasteIconOnly=_cutCopyPasteIconOnly - In the implementation block
@property (assign,nonatomic) BOOL isRTL;                                               //@synthesize isRTL=_isRTL - In the implementation block
@property (assign,nonatomic) long long appearance;                                     //@synthesize appearance=_appearance - In the implementation block
-(BOOL)isRTL;
-(long long)appearance;
-(void)setAppearance:(long long)arg1 ;
-(void)setIsRTL:(BOOL)arg1 ;
-(id)vibrancyEffectForBlur:(id)arg1 ;
-(void)createDynamicColors;
-(id)initWithKeyboardAppearance:(long long)arg1 isRTL:(BOOL)arg2 ;
-(UIBlurEffect *)backgroundBlurEffect;
-(void)setBackgroundBlurEffect:(UIBlurEffect *)arg1 ;
-(UIVibrancyEffect *)backgroundVibrancyEffect;
-(void)setBackgroundVibrancyEffect:(UIVibrancyEffect *)arg1 ;
-(UIColor *)HUDbackgroundColor;
-(void)setHUDbackgroundColor:(UIColor *)arg1 ;
-(UIColor *)HUDShadowColor;
-(void)setHUDShadowColor:(UIColor *)arg1 ;
-(UIColor *)buttonGlyphColorEnabled;
-(void)setButtonGlyphColorEnabled:(UIColor *)arg1 ;
-(UIColor *)buttonGlyphColorPressed;
-(void)setButtonGlyphColorPressed:(UIColor *)arg1 ;
-(UIColor *)buttonGlyphColorDisabled;
-(void)setButtonGlyphColorDisabled:(UIColor *)arg1 ;
-(UIColor *)elementBackgroundColor;
-(void)setElementBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)elementCoverColor;
-(void)setElementCoverColor:(UIColor *)arg1 ;
-(BOOL)undoRedoIconOnly;
-(void)setUndoRedoIconOnly:(BOOL)arg1 ;
-(BOOL)cutCopyPasteIconOnly;
-(void)setCutCopyPasteIconOnly:(BOOL)arg1 ;
@end

