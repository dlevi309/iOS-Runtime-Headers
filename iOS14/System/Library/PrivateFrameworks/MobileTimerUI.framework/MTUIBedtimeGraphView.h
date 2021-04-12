/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILayoutGuide, MTAlarm, NSArray, MTUIBedtimeGraphData, NSMutableArray, NSLayoutConstraint, UITapGestureRecognizer;

@interface MTUIBedtimeGraphView : UIView {

	UILayoutGuide* _axesLayoutGuide;
	MTAlarm* _sleepAlarm;
	NSArray* _sleepData;
	MTUIBedtimeGraphData* _graphData;
	NSMutableArray* _orderedGraphColumns;
	NSLayoutConstraint* _topAxisConstraint;
	NSLayoutConstraint* _bottomAxisConstraint;
	NSArray* _dayLabels;
	NSArray* _labelTitles;
	NSArray* _dayCenterXConstraints;
	NSLayoutConstraint* _labelBaselineConstraint;
	UITapGestureRecognizer* _tapRecognizer;
	unsigned long long _graphStyle;

}

@property (nonatomic,retain) MTUIBedtimeGraphData * graphData;                          //@synthesize graphData=_graphData - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedGraphColumns;                      //@synthesize orderedGraphColumns=_orderedGraphColumns - In the implementation block
@property (nonatomic,retain) UILayoutGuide * axesLayoutGuide;                           //@synthesize axesLayoutGuide=_axesLayoutGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topAxisConstraint;                    //@synthesize topAxisConstraint=_topAxisConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomAxisConstraint;                 //@synthesize bottomAxisConstraint=_bottomAxisConstraint - In the implementation block
@property (nonatomic,retain) NSArray * dayLabels;                                       //@synthesize dayLabels=_dayLabels - In the implementation block
@property (nonatomic,retain) NSArray * labelTitles;                                     //@synthesize labelTitles=_labelTitles - In the implementation block
@property (nonatomic,retain) NSArray * dayCenterXConstraints;                           //@synthesize dayCenterXConstraints=_dayCenterXConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelBaselineConstraint;              //@synthesize labelBaselineConstraint=_labelBaselineConstraint - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                    //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (assign,nonatomic) unsigned long long graphStyle;                             //@synthesize graphStyle=_graphStyle - In the implementation block
@property (nonatomic,readonly) double bedtimeOriginY; 
@property (nonatomic,readonly) double wakeTimeOriginY; 
@property (nonatomic,copy) MTAlarm * sleepAlarm;                                        //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (nonatomic,retain) NSArray * sleepData;                                       //@synthesize sleepData=_sleepData - In the implementation block
-(MTAlarm *)sleepAlarm;
-(id)viewForLastBaselineLayout;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(MTUIBedtimeGraphData *)graphData;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)setGraphData:(MTUIBedtimeGraphData *)arg1 ;
-(void)setupConstraints;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 graphStyle:(unsigned long long)arg2 ;
-(void)setGraphStyle:(unsigned long long)arg1 ;
-(void)setOrderedGraphColumns:(NSMutableArray *)arg1 ;
-(void)setAxesLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)axesLayoutGuide;
-(void)graphTapped:(id)arg1 ;
-(void)setTopAxisConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topAxisConstraint;
-(void)setBottomAxisConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomAxisConstraint;
-(NSArray *)dayLabels;
-(void)setLabelBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelBaselineConstraint;
-(void)setDayCenterXConstraints:(NSArray *)arg1 ;
-(void)_updateLabelTitles;
-(double)barOriginXForBarAtIndex:(unsigned long long)arg1 outOfCount:(unsigned long long)arg2 shouldChangeForRTL:(BOOL)arg3 ;
-(NSArray *)dayCenterXConstraints;
-(unsigned long long)graphStyle;
-(NSArray *)sleepData;
-(void)processSleepData;
-(double)bedtimeOriginY;
-(double)wakeTimeOriginY;
-(NSMutableArray *)orderedGraphColumns;
-(void)setSleepData:(NSArray *)arg1 ;
-(void)setDayLabels:(NSArray *)arg1 ;
-(NSArray *)labelTitles;
-(void)setLabelTitles:(NSArray *)arg1 ;
@end

