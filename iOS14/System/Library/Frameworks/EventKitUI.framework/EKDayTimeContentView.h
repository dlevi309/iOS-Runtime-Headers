/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class EKDayTimeView;

@interface EKDayTimeContentView : UIView {

	EKDayTimeView* _owner;
	NSRange _hourRange;

}

@property (assign,nonatomic) EKDayTimeView * owner;              //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) NSRange hourRange;                  //@synthesize hourRange=_hourRange - In the implementation block
-(EKDayTimeView *)owner;
-(void)drawRect:(CGRect)arg1 ;
-(void)setOwner:(EKDayTimeView *)arg1 ;
-(void)setHourRange:(NSRange)arg1 ;
-(NSRange)hourRange;
@end

