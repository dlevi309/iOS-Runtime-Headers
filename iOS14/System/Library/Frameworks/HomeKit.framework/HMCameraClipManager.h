/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@class HMFUnfairLock, _HMContext, NSUUID, NSNotificationCenter, NSMutableDictionary, NSHashTable, NSString;

@interface HMCameraClipManager : NSObject <HMFLogging, HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	_HMContext* _context;
	NSUUID* _profileUniqueIdentifier;
	NSNotificationCenter* _notificationCenter;
	NSMutableDictionary* _clipsByFetchUUID;
	NSMutableDictionary* _significantEventsByFetchUUID;
	NSMutableDictionary* _videoAssetContextsByClipUUID;
	NSHashTable* _observers;
	/*^block*/id _fetchClientFactory;

}

@property (readonly) HMFUnfairLock * lock;                                                    //@synthesize lock=_lock - In the implementation block
@property (readonly) _HMContext * context;                                                    //@synthesize context=_context - In the implementation block
@property (copy,readonly) NSUUID * profileUniqueIdentifier;                                   //@synthesize profileUniqueIdentifier=_profileUniqueIdentifier - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                               //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) NSMutableDictionary * clipsByFetchUUID;                                  //@synthesize clipsByFetchUUID=_clipsByFetchUUID - In the implementation block
@property (readonly) NSMutableDictionary * significantEventsByFetchUUID;                      //@synthesize significantEventsByFetchUUID=_significantEventsByFetchUUID - In the implementation block
@property (readonly) NSMutableDictionary * videoAssetContextsByClipUUID;                      //@synthesize videoAssetContextsByClipUUID=_videoAssetContextsByClipUUID - In the implementation block
@property (readonly) NSHashTable * observers;                                                 //@synthesize observers=_observers - In the implementation block
@property (copy) id fetchClientFactory;                                                       //@synthesize fetchClientFactory=_fetchClientFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(void)subscribe;
-(void)unsubscribe;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)addObserver:(id)arg1 ;
-(void)configure;
-(void)fetchPosterFramesAssetContextForClip:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSHashTable *)observers;
-(NSNotificationCenter *)notificationCenter;
-(void)fetchVideoSegmentsAssetContextForClip:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HMFUnfairLock *)lock;
-(id)logIdentifier;
-(_HMContext *)context;
-(id)initWithContext:(id)arg1 profileUniqueIdentifier:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(id)fetchClientFactory;
-(void)handleDaemonReconnectedNotification:(id)arg1 ;
-(void)setFetchClientFactory:(id)arg1 ;
-(void)performCloudPullWithCompletion:(/*^block*/id)arg1 ;
-(NSUUID *)profileUniqueIdentifier;
-(id)initWithContext:(id)arg1 profileUniqueIdentifier:(id)arg2 notificationCenter:(id)arg3 ;
-(NSMutableDictionary *)videoAssetContextsByClipUUID;
-(void)fetchSignificantEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 shouldOrderAscending:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleDidChangeClipsMessage:(id)arg1 ;
-(void)handleDidChangeSignificantEventsMessage:(id)arg1 ;
-(id)videoSegmentsAssetContextForClip:(id)arg1 ;
-(void)updateVideoSegmentsAssetContextForClip:(id)arg1 ;
-(void)fetchClipWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchClipForSignificantEventWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllClipsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCountOfAllClipsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchHeroFrameDataRepresentationForClipWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)clipsByFetchUUID;
-(void)fetchHeroFrameURLOfClipWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchFaceCropDataRepresentationForSignificantEventWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchFaceCropURLForSignificantEventWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSignificantEventsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllSignificantEventsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSignificantEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteClipWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleFaceMisclassificationForSignificantEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)donateClipsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)importClipsWithImportData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)significantEventsByFetchUUID;
-(void)fetchClipsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 shouldOrderAscending:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchCountOfClipsWithDateInterval:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAllClipsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

