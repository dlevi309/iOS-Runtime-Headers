/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/SFXPCClient.h>
#import <libobjc.A.dylib/SFContinuityScannerClient.h>

@class NSMutableSet, NSHashTable, NSString;

@interface SFContinuityScanManager : SFXPCClient <SFContinuityScannerClient> {

	NSMutableSet* _foundDevices;
	NSHashTable* _observers;
	unsigned long long _scanTypes;

}

@property (retain) NSMutableSet * foundDevices;                     //@synthesize foundDevices=_foundDevices - In the implementation block
@property (retain) NSHashTable * observers;                         //@synthesize observers=_observers - In the implementation block
@property (assign) unsigned long long scanTypes;                    //@synthesize scanTypes=_scanTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(id)machServiceName;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)onqueue_connectionEstablished;
-(void)onqueue_connectionInterrupted;
-(void)scanForTypes:(unsigned long long)arg1 ;
-(void)setScanTypes:(unsigned long long)arg1 ;
-(void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(unsigned long long)scanTypes;
-(void)lostDeviceWithDevice:(id)arg1 ;
-(void)receivedAdvertisement:(id)arg1 ;
-(void)foundDeviceWithDevice:(id)arg1 ;
-(void)pairedDevicesChanged:(id)arg1 ;
-(NSMutableSet *)foundDevices;
-(void)setFoundDevices:(NSMutableSet *)arg1 ;
@end

