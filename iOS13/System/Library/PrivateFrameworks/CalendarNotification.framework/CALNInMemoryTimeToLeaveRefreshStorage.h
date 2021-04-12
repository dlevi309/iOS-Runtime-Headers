/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTimeToLeaveRefreshStorage.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface CALNInMemoryTimeToLeaveRefreshStorage : NSObject <CALNTimeToLeaveRefreshStorage> {

	NSMutableDictionary* _refreshDateMap;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * refreshDateMap;                //@synthesize refreshDateMap=_refreshDateMap - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)refreshDateWithIdentifier:(id)arg1 ;
-(void)addRefreshDate:(id)arg1 withIdentifier:(id)arg2 ;
-(void)removeRefreshDateWithIdentifier:(id)arg1 ;
-(id)refreshDates;
-(NSMutableDictionary *)refreshDateMap;
-(void)removeRefreshDates;
@end

