/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKTemplateComplicationDisplay.h>
#import <libobjc.A.dylib/NTKComplicationDisplay.h>

@protocol NTKComplicationDisplayObserver;
@class UIColor, CLKFont, NSDate, CLKDevice, UIImageView, UIView, NTKFaceColorScheme, CLKComplicationTemplate, NSString;

@interface NTKUtilityComplicationView : UIView <NTKTemplateComplicationDisplay, NTKComplicationDisplay> {

	BOOL _highlighted;
	BOOL _usesLegibility;
	UIColor* _foregroundColor;
	CLKFont* _font;
	NSDate* _timeTravelDate;
	UIColor* _computedForegroundColor;
	UIColor* _computedPlatterColor;
	double _computedForegroundAlpha;
	double _computedForegroundImageAlpha;
	BOOL _canUseCurvedText;
	BOOL _shouldUseBackgroundPlatter;
	BOOL _alwaysEnforcePlatterInset;
	BOOL _useRoundedFontDesign;
	BOOL _useBlockyHighlightCorners;
	BOOL _suppressesInternalColorOverrides;
	BOOL _editing;
	id<NTKComplicationDisplayObserver> displayObserver;
	double _foregroundAlpha;
	UIColor* _shadowColor;
	CLKDevice* _device;
	UIColor* _accentColor;
	double _foregroundImageAlpha;
	unsigned long long _placement;
	double _fontWeight;
	double _editingRotationAngle;
	UIImageView* _backgroundPlatter;
	double _minimumWidth;
	UIView* _highlightView;
	NTKFaceColorScheme* _colorScheme;
	UIColor* _overrideColor;
	UIColor* _platterColor;
	CLKComplicationTemplate* _complicationTemplate;
	CGSize _maxSize;
	UIEdgeInsets _touchEdgeInsets;

}

