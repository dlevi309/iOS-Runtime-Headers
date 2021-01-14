/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class PKMapContainer, NSTimer;

@interface PKPeerPaymentRecipientCache : NSObject {

	os_unfair_lock_s _mapAccessLock;
	PKMapContainer* _mapContainer;
	NSTimer* _mapNeedsWriteTimer;

}
+(id)_instanceName;
+(id)sharedCache;
-(id)init;
-(void)noteSubmittedLowFrequencyDeviceScoreForRecipientAddress:(id)arg1 ;
-(BOOL)lowFrequencyDeviceScoreSubmissionRequiredForRecipientAddress:(id)arg1 ;
-(void)_updateMapsFromDisk;
-(void)_handlePurgedNotification:(id)arg1 ;
-(void)_handleDiskMapChangedNotification:(id)arg1 ;
-(id)recipientForRecipientAddress:(id)arg1 ;
-(void)cacheRecipient:(id)arg1 forRecipientAddress:(id)arg2 ;
-(void)purgeRecipientWithRecipientAddress:(id)arg1 ;
-(id)_keyForRecipientAddress:(id)arg1 ;
-(void)_locked_setMapNeedsWrite;
-(BOOL)_writeMapToDisk;
-(BOOL)_canReadMap;
-(BOOL)_canWriteMap;
-(BOOL)purgeCache;
-(id)__init;
-(void)dealloc;
@end

