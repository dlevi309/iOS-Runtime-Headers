/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/EKCurrentTimeMarkerViewUpdating.h>
#import <libobjc.A.dylib/EKUITintColorUpdateDelegate.h>

@protocol EKDayTimeViewDelegate;
@class NSMutableArray, NSMutableDictionary, EKCurrentTimeMarkerView, UIView, UIColor, UIVisualEffect, NSString;

@interface EKDayTimeView : UIView <EKCurrentTimeMarkerViewUpdating, EKUITintColorUpdateDelegate> {

	NSMutableArray* _contentViews;
	NSMutableDictionary* _visualEffectViews;
	unsigned _leftBorder : 1;
	unsigned _rightBorder : 1;
	double _highlightedHour;
	long long _orientation;
	long long _targetSizeClass;
	EKCurrentTimeMarkerView* _timeMarker;
	UIView* _timeMarkerExtension;
	double _timeWidth;
	BOOL _showsTimeMarker;
	BOOL _showsTimeMarkerExtension;
	BOOL _usesLightText;
	UIColor* _timeColor;
	double _hoursToPad;
	UIVisualEffect* _visualEffect;
	double _hourHeightScale;
	double _hourHeight;
	id<EKDayTimeViewDelegate> _delegate;
	NSRange _hoursToRender;

}

@property (assign,nonatomic) BOOL showsLeftBorder; 
@property (assign,nonatomic) BOOL showsRightBorder; 
@property (assign,nonatomic) BOOL showsTimeMarker;                                   //@synthesize showsTimeMarker=_showsTimeMarker - In the implementation block
@property (assign,nonatomic) BOOL showsTimeMarkerExtension;                          //@synthesize showsTimeMarkerExtension=_showsTimeMarkerExtension - In the implementation block
@property (assign,nonatomic) BOOL usesLightText;                                     //@synthesize usesLightText=_usesLightText - In the implementation block
@property (assign,nonatomic) double highlightedHour; 
@property (assign,nonatomic) double hoursToPad;                                      //@synthesize hoursToPad=_hoursToPad - In the implementation block
@property (nonatomic,retain) UIColor * timeColor;                                    //@synthesize timeColor=_timeColor - In the implementation block
@property (nonatomic,readonly) EKCurrentTimeMarkerView * timeMarker; 
@property (nonatomic,retain) UIVisualEffect * visualEffect;                          //@synthesize visualEffect=_visualEffect - In the implementation block
@property (assign,nonatomic) NSRange hoursToRender;                                  //@synthesize hoursToRender=_hoursToRender - In the implementation block
@property (assign,nonatomic) double hourHeightScale;                                 //@synthesize hourHeightScale=_hourHeightScale - In the implementation block
@property (nonatomic,readonly) double hourHeight;                                    //@synthesize hourHeight=_hourHeight - In the implementation block
@property (nonatomic,readonly) double defaultHeight; 
@property (assign,nonatomic,__weak) id<EKDayTimeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)verticalPadding;
+(double)_hourFontSize;
+(double)hourHeightForSizeClass:(long long)arg1 orientation:(long long)arg2 ;
+(double)_widthForOrientation:(long long)arg1 sizeClass:(long long)arg2 excludeCurrentTime:(BOOL)arg3 ;
+(double)_timeVerticalInsetForOrientation:(long long)arg1 inViewHierarchy:(id)arg2 ;
+(double)timeWidthForOrientation:(long long)arg1 inViewHierarchy:(id)arg2 ;
+(id)allDayLabelBoldFont;
+(id)_noonLocalizedString;
+(double)heightOfHourTextForHour:(long long)arg1 orientation:(long long)arg2 ;
+(double)defaultHourScale;
+(double)_noonLocalizedWidthForOrientation:(long long)arg1 ;
+(double)timeInsetForSizeClass:(long long)arg1 orientation:(long long)arg2 ;
+(double)defaultHeightForSizeClass:(long long)arg1 orientation:(long long)arg2 withHourScale:(double)arg3 ;
+(void)setVerticalPadding:(double)arg1 ;
+(id)_boldFontForOrientation:(long long)arg1 ;
+(double)_timeTextWidthForSizeClass:(long long)arg1 orientation:(long long)arg2 ;
+(id)_hourFontForOrientation:(long long)arg1 ;
+(id)_normalFontForOrientation:(long long)arg1 ;
+(void)_registerForInvalidation;
+(void)_setWidth:(double)arg1 forOrientation:(long long)arg2 sizeClass:(long long)arg3 excludeCurrentTime:(BOOL)arg4 ;
+(void)_invalidateCachedValues;
+(id)unscaledAllDayLabelFont;
+(double)defaultHeightForSizeClass:(long long)arg1 orientation:(long long)arg2 ;
+(void)_calculateWidthForSizeClass:(long long)arg1 orientation:(long long)arg2 excludeCurrentTime:(BOOL)arg3 ;
+(void)_invalidateWidth;
+(id)allDayLabelFont;
+(double)hourWidthForSizeClass:(long long)arg1 orientation:(long long)arg2 ;
+(double)_dynamicFontSizeForOrientation:(long long)arg1 ;
-(void)setVisualEffect:(UIVisualEffect *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 sizeClass:(long long)arg2 ;
-(void)setShowsRightBorder:(BOOL)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(BOOL)showsLeftBorder;
-(void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2 ;
-(double)topPadding;
-(double)defaultHeight;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setTimeColor:(UIColor *)arg1 ;
-(void)setHoursToRender:(NSRange)arg1 ;
-(EKCurrentTimeMarkerView *)timeMarker;
-(UIVisualEffect *)visualEffect;
-(double)highlightedHour;
-(void)updateMarkerPosition;
-(void)updateHourHeight;
-(BOOL)showsRightBorder;
-(void)tintColorDidChange;
-(void)setHoursToPad:(double)arg1 ;
-(void)setShowsLeftBorder:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)hourHeight;
-(NSRange)hoursToRender;
-(BOOL)showsTimeMarker;
-(void)setShowsTimeMarker:(BOOL)arg1 ;
-(long long)_sizeClass;
-(void)_localeChanged;
-(id<EKDayTimeViewDelegate>)delegate;
-(double)hourHeightScale;
-(UIColor *)timeColor;
-(void)setNeedsDisplay;
-(void)_fontSizeChanged;
-(double)scaledHourHeight;
-(BOOL)showsTimeMarkerExtension;
-(void)setDelegate:(id<EKDayTimeViewDelegate>)arg1 ;
-(double)_timeWidth;
-(void)setUsesLightText:(BOOL)arg1 ;
-(void)_invalidateTimeWidth;
-(BOOL)usesLightText;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_positionOfSecond:(int)arg1 ;
-(void)setShowsTimeMarkerExtension:(BOOL)arg1 ;
-(void)_sizeClassChanged;
-(void)setHighlightedHour:(double)arg1 ;
-(void)setHourHeightScale:(double)arg1 ;
-(double)hoursToPad;
-(void)drawRect:(CGRect)arg1 forContentView:(id)arg2 withHourRange:(NSRange)arg3 ;
-(void)dealloc;
-(void)setOrientation:(long long)arg1 ;
-(void)layoutFrames;
@end

