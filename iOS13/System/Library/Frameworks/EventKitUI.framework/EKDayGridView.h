/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/EKUITintColorUpdateDelegate.h>
#import <libobjc.A.dylib/EKCurrentTimeMarkerViewUpdating.h>

@class UIColor, UIView, NSMutableArray, EKCurrentTimeMarkerView, UIImageView, NSMutableDictionary, UIVisualEffect, NSString;

@interface EKDayGridView : UIView <EKUITintColorUpdateDelegate, EKCurrentTimeMarkerViewUpdating> {

	double _timeInset;
	double _hourHeight;
	double _timeWidth;
	unsigned _leftBorder : 1;
	unsigned _rightBorder : 1;
	int _selected;
	double _fixedDayWidth;
	long long _orientation;
	CGRect _lastBounds;
	UIColor* _backgroundColor;
	UIView* _leftBorderView;
	NSMutableArray* _middleBorderViews;
	UIView* _rightBorderView;
	NSMutableArray* _gridPatternViews;
	unsigned long long _daysToDisplay;
	EKCurrentTimeMarkerView* _timeMarker;
	UIImageView* _timeDot;
	UIView* _highlightedDayBackground;
	UIView* _fadingHighlightedDayBackground;
	UIView* _gridContainerView;
	NSMutableDictionary* _gridParentViews;
	double _cachedWidthForOffMainThreadWork;
	long long _sizeClass;
	BOOL _needsLayoutInWindow;
	BOOL _rightBorderInsetsOccurrences;
	BOOL _showsTimeLine;
	BOOL _showsTimeMarker;
	BOOL _animatesTimeMarker;
	BOOL _usesVibrantGridDrawing;
	UIColor* _lineColor;
	long long _timeMarkerDotDay;
	double _eventHorizontalInset;
	double _hoursToPadTop;
	double _hoursToPadBottom;
	long long _highlightedDayIndex;
	UIVisualEffect* _gridVisualEffect;
	UIView* _occurrenceContainerView;
	double _gridHeightScale;

}

