/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSMapTable, NSMutableSet, NSMutableDictionary;

@interface ATStatusMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _statusQueue;
	NSHashTable* _statusObservers;
	NSMapTable* _observerDataClasses;
	NSMutableSet* _statuses;
	NSMutableDictionary* _statusDictionary;

}
+(id)sharedMonitor;
-(void)addObserver:(id)arg1 ;
-(void)updateAssets:(id)arg1 ;
-(id)init;
-(id)allStatus;
-(void)setDataClasses:(id)arg1 forObserver:(id)arg2 ;
-(void)updateStatusWithValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)updateStatusValuesWithDictionary:(id)arg1 ;
-(void)updateStatus:(id)arg1 ;
@end

