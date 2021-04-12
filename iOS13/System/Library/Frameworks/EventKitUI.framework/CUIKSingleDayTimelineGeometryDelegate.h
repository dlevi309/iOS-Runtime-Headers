/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol CUIKSingleDayTimelineGeometryDelegate <NSObject>
@property (nonatomic,readonly) CGRect displayedRect; 
@property (nonatomic,readonly) double hourHeight; 
@property (nonatomic,readonly) double topPadding; 
@property (nonatomic,readonly) double timeWidth; 
@property (nonatomic,readonly) BOOL originIsUpperLeft; 
@optional
-(BOOL)shouldReverseLayoutDirection;

@required
-(double)topPadding;
-(CGPoint*)pointForDate:(double)arg1;
-(double)dateForPoint:(CGPoint)arg1;
-(double)hourHeight;
-(double)timeWidth;
-(CGRect)displayedRect;
-(BOOL)originIsUpperLeft;

@end

