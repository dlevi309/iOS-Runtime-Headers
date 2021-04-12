/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSCountedSet, BKSApplicationStateMonitor;

@interface SFProcessDictionary : NSObject {

	NSMutableDictionary* _pidToBundleIdentifierMap;
	NSMutableSet* _pidsPendingTermination;
	NSMutableArray* _recentlyReferencedPIDs;
	NSCountedSet* _references;
	BKSApplicationStateMonitor* _stateMonitor;
	NSMutableDictionary* _values;
	unsigned long long _cacheCapacity;

}

@property (nonatomic,readonly) unsigned long long cacheCapacity;              //@synthesize cacheCapacity=_cacheCapacity - In the implementation block
-(id)init;
-(void)decrementReferenceForPID:(int)arg1 ;
-(id)incrementReferenceForPID:(int)arg1 bundleIdentifier:(id)arg2 valueCreationBlock:(/*^block*/id)arg3 ;
-(void)_removeValueForPID:(id)arg1 ;
-(void)_handleProcessTermination:(int)arg1 ;
-(void)_updateInterestedApplications;
-(void)_removeUnreferencedObjectsIfNeeded;
-(unsigned long long)cacheCapacity;
-(id)initWithCacheCapacity:(unsigned long long)arg1 ;
-(void)_handleApplicationStateUpdate:(id)arg1 ;
-(void)dealloc;
@end

