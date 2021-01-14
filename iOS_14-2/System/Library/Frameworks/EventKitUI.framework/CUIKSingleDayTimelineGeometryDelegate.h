/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)hourHeight;
-(CGRect)displayedRect;
-(CGPoint*)pointForDate:(double)arg1;
-(double)timeWidth;
-(double)dateForPoint:(CGPoint)arg1;
-(BOOL)originIsUpperLeft;

@end

