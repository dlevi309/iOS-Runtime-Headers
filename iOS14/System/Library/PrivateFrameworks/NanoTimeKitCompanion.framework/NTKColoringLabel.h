/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKLegibilityLabel.h>
#import <libobjc.A.dylib/NTKColoringView.h>
#import <libobjc.A.dylib/CLKUILabel.h>
#import <libobjc.A.dylib/NTKTimeTravelState.h>

@protocol CLKMonochromeFilterProvider;
@class UIColor, UIFont, NSString, NSAttributedString, CLKDevice, _NTKColorManager, NSNumber, CLKFont, UIView, CLKTextProvider, NSParagraphStyle;

@interface NTKColoringLabel : NTKLegibilityLabel <NTKColoringView, CLKUILabel, NTKTimeTravelState> {

	CLKDevice* _device;
	unsigned long long _options;
	_NTKColorManager* _colorManager;
	NSNumber* _updateToken;
	BOOL _updatedAfterTimeTravelStateChange;
	CLKFont* _preTimeTravelFont;
	BOOL _monochromeSnapshot;
	double _previousFraction;
	NSAttributedString* _originalString;
	UIView* _snapshot;
	BOOL _inTimeTravel;
	BOOL _uppercase;
	BOOL _usesTextProviderTintColoring;
	BOOL _isTextTruncated;
	BOOL _cachedSizeIsValid;
	BOOL _cachedOpticalEdgeInsetsIsValid;
	BOOL _usesTextProviderSize;
	UIColor* _overrideColor;
	CLKTextProvider* _textProvider;
	CLKFont* _monospacedDigitsFont;
	CLKFont* _textProviderFont;
	CLKFont* _textProviderSmallCapsBaseFont;
	double _maxWidth;
	NSParagraphStyle* _paragraphStyle;
	double _tracking;
	/*^block*/id _nowProvider;
	/*^block*/id _needsResizeHandler;
	long long _twoToneStyleInMonochrome;
	id<CLKMonochromeFilterProvider> _filterProvider;
	CGSize _cachedSingleLineSize;
	UIEdgeInsets _cachedOpticalEdgeInsets;

}

