/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/CUIKSingleDayTimelineGeometryDelegate.h>
#import <libobjc.A.dylib/EKDayOccurrenceViewDelegate.h>

@class EKDayViewContent, NSString;

@interface EKDayViewContentGeometryDelegate : NSObject <CUIKSingleDayTimelineGeometryDelegate, EKDayOccurrenceViewDelegate> {

	EKDayViewContent* _dayViewContent;
	CGRect _frame;
	CGRect _bounds;

}

@property (assign,nonatomic,__weak) EKDayViewContent * dayViewContent;              //@synthesize dayViewContent=_dayViewContent - In the implementation block
@property (assign,nonatomic) CGRect frame;                                          //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                         //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) CGRect displayedRect; 
@property (nonatomic,readonly) double hourHeight; 
@property (nonatomic,readonly) double topPadding; 
@property (nonatomic,readonly) double timeWidth; 
@property (nonatomic,readonly) BOOL originIsUpperLeft; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(double)topPadding;
-(double)hourHeight;
-(CGRect)displayedRect;
-(CGRect)frame;
-(void)setBounds:(CGRect)arg1 ;
-(EKDayViewContent *)dayViewContent;
-(CGPoint)pointForDate:(double)arg1 ;
-(NSString *)description;
-(void)setFrame:(CGRect)arg1 ;
-(double)timeWidth;
-(void)setDayViewContent:(EKDayViewContent *)arg1 ;
-(double)dateForPoint:(CGPoint)arg1 ;
-(BOOL)originIsUpperLeft;
-(BOOL)shouldReverseLayoutDirection;
@end

