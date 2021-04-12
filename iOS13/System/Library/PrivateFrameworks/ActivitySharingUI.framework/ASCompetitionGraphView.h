/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
*/

#import <ActivitySharingUI/ActivitySharingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class ASCompetition, NSDateFormatter, UIFont, UIColor, NSString;

@interface ASCompetitionGraphView : UIView {

	ASCompetition* _competition;
	NSDateFormatter* _dateFormatter;
	BOOL _highlightsCurrentDay;
	BOOL _showsBackgroundDateGuide;
	BOOL _showsBackgroundScoreGuide;
	BOOL _drawsDailyScoreLabels;
	BOOL _drawsFutureScoreDots;
	long long _alignment;
	double _horizontalInset;
	double _barWidth;
	double _spaceBetweenBars;
	double _bottomPadding;
	double _dayLabelBaselineOffset;
	double _maxBarHeight;
	UIFont* _currentDateFont;
	UIFont* _dateFont;
	UIColor* _dateColor;
	UIColor* _highlightedDateColor;

}

@property (nonatomic,retain) ASCompetition * competition;                 //@synthesize competition=_competition - In the implementation block
@property (assign,nonatomic) long long alignment;                         //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,copy) NSString * dateFormat; 
@property (assign,nonatomic) double horizontalInset;                      //@synthesize horizontalInset=_horizontalInset - In the implementation block
@property (assign,nonatomic) double barWidth;                             //@synthesize barWidth=_barWidth - In the implementation block
@property (assign,nonatomic) double spaceBetweenBars;                     //@synthesize spaceBetweenBars=_spaceBetweenBars - In the implementation block
@property (assign,nonatomic) double bottomPadding;                        //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (assign,nonatomic) double dayLabelBaselineOffset;               //@synthesize dayLabelBaselineOffset=_dayLabelBaselineOffset - In the implementation block
@property (assign,nonatomic) double maxBarHeight;                         //@synthesize maxBarHeight=_maxBarHeight - In the implementation block
@property (nonatomic,retain) UIFont * currentDateFont;                    //@synthesize currentDateFont=_currentDateFont - In the implementation block
@property (nonatomic,retain) UIFont * dateFont;                           //@synthesize dateFont=_dateFont - In the implementation block
@property (nonatomic,retain) UIColor * dateColor;                         //@synthesize dateColor=_dateColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedDateColor;              //@synthesize highlightedDateColor=_highlightedDateColor - In the implementation block
@property (assign,nonatomic) BOOL highlightsCurrentDay;                   //@synthesize highlightsCurrentDay=_highlightsCurrentDay - In the implementation block
@property (assign,nonatomic) BOOL showsBackgroundDateGuide;               //@synthesize showsBackgroundDateGuide=_showsBackgroundDateGuide - In the implementation block
@property (assign,nonatomic) BOOL showsBackgroundScoreGuide;              //@synthesize showsBackgroundScoreGuide=_showsBackgroundScoreGuide - In the implementation block
@property (assign,nonatomic) BOOL drawsDailyScoreLabels;                  //@synthesize drawsDailyScoreLabels=_drawsDailyScoreLabels - In the implementation block
@property (assign,nonatomic) BOOL drawsFutureScoreDots;                   //@synthesize drawsFutureScoreDots=_drawsFutureScoreDots - In the implementation block
@property (nonatomic,readonly) double lastBaselineY; 
+(id)companionGraph;
+(id)gizmoGraph;
-(NSString *)dateFormat;
-(void)setDateFormat:(NSString *)arg1 ;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(double)preferredHeight;
-(double)bottomPadding;
-(double)horizontalInset;
-(UIFont *)dateFont;
-(void)setBottomPadding:(double)arg1 ;
-(void)setHorizontalInset:(double)arg1 ;
-(void)setDateColor:(UIColor *)arg1 ;
-(UIColor *)dateColor;
-(void)setCompetition:(ASCompetition *)arg1 ;
-(ASCompetition *)competition;
-(void)setBarWidth:(double)arg1 ;
-(void)setSpaceBetweenBars:(double)arg1 ;
-(void)setMaxBarHeight:(double)arg1 ;
-(void)setHighlightsCurrentDay:(BOOL)arg1 ;
-(void)setShowsBackgroundDateGuide:(BOOL)arg1 ;
-(void)setShowsBackgroundScoreGuide:(BOOL)arg1 ;
-(void)setDrawsDailyScoreLabels:(BOOL)arg1 ;
-(void)setDrawsFutureScoreDots:(BOOL)arg1 ;
-(void)setCurrentDateFont:(UIFont *)arg1 ;
-(void)setDateFont:(UIFont *)arg1 ;
-(UIFont *)currentDateFont;
-(void)setDayLabelBaselineOffset:(double)arg1 ;
-(void)setHighlightedDateColor:(UIColor *)arg1 ;
-(unsigned long long)_maxDailyScore;
-(id)_attributesForDateLabelWithDate:(id)arg1 ;
-(double)_firstBarOriginXForDateLabelOriginX:(double)arg1 dateLabelWidth:(double)arg2 ;
-(double)_percentForScoreAtIndex:(unsigned long long)arg1 scores:(id)arg2 maxScore:(unsigned long long)arg3 ;
-(double)maxBarHeight;
-(double)lastBaselineY;
-(BOOL)drawsDailyScoreLabels;
-(BOOL)showsBackgroundScoreGuide;
-(id)_allScores;
-(unsigned long long)_minDailyScore;
-(double)barWidth;
-(double)spaceBetweenBars;
-(double)dayLabelBaselineOffset;
-(UIColor *)highlightedDateColor;
-(BOOL)highlightsCurrentDay;
-(BOOL)showsBackgroundDateGuide;
-(BOOL)drawsFutureScoreDots;
@end

