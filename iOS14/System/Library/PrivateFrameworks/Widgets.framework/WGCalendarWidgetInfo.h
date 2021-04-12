/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setDate:(id)arg1 ;
-(void)_resetIconsImpl;
-(id)initWithExtension:(id)arg1 ;
-(NSDate *)date;
-(id)_queue_iconWithSize:(CGSize)arg1 scale:(double)arg2 forWidgetWithIdentifier:(id)arg3 extension:(id)arg4 ;
-(id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)arg1 extension:(id)arg2 ;
-(void)_handleSignificantTimeChange:(id)arg1 ;
@end

