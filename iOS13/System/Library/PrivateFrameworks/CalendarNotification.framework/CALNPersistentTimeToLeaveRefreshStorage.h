/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)persistentStorageWithPath:(id)arg1 error:(id*)arg2 ;
+(id)timeToLeaveRefreshDataFromPersistentStorageWithPath:(id)arg1 error:(id*)arg2 ;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(CALNInMemoryTimeToLeaveRefreshStorage *)inMemoryStorage;
-(id)refreshDateWithIdentifier:(id)arg1 ;
-(void)addRefreshDate:(id)arg1 withIdentifier:(id)arg2 ;
-(void)removeRefreshDateWithIdentifier:(id)arg1 ;
-(id)refreshDates;
-(void)removeRefreshDates;
-(BOOL)_loadDataWithError:(id*)arg1 ;
-(BOOL)_saveDataWithError:(id*)arg1 ;
-(void)_addRefreshDate:(id)arg1 withIdentifier:(id)arg2 ;
-(void)_removeRefreshDateWithIdentifier:(id)arg1 ;
-(void)_removeData;
@end

