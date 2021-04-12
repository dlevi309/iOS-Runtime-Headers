/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IMPersonABRecordIDCache : NSObject {

	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _cacheDiskQueue;
	double _coalescingPeriod;

}

@property (assign,nonatomic) double coalescingPeriod;              //@synthesize coalescingPeriod=_coalescingPeriod - In the implementation block
+(id)sharedInstance;
-(id)description;
-(unsigned long long)versionNumber;
-(id)filePath;
-(void)_persistCache;
-(id)cachedRecordResultForQuery:(id)arg1 sequenceNumber:(long long)arg2 ;
-(void)setCachedRecordResult:(int)arg1 identifier:(int)arg2 forQuery:(id)arg3 sequenceNumber:(long long)arg4 ;
-(void)clearExistingPreferencesCache;
-(id)abUniqueID;
-(id)_abCache;
-(void)_persistCache:(BOOL)arg1 ;
-(long long)cacheSequenceNumber;
-(void)setCacheSequenceNumber:(long long)arg1 ;
-(double)coalescingPeriod;
-(void)setCoalescingPeriod:(double)arg1 ;
-(void)_forceCachePersist;
-(void)setParentPath:(id)arg1 ;
-(void)clearInMemoryCache;
@end

