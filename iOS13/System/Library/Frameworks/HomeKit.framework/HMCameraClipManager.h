/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSMutableDictionary* _videoAssetContextsByClipUUID;
	NSHashTable* _observers;

}

@property (readonly) HMFUnfairLock * lock;                                                    //@synthesize lock=_lock - In the implementation block
@property (readonly) _HMContext * context;                                                    //@synthesize context=_context - In the implementation block
@property (copy,readonly) NSUUID * profileUniqueIdentifier;                                   //@synthesize profileUniqueIdentifier=_profileUniqueIdentifier - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                               //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) NSMutableDictionary * clipsByFetchUUID;                                  //@synthesize clipsByFetchUUID=_clipsByFetchUUID - In the implementation block
@property (readonly) NSMutableDictionary * videoAssetContextsByClipUUID;                      //@synthesize videoAssetContextsByClipUUID=_videoAssetContextsByClipUUID - In the implementation block
@property (readonly) NSHashTable * observers;                                                 //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(void)dealloc;
-(HMFUnfairLock *)lock;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(_HMContext *)context;
-(NSNotificationCenter *)notificationCenter;
-(NSHashTable *)observers;
-(void)configure;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)unsubscribe;
-(NSUUID *)profileUniqueIdentifier;
-(void)fetchPosterFramesAssetContextForClip:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchVideoSegmentsAssetContextForClip:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithContext:(id)arg1 profileUniqueIdentifier:(id)arg2 ;
-(void)deleteAllClipsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithContext:(id)arg1 profileUniqueIdentifier:(id)arg2 notificationCenter:(id)arg3 ;
-(void)subscribe;
-(NSMutableDictionary *)videoAssetContextsByClipUUID;
-(id)clipForResponsePayload:(id)arg1 ;
-(id)finishFetchingClipsForFetchUUID:(id)arg1 ;
-(void)prepareToFetchClipsForFetchUUID:(id)arg1 ;
-(void)handleDidChangeClipsMessage:(id)arg1 ;
-(void)handleDidFetchClipsMessage:(id)arg1 ;
-(void)handleDaemonReconnectedNotification:(id)arg1 ;
-(id)assetContextForResponsePayload:(id)arg1 ;
-(id)videoSegmentsAssetContextForClip:(id)arg1 ;
-(NSMutableDictionary *)clipsByFetchUUID;
-(id)clipsForMessage:(id)arg1 withKey:(id)arg2 ;
-(void)updateVideoSegmentsAssetContextForClip:(id)arg1 ;
-(id)orderedClipsForMessage:(id)arg1 withKey:(id)arg2 ;
-(void)handleFetchedClips:(id)arg1 forFetchUUID:(id)arg2 ;
-(void)fetchClipWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllClipsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchClipForSignificantEventWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchClipsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchClipsBeforeDate:(id)arg1 withLimit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchClipsAfterDate:(id)arg1 withLimit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchCountOfAllClipsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCountOfClipsWithDateInterval:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCountOfClipsBeforeDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCountOfClipsAfterDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteClipWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)importClipsWithImportData:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