@property (assign,nonatomic) BOOL showsLeftBorder; 
@property (assign,nonatomic) BOOL showsRightBorder; 
@property (assign,nonatomic) BOOL rightBorderInsetsOccurrences;                   //@synthesize rightBorderInsetsOccurrences=_rightBorderInsetsOccurrences - In the implementation block
@property (assign,nonatomic) BOOL showsTimeLine;                                  //@synthesize showsTimeLine=_showsTimeLine - In the implementation block
@property (assign,nonatomic) BOOL showsTimeMarker;                                //@synthesize showsTimeMarker=_showsTimeMarker - In the implementation block
@property (assign,nonatomic) BOOL animatesTimeMarker;                             //@synthesize animatesTimeMarker=_animatesTimeMarker - In the implementation block
@property (assign,nonatomic) long long timeMarkerDotDay;                          //@synthesize timeMarkerDotDay=_timeMarkerDotDay - In the implementation block
@property (assign,nonatomic) double fixedDayWidth; 
@property (assign,nonatomic) double eventHorizontalInset;                         //@synthesize eventHorizontalInset=_eventHorizontalInset - In the implementation block
@property (assign,nonatomic) double hoursToPadTop;                                //@synthesize hoursToPadTop=_hoursToPadTop - In the implementation block
@property (assign,nonatomic) double hoursToPadBottom;                             //@synthesize hoursToPadBottom=_hoursToPadBottom - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (nonatomic,retain) UIColor * lineColor;                                 //@synthesize lineColor=_lineColor - In the implementation block
@property (assign,nonatomic) BOOL usesVibrantGridDrawing;                         //@synthesize usesVibrantGridDrawing=_usesVibrantGridDrawing - In the implementation block
@property (assign,nonatomic) long long highlightedDayIndex;                       //@synthesize highlightedDayIndex=_highlightedDayIndex - In the implementation block
@property (nonatomic,readonly) EKCurrentTimeMarkerView * timeMarker;              //@synthesize timeMarker=_timeMarker - In the implementation block
@property (nonatomic,readonly) double timeWidth; 
@property (nonatomic,readonly) double timeInset; 
@property (nonatomic,readonly) double topPadding; 
@property (nonatomic,readonly) double hourHeight; 
@property (nonatomic,readonly) double widthForOccurrences; 
@property (nonatomic,retain) UIVisualEffect * gridVisualEffect;                   //@synthesize gridVisualEffect=_gridVisualEffect - In the implementation block
@property (nonatomic,retain) UIView * occurrenceContainerView;                    //@synthesize occurrenceContainerView=_occurrenceContainerView - In the implementation block
@property (assign,nonatomic) double gridHeightScale;                              //@synthesize gridHeightScale=_gridHeightScale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cachedBackgroundImageForKey:(id)arg1 ;
+(void)cacheBackgroundImage:(id)arg1 forKey:(id)arg2 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)didMoveToWindow;
-(void)setSelected:(BOOL)arg1 ;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(double)bottomPadding;
-(double)topPadding;
-(long long)_sizeClass;
-(id)initWithFrame:(CGRect)arg1 sizeClass:(long long)arg2 backgroundColor:(id)arg3 opaque:(BOOL)arg4 numberOfDaysToDisplay:(unsigned long long)arg5 ;
-(void)setShowsLeftBorder:(BOOL)arg1 ;
-(BOOL)showsLeftBorder;
-(void)setFixedDayWidth:(double)arg1 ;
-(void)setHoursToPadTop:(double)arg1 ;
-(UIView *)occurrenceContainerView;
-(double)positionOfSecond:(long long)arg1 ;
-(double)_dayWidth;
-(double)widthForOccurrences;
-(int)secondAtPosition:(double)arg1 ;
-(BOOL)usesVibrantGridDrawing;
-(double)fixedDayWidth;
-(double)hourHeight;
-(double)timeWidth;
-(void)setAnimatesTimeMarker:(BOOL)arg1 ;
-(void)setShowsTimeMarker:(BOOL)arg1 ;
-(BOOL)showsTimeLine;
-(void)updateHourHeight;
-(void)updateMarkerPosition;
-(void)setShowsTimeLine:(BOOL)arg1 ;
-(EKCurrentTimeMarkerView *)timeMarker;
-(BOOL)animatesTimeMarker;
-(BOOL)showsTimeMarker;
-(void)setShowsRightBorder:(BOOL)arg1 ;
-(UIVisualEffect *)gridVisualEffect;
-(void)setGridVisualEffect:(UIVisualEffect *)arg1 ;
-(void)setUsesVibrantGridDrawing:(BOOL)arg1 ;
-(void)setGridHeightScale:(double)arg1 ;
-(void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2 ;
-(long long)timeMarkerDotDay;
-(double)eventHorizontalInset;
-(id)timeDotImage;
-(void)_updateTimeMarker;
-(void)_layoutHighlight;
-(id)_generateGridImage;
-(double)timeInset;
-(void)setTimeMarkerDotDay:(long long)arg1 ;
-(BOOL)showsRightBorder;
-(CGRect)rectForStartSeconds:(long long)arg1 endSeconds:(long long)arg2 ;
-(void)setHighlightedDayIndex:(long long)arg1 ;
-(BOOL)rightBorderInsetsOccurrences;
-(void)setRightBorderInsetsOccurrences:(BOOL)arg1 ;
-(void)setEventHorizontalInset:(double)arg1 ;
-(double)hoursToPadTop;
-(double)hoursToPadBottom;
-(void)setHoursToPadBottom:(double)arg1 ;
-(long long)highlightedDayIndex;
-(void)setOccurrenceContainerView:(UIView *)arg1 ;
-(double)gridHeightScale;
@end

