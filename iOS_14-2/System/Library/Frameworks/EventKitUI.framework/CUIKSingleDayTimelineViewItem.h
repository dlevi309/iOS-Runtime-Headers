/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setVisibleHeight:(double)arg1;
-(double)enoughHeightForOneLine;
-(CGRect*)stagedFrame;
-(NSDate *)end;
-(NSDate *)start;
-(void)setTravelTimeHeight:(double)arg1;
-(BOOL)visibleHeightLocked;
-(BOOL)hideTravelTime;
-(EKEvent *)event;
-(double)viewMaxNaturalTextHeight;
-(void)setStagedFrame:(CGRect)arg1;
-(CGRect)unPinnedViewFrame;
-(void)setUnPinnedViewFrame:(CGRect)arg1;
-(NSDate *)startWithTravelTime;

@end

