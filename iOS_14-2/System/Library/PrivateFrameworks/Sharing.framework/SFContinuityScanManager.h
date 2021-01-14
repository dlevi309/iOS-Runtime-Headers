/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(void)scanForTypes:(unsigned long long)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(BOOL)shouldEscapeXpcTryCatch;
-(id)remoteObjectInterface;
-(void)setScanTypes:(unsigned long long)arg1 ;
-(void)lostDeviceWithDevice:(id)arg1 ;
-(id)exportedInterface;
-(void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(id)machServiceName;
-(void)onqueue_connectionInterrupted;
-(void)onqueue_connectionEstablished;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)pairedDevicesChanged:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setFoundDevices:(NSMutableSet *)arg1 ;
-(NSMutableSet *)foundDevices;
-(void)receivedAdvertisement:(id)arg1 ;
-(unsigned long long)scanTypes;
-(void)foundDeviceWithDevice:(id)arg1 ;
@end

