/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <Widgets/WGWidgetInfo.h>

@class NSDate;

@interface WGCalendarWidgetInfo : WGWidgetInfo {

	NSDate* _date;

}

@property (setter=_setDate:,nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(BOOL)isCalendarExtension:(id)arg1 ;
-(NSDate *)date;
-(id)initWithExtension:(id)arg1 ;
-(void)_setDate:(id)arg1 ;
-(void)_handleSignificantTimeChange:(id)arg1 ;
-(id)_queue_iconWithSize:(CGSize)arg1 scale:(double)arg2 forWidgetWithIdentifier:(id)arg3 extension:(id)arg4 ;
-(id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)arg1 extension:(id)arg2 ;
-(void)_resetIconsImpl;
@end

