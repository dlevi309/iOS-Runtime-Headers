/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)decrementReferenceForPID:(int)arg1 ;
-(id)incrementReferenceForPID:(int)arg1 bundleIdentifier:(id)arg2 valueCreationBlock:(/*^block*/id)arg3 ;
-(id)initWithCacheCapacity:(unsigned long long)arg1 ;
-(void)_handleApplicationStateUpdate:(id)arg1 ;
-(void)_handleProcessTermination:(int)arg1 ;
-(void)_removeValueForPID:(id)arg1 ;
-(void)_updateInterestedApplications;
-(void)_removeUnreferencedObjectsIfNeeded;
-(unsigned long long)cacheCapacity;
@end

