/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSDate;

@interface _UIDatePickerDateRange : NSObject {

	SCD_Struct_UI34 _flags;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
-(NSDate *)endDate;
-(BOOL)containsDate:(id)arg1 ;
-(id)init;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(BOOL)_containsDate:(id)arg1 withAccuracy:(unsigned long long)arg2 inCalendar:(id)arg3 ;
-(BOOL)containsDay:(id)arg1 ;
-(BOOL)containsMonth:(id)arg1 ;
-(id)dateInRangeForDate:(id)arg1 ;
@end

