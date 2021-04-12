/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_os_log;
#import <HealthKit/HealthKit-Structs.h>
@class NSHashTable, NSString, NSObject, NSArray;

@interface HKSynchronousObserverSet : NSObject {

	NSHashTable* _observerTable;
	NSString* _name;
	NSObject*<OS_os_log> _category;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long count; 
@property (copy,readonly) NSArray * allObservers; 
-(unsigned long long)count;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(id)initWithName:(id)arg1 loggingCategory:(id)arg2 ;
-(void)notifyObservers:(/*^block*/id)arg1 ;
-(NSArray *)allObservers;
@end

