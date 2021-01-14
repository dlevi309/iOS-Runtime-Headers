/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(id)initWithName:(id)arg1 loggingCategory:(id)arg2 ;
-(unsigned long long)count;
-(NSArray *)allObservers;
-(void)notifyObservers:(/*^block*/id)arg1 ;
@end

