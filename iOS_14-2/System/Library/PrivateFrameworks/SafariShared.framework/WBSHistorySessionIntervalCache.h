/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
#import <SafariShared/SafariShared-Structs.h>
@class NSObject, NSCalendar;

@interface WBSHistorySessionIntervalCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSCalendar* _calendar;
	Vector<double, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _intervalCache;

}
-(id)init;
-(double)beginningOfSessionContainingTime:(double)arg1 ;
-(double)_beginningOfSessionContainingTime:(double)arg1 ;
-(void)_getSessionIntervalForTime:(double)arg1 beginningOfDay:(double*)arg2 beginningOfNextDay:(double*)arg3 ;
-(id)initWithCalendar:(id)arg1 ;
@end

