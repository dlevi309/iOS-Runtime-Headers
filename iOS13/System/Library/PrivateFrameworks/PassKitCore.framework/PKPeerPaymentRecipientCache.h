/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject, PKMapContainer, NSTimer;

@interface PKPeerPaymentRecipientCache : NSObject {

	NSObject*<OS_dispatch_queue> _mapAccessQueue;
	PKMapContainer* _mapContainer;
	NSTimer* _mapNeedsWriteTimer;

}
+(id)sharedCache;
+(id)_instanceName;
-(id)init;
-(void)dealloc;
-(BOOL)purgeCache;
-(id)__init;
-(void)noteSubmittedLowFrequencyDeviceScoreForRecipientAddress:(id)arg1 ;
-(BOOL)lowFrequencyDeviceScoreSubmissionRequiredForRecipientAddress:(id)arg1 ;
-(id)recipientForRecipientAddress:(id)arg1 ;
-(void)cacheRecipient:(id)arg1 forRecipientAddress:(id)arg2 ;
-(void)purgeRecipientWithRecipientAddress:(id)arg1 ;
-(void)_updateMapsFromDisk;
-(void)_handlePurgedNotification:(id)arg1 ;
-(void)_handleDiskMapChangedNotification:(id)arg1 ;
-(id)_keyForRecipientAddress:(id)arg1 ;
-(void)_setMapNeedsWrite;
-(BOOL)_writeMapToDisk;
-(BOOL)_canReadMap;
-(BOOL)_canWriteMap;
@end

