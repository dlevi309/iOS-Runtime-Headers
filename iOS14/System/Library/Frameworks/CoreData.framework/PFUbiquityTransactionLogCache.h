/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString, NSMutableDictionary, NSRecursiveLock, PFUbiquityGlobalObjectIDCache;

@interface PFUbiquityTransactionLogCache : NSObject {

	NSString* _localPeerID;
	NSMutableDictionary* _transactionLogCache;
	NSRecursiveLock* _transactionLogCacheLock;
	PFUbiquityGlobalObjectIDCache* _gidCache;

}
-(id)init;
-(void)cacheExportedLog:(id)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 andGlobalIDCache:(id)arg2 ;
-(id)retainedCachedLogForLocation:(id)arg1 loadWithRetry:(BOOL)arg2 error:(id*)arg3 ;
-(void)removeLogsCachedForStoreNamed:(id)arg1 withUbiquityRootLocation:(id)arg2 ;
-(void)dealloc;
@end

