/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKObjectChange.h>

@interface EKExceptionDateChange : EKObjectChange
+(int)entityType;
+(void)fetchExceptionDateChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchExceptionDateChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchExceptionDateChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)initWithChangeProperties:(id)arg1 ;
@end

