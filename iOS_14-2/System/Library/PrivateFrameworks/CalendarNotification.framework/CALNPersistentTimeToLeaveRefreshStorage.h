/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTimeToLeaveRefreshStorage.h>

@protocol OS_dispatch_queue;
@class NSString, CALNInMemoryTimeToLeaveRefreshStorage, NSObject;

@interface CALNPersistentTimeToLeaveRefreshStorage : NSObject <CALNTimeToLeaveRefreshStorage> {

	NSString* _path;
	CALNInMemoryTimeToLeaveRefreshStorage* _inMemoryStorage;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,copy,readonly) NSString * path;                                                 //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) CALNInMemoryTimeToLeaveRefreshStorage * inMemoryStorage;              //@synthesize inMemoryStorage=_inMemoryStorage - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                               //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)timeToLeaveRefreshDataFromPersistentStorageWithPath:(id)arg1 error:(id*)arg2 ;
+(id)persistentStorageWithPath:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)_removeRefreshDateWithIdentifier:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)refreshDates;
-(void)_addRefreshDate:(id)arg1 withIdentifier:(id)arg2 ;
-(NSString *)path;
-(void)_removeData;
-(CALNInMemoryTimeToLeaveRefreshStorage *)inMemoryStorage;
-(void)removeRefreshDates;
-(void)addRefreshDate:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)_saveDataWithError:(id*)arg1 ;
-(id)refreshDateWithIdentifier:(id)arg1 ;
-(BOOL)_loadDataWithError:(id*)arg1 ;
-(void)removeRefreshDateWithIdentifier:(id)arg1 ;
@end