@property (assign,nonatomic) CGSize cachedSingleLineSize;                                        //@synthesize cachedSingleLineSize=_cachedSingleLineSize - In the implementation block
@property (assign,nonatomic) BOOL cachedSizeIsValid;                                             //@synthesize cachedSizeIsValid=_cachedSizeIsValid - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets cachedOpticalEdgeInsets;                             //@synthesize cachedOpticalEdgeInsets=_cachedOpticalEdgeInsets - In the implementation block
@property (assign,nonatomic) BOOL cachedOpticalEdgeInsetsIsValid;                                //@synthesize cachedOpticalEdgeInsetsIsValid=_cachedOpticalEdgeInsetsIsValid - In the implementation block
@property (assign,nonatomic) BOOL usesTextProviderSize;                                          //@synthesize usesTextProviderSize=_usesTextProviderSize - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                       //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) CLKTextProvider * textProvider;                                     //@synthesize textProvider=_textProvider - In the implementation block
@property (nonatomic,retain) CLKFont * monospacedDigitsFont;                                     //@synthesize monospacedDigitsFont=_monospacedDigitsFont - In the implementation block
@property (nonatomic,retain) CLKFont * textProviderFont;                                         //@synthesize textProviderFont=_textProviderFont - In the implementation block
@property (nonatomic,retain) CLKFont * textProviderSmallCapsBaseFont;                            //@synthesize textProviderSmallCapsBaseFont=_textProviderSmallCapsBaseFont - In the implementation block
@property (assign,nonatomic) double maxWidth;                                                    //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) BOOL uppercase;                                                     //@synthesize uppercase=_uppercase - In the implementation block
@property (assign,nonatomic) BOOL usesTextProviderTintColoring;                                  //@synthesize usesTextProviderTintColoring=_usesTextProviderTintColoring - In the implementation block
@property (nonatomic,readonly) BOOL isTextTruncated;                                             //@synthesize isTextTruncated=_isTextTruncated - In the implementation block
@property (nonatomic,copy) NSParagraphStyle * paragraphStyle;                                    //@synthesize paragraphStyle=_paragraphStyle - In the implementation block
@property (assign,nonatomic) double tracking;                                                    //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,copy) id nowProvider;                                                       //@synthesize nowProvider=_nowProvider - In the implementation block
@property (nonatomic,copy) id needsResizeHandler;                                                //@synthesize needsResizeHandler=_needsResizeHandler - In the implementation block
@property (assign,nonatomic) long long twoToneStyleInMonochrome;                                 //@synthesize twoToneStyleInMonochrome=_twoToneStyleInMonochrome - In the implementation block
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor;                                            //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,readonly) double _lastLineBaseline; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) UIEdgeInsets opticalInsets; 
@property (assign,nonatomic) BOOL inTimeTravel;                                                  //@synthesize inTimeTravel=_inTimeTravel - In the implementation block
+(id)labelWithOptions:(unsigned long long)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setTracking:(double)arg1 ;
-(id)_font;
-(double)minimumWidth;
-(double)tracking;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setParagraphStyle:(NSParagraphStyle *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(double)maxWidth;
-(UIColor *)color;
-(void)setText:(NSString *)arg1 ;
-(unsigned long long)options;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setUppercase:(BOOL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(BOOL)uppercase;
-(void)setColor:(UIColor *)arg1 ;
-(NSParagraphStyle *)paragraphStyle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidateCachedSize;
-(CLKTextProvider *)textProvider;
-(void)sizeToFit;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setMaxWidth:(double)arg1 ;
-(double)_lastLineBaseline;
-(double)_firstLineBaseline;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(void)setInTimeTravel:(BOOL)arg1 ;
-(void)setNowProvider:(id)arg1 ;
-(void)setNeedsResizeHandler:(id)arg1 ;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setTextProviderFont:(CLKFont *)arg1 ;
-(double)widthForMaxWidth:(double)arg1 withFont:(id)arg2 ;
-(void)editingDidEnd;
-(void)transitionToMonochromeWithFraction:(double)arg1 style:(long long)arg2 ;
-(void)updateMonochromeColorWithStyle:(long long)arg1 ;
-(void)setUsesTextProviderTintColoring:(BOOL)arg1 ;
-(void)setTwoToneStyleInMonochrome:(long long)arg1 ;
-(id)_activeFont;
-(void)_updateDynamicTracking;
-(void)_requeryTextProviderAndNotify:(BOOL)arg1 ;
-(BOOL)inTimeTravel;
-(CLKFont *)monospacedDigitsFont;
-(void)setMonospacedDigitsFont:(CLKFont *)arg1 ;
-(long long)twoToneStyleInMonochrome;
-(void)_updateTwoToneLabelMonochromeColor;
-(void)_transitionTwoToneLabelToMonochromeWithFraction:(double)arg1 ;
-(double)widthForMaxWidth:(double)arg1 withFont:(id)arg2 smallCapsBaseFont:(id)arg3 ;
-(double)minimumWithFont:(id)arg1 ;
-(double)minimumWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 ;
-(void)_setAnimationAlpha:(double)arg1 ;
-(UIEdgeInsets)opticalInsets;
-(BOOL)usesLegibility:(BOOL)arg1 ;
-(double)widthForMaxWidth:(double)arg1 ;
-(void)setTextProviderSmallCapsBaseFont:(CLKFont *)arg1 ;
-(id)_fontWithMonospaceNumbers:(id)arg1 ;
-(void)_setUpSnapshot;
-(CLKFont *)textProviderFont;
-(CLKFont *)textProviderSmallCapsBaseFont;
-(BOOL)usesTextProviderTintColoring;
-(BOOL)isTextTruncated;
-(id)nowProvider;
-(id)needsResizeHandler;
-(CGSize)cachedSingleLineSize;
-(void)setCachedSingleLineSize:(CGSize)arg1 ;
-(BOOL)cachedSizeIsValid;
-(void)setCachedSizeIsValid:(BOOL)arg1 ;
-(UIEdgeInsets)cachedOpticalEdgeInsets;
-(BOOL)cachedOpticalEdgeInsetsIsValid;
-(void)setCachedOpticalEdgeInsetsIsValid:(BOOL)arg1 ;
-(BOOL)usesTextProviderSize;
-(void)setUsesTextProviderSize:(BOOL)arg1 ;
@end

