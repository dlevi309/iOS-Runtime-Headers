/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(id)refreshDates;
-(NSMutableDictionary *)refreshDateMap;
-(void)removeRefreshDates;
-(void)addRefreshDate:(id)arg1 withIdentifier:(id)arg2 ;
-(id)refreshDateWithIdentifier:(id)arg1 ;
-(void)removeRefreshDateWithIdentifier:(id)arg1 ;
@end

