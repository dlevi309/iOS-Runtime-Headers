/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/NTKDateComplicationDisplay.h>
#import <libobjc.A.dylib/NTKControl.h>

@protocol NTKComplicationDisplayObserver;
@class NSString, UILabel, UIView, UIColor, CLKDevice, CLKFont;

@interface NTKDateComplicationLabel : UIControl <NTKDateComplicationDisplay, NTKControl> {

	BOOL _frozen;
	NSString* _currentDateText;
	UILabel* _internalLabel;
	UIView* _highlightView;
	CGSize _cachedSize;
	NSRange _dayTextRange;
	BOOL _cachedSizeIsValid;
	UIColor* _textColor;
	UIColor* _computedTextColor;
	BOOL canUseCurvedText;
	BOOL _usesLegibility;
	BOOL _legibilityHidden;
	id<NTKComplicationDisplayObserver> displayObserver;
	long long _sizeStyle;
	long long _accentType;
	CLKDevice* _device;
	CLKFont* _font;
	UIColor* _accentColor;
	unsigned long long _overrideDateStyle;
	UIEdgeInsets _touchEdgeInsets;

}

@property (nonatomic,readonly) double _lastLineBaseline; 
@property (assign,setter=_setFirstLineBaselineFrameOriginY:,nonatomic) double _firstLineBaselineFrameOriginY; 
@property (assign,setter=_setLastLineBaselineFrameOriginY:,nonatomic) double _lastLineBaselineFrameOriginY; 
@property (nonatomic,readonly) long long sizeStyle;                                                                        //@synthesize sizeStyle=_sizeStyle - In the implementation block
@property (nonatomic,readonly) long long accentType;                                                                       //@synthesize accentType=_accentType - In the implementation block
@property (nonatomic,readonly) CLKDevice * device;                                                                         //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) CLKFont * font;                                                                               //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIColor * accentColor;                                                                        //@synthesize accentColor=_accentColor - In the implementation block
@property (assign,nonatomic) BOOL usesLegibility;                                                                          //@synthesize usesLegibility=_usesLegibility - In the implementation block
@property (assign,nonatomic) BOOL legibilityHidden;                                                                        //@synthesize legibilityHidden=_legibilityHidden - In the implementation block
@property (assign,nonatomic) unsigned long long overrideDateStyle;                                                         //@synthesize overrideDateStyle=_overrideDateStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets touchEdgeInsets;                                                                 //@synthesize touchEdgeInsets=_touchEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
-(CLKDevice *)device;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(CLKFont *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CLKFont *)font;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)_cornerRadius;
-(void)_setFont:(id)arg1 ;
-(UIColor *)textColor;
-(double)_lastLineBaseline;
-(CGSize)_highlightInset;
-(double)_firstLineBaselineOffsetFromBoundsTop;
-(void)_setText:(id)arg1 ;
-(double)_firstLineBaselineFrameOriginY;
-(void)_setFirstLineBaselineFrameOriginY:(double)arg1 ;
-(double)_lastLineBaselineFrameOriginY;
-(void)_setLastLineBaselineFrameOriginY:(double)arg1 ;
-(void)_updateTextColor;
-(UIColor *)accentColor;
-(UIEdgeInsets)touchEdgeInsets;
-(void)setTouchEdgeInsets:(UIEdgeInsets)arg1 ;
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setDisplayObserver:(id<NTKComplicationDisplayObserver>)arg1 ;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1 ;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(id)initWithSizeStyle:(long long)arg1 accentType:(long long)arg2 forDevice:(id)arg3 ;
-(void)setAccentColor:(UIColor *)arg1 ;
-(BOOL)usesLegibility;
-(void)setOverrideDateStyle:(unsigned long long)arg1 ;
-(void)setDateComplicationText:(id)arg1 withDayRange:(NSRange)arg2 forDateStyle:(unsigned long long)arg3 ;
-(unsigned long long)overrideDateStyle;
-(BOOL)shouldCancelTouchesInScrollview;
-(void)_computeTextColor;
-(double)_legibtilityShadowRadius;
-(long long)accentType;
-(void)_applyAccentColorAttributes;
-(void)setLegibilityHidden:(BOOL)arg1 ;
-(id)_attributedStringAccentingNumbersInString:(id)arg1 ;
-(void)_invalidateInternalLabelSize;
-(long long)sizeStyle;
-(BOOL)legibilityHidden;
@end

