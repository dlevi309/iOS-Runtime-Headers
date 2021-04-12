/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

@class NSDate, EKEvent;


@protocol CUIKSingleDayTimelineViewItem <NSObject>
@property (nonatomic,readonly) NSDate * startWithTravelTime; 
@property (nonatomic,readonly) NSDate * start; 
@property (nonatomic,readonly) NSDate * end; 
@property (nonatomic,readonly) BOOL hideTravelTime; 
@property (nonatomic,readonly) double enoughHeightForOneLine; 
@property (nonatomic,readonly) double viewMaxNaturalTextHeight; 
@property (nonatomic,readonly) EKEvent * event; 
@property (assign) CGRect unPinnedViewFrame; 
@property (readonly) BOOL visibleHeightLocked; 
@required
+(double)barToBarHorizontalDistanceIncludingBarWidth;
-(NSDate *)start;
-(NSDate *)end;
-(EKEvent *)event;
-(void)setVisibleHeight:(double)arg1;
-(double)viewMaxNaturalTextHeight;
-(void)setStagedFrame:(CGRect)arg1;
-(CGRect*)stagedFrame;
-(void)setTravelTimeHeight:(double)arg1;
-(NSDate *)startWithTravelTime;
-(BOOL)hideTravelTime;
-(double)enoughHeightForOneLine;
-(CGRect)unPinnedViewFrame;
-(void)setUnPinnedViewFrame:(CGRect)arg1;
-(BOOL)visibleHeightLocked;

@end

