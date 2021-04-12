/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWDeferredContainerManagerBase.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface BWDeferredCaptureContainerManager : BWDeferredContainerManagerBase {

	unsigned _cacheSize;
	unsigned _cacheResidencySeconds;
	NSObject*<OS_dispatch_source> _cacheExpiryTimer;
	NSMutableArray* _stagedContainers;
	NSMutableArray* _inflightContainers;
	NSMutableArray* _cachedContainers;
	NSObject*<OS_dispatch_queue> _flushQueue;
	NSObject*<OS_dispatch_queue> _flushQueueBackground;
	unsigned long long _cachedLowDiskThresholdBytes;
	NSMutableDictionary* _pools;

}
+(id)sharedInstance;
-(id)init;
-(id)lookupCaptureContainer:(id)arg1 ;
-(int)abortContainer:(id)arg1 error:(int)arg2 ;
-(int)commitContainer:(id)arg1 delegate:(id)arg2 ;
-(id)manifestsForApplicationID:(id)arg1 err:(int*)arg2 ;
-(int)deleteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 ;
-(id)createCaptureContainerWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int*)arg3 ;
-(int)addCaptureContainer:(id)arg1 ;
-(int)queryContainerStatusForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 status:(int*)arg3 ;
-(id)copyRemoteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int*)arg3 ;
-(int)releaseRemoteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 ;
-(int)_queryLowDiskThresholds:(unsigned long long*)arg1 veryLowDiskThresholdBytes:(unsigned long long*)arg2 ;
-(id)_containerForCaptureRequestIdentifier:(id)arg1 array:(id)arg2 index:(unsigned long long*)arg3 ;
-(BOOL)_removeContainerForCaptureRequestIdentifier:(id)arg1 array:(id)arg2 ;
-(void)_reportCoreAnalyticsDataWithError:(int)arg1 container:(id)arg2 ;
-(BOOL)_removeInflightContainerForCaptureRequestIdentifier:(id)arg1 ;
-(int)_handleExpiryTimer;
-(BOOL)_removeCachedContainerForCaptureRequestIdentifier:(id)arg1 ;
-(void)_rescheduleCacheExpiryTimer;
-(int)_flushContainer:(id)arg1 container:(id)arg2 delegate:(id)arg3 ;
-(id)_stagedContainerForCaptureRequestIdentifier:(id)arg1 ;
-(BOOL)_removeStagedContainerForCaptureRequestIdentifier:(id)arg1 ;
-(void)_updateCacheEntryForContainer:(id)arg1 release:(BOOL)arg2 ;
-(id)_inflightContainerForCaptureRequestIdentifier:(id)arg1 ;
-(int)_validateContainerFromURL:(id)arg1 containerUUID:(id)arg2 captureRequestIdentifier:(id*)arg3 photos:(id*)arg4 ;
-(int)_enumerateManifestsForApplicationID:(id)arg1 manifestArray:(id)arg2 deleteInvalidContainers:(BOOL)arg3 ;
-(id)_cachedContainerForCaptureRequestIdentifier:(id)arg1 ;
-(BOOL)canDefer;
-(int)addBufferPool:(id)arg1 ;
-(int)removeBufferPool:(id)arg1 ;
-(CVBufferRef)newPixelBuffer:(id)arg1 ;
@end