@property (nonatomic,retain) UIImageView * backgroundPlatter;                                        //@synthesize backgroundPlatter=_backgroundPlatter - In the implementation block
@property (assign,nonatomic) double minimumWidth;                                                    //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                                                 //@synthesize highlightView=_highlightView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets touchEdgeInsets;                                           //@synthesize touchEdgeInsets=_touchEdgeInsets - In the implementation block
@property (nonatomic,retain) NTKFaceColorScheme * colorScheme;                                       //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,retain) UIColor * overrideColor;                                                //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,retain) UIColor * platterColor;                                                 //@synthesize platterColor=_platterColor - In the implementation block
@property (nonatomic,readonly) CGSize maxSize;                                                       //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,readonly) BOOL editing;                                                         //@synthesize editing=_editing - In the implementation block
@property (nonatomic,readonly) CLKComplicationTemplate * complicationTemplate;                       //@synthesize complicationTemplate=_complicationTemplate - In the implementation block
@property (nonatomic,retain) CLKDevice * device;                                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                                              //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                                                  //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,retain) UIColor * accentColor;                                                  //@synthesize accentColor=_accentColor - In the implementation block
@property (assign,nonatomic) BOOL usesLegibility;                                                    //@synthesize usesLegibility=_usesLegibility - In the implementation block
@property (assign,nonatomic) double foregroundAlpha;                                                 //@synthesize foregroundAlpha=_foregroundAlpha - In the implementation block
@property (assign,nonatomic) double foregroundImageAlpha;                                            //@synthesize foregroundImageAlpha=_foregroundImageAlpha - In the implementation block
@property (assign,nonatomic) unsigned long long placement;                                           //@synthesize placement=_placement - In the implementation block
@property (assign,nonatomic) BOOL shouldUseBackgroundPlatter;                                        //@synthesize shouldUseBackgroundPlatter=_shouldUseBackgroundPlatter - In the implementation block
@property (assign,nonatomic) BOOL alwaysEnforcePlatterInset;                                         //@synthesize alwaysEnforcePlatterInset=_alwaysEnforcePlatterInset - In the implementation block
@property (readonly) NSDate * timeTravelDate;                                                        //@synthesize timeTravelDate=_timeTravelDate - In the implementation block
@property (assign,nonatomic) BOOL useRoundedFontDesign;                                              //@synthesize useRoundedFontDesign=_useRoundedFontDesign - In the implementation block
@property (assign,nonatomic) double fontWeight;                                                      //@synthesize fontWeight=_fontWeight - In the implementation block
@property (nonatomic,retain) CLKFont * font;                                                         //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) BOOL useBlockyHighlightCorners;                                         //@synthesize useBlockyHighlightCorners=_useBlockyHighlightCorners - In the implementation block
@property (assign,nonatomic) double editingRotationAngle;                                            //@synthesize editingRotationAngle=_editingRotationAngle - In the implementation block
@property (assign,nonatomic) BOOL suppressesInternalColorOverrides;                                  //@synthesize suppressesInternalColorOverrides=_suppressesInternalColorOverrides - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText;                                                  //@synthesize canUseCurvedText=_canUseCurvedText - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(id)largeComplicationViewForType:(unsigned long long)arg1 narrow:(BOOL)arg2 ;
+(id)smallComplicationViewForType:(unsigned long long)arg1 ;
+(id)_stopwatchImageProvider;
+(id)_preferredAdditionalFontSettings;
+(id)_timerImageProvider;
+(id)_alarmImageProviderActive:(BOOL)arg1 ;
-(CLKDevice *)device;
-(void)setMaxSize:(CGSize)arg1 ;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(CLKFont *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CLKFont *)font;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)minimumWidth;
-(UIView *)highlightView;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)setMinimumWidth:(double)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)editing;
-(unsigned long long)placement;
-(void)setPlacement:(unsigned long long)arg1 ;
-(UIColor *)foregroundColor;
-(void)setFontWeight:(double)arg1 ;
-(double)fontWeight;
-(void)setHighlightView:(UIView *)arg1 ;
-(double)foregroundAlpha;
-(void)setForegroundAlpha:(double)arg1 ;
-(CGSize)maxSize;
-(void)setDevice:(CLKDevice *)arg1 ;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(NTKFaceColorScheme *)colorScheme;
-(void)setColorScheme:(NTKFaceColorScheme *)arg1 ;
-(UIColor *)platterColor;
-(CLKComplicationTemplate *)complicationTemplate;
-(UIColor *)accentColor;
-(UIEdgeInsets)touchEdgeInsets;
-(void)setTouchEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)_standardFont;
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setDisplayObserver:(id<NTKComplicationDisplayObserver>)arg1 ;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1 ;
-(void)setForegroundImageAlpha:(double)arg1 ;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(void)setSuppressesInternalColorOverrides:(BOOL)arg1 ;
-(void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2 ;
-(void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5 ;
-(NSDate *)timeTravelDate;
-(void)setPlatterColor:(UIColor *)arg1 ;
-(void)setUseRoundedFontDesign:(BOOL)arg1 ;
-(void)setShouldUseBackgroundPlatter:(BOOL)arg1 ;
-(void)setAlwaysEnforcePlatterInset:(BOOL)arg1 ;
-(void)setAccentColor:(UIColor *)arg1 ;
-(double)foregroundImageAlpha;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)usesLegibility;
-(void)setUseBlockyHighlightCorners:(BOOL)arg1 ;
-(void)setEditingRotationAngle:(double)arg1 ;
-(void)setComplicationTemplate:(id)arg1 reason:(long long)arg2 ;
-(id)_newImageViewSubview;
-(void)_computeForegroundColor;
-(void)_computePlatterColor;
-(void)_updateForegroundColor;
-(void)_updatePlatterColor;
-(void)_updateLabelsForFontChange;
-(id)_computedForegroundColor;
-(void)_updateForTemplateChange;
-(id)_computedPlatterColor;
-(void)_updateImageViewColor:(id)arg1 ;
-(BOOL)useRoundedFontDesign;
-(id)_newHighlightView;
-(void)_computeForegroundAlpha;
-(void)_computeForegroundImageAlpha;
-(void)_enumerateColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_updateForegroundAlpha;
-(void)_applyForegroundAlpha;
-(void)_enumerateColoringStackedImagesViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_applyColorScheme:(id)arg1 ;
-(UIEdgeInsets)_touchEdgeInsetsForPlacement:(unsigned long long)arg1 ;
-(BOOL)shouldUseBackgroundPlatter;
-(BOOL)alwaysEnforcePlatterInset;
-(double)_widthThatFits;
-(BOOL)shouldUsePlatterInset;
-(id)_backgroundPlatterImage;
-(void)_updateContentForMaxSizeChange;
-(void)_updateContentForEditingChange;
-(id)_smallCapsFont;
-(id)_newLabelSubviewWithFont:(id)arg1 variant:(BOOL)arg2 ;
-(id)_newStandardLabelSubviewVariant:(BOOL)arg1 ;
-(id)_newHighlightViewVariant:(BOOL)arg1 ;
-(id)_newImageViewSubviewWithAlpha:(double)arg1 ;
-(void)_updateForegroundImageAlpha;
-(BOOL)isPlacementForTopBezelComplication;
-(void)layoutLabelVertically:(id)arg1 ;
-(void)_updateImageViewAlpha:(id)arg1 ;
-(id)_newDigitalTimeLabelSubviewWithOptions:(unsigned long long)arg1 ;
-(id)_newStandardLabelSubview;
-(id)_newStandardCurvedLabelSubview;
-(id)_newCurvedHighlightView;
-(BOOL)useBlockyHighlightCorners;
-(double)editingRotationAngle;
-(BOOL)suppressesInternalColorOverrides;
-(UIImageView *)backgroundPlatter;
-(void)setBackgroundPlatter:(UIImageView *)arg1 ;
@end

