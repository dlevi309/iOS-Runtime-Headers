/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2AccessoryServerBrowserPrivate <HAP2AccessoryServerBrowser>
@property (nonatomic,readonly) id<HAP2Storage> storage; 
@required
-(void)savePublicKey:(id)arg1 forAccessoryWithID:(id)arg2 completion:(/*^block*/id)arg3;
-(id<HAP2Storage>)storage;
-(void)accessoryWithDeviceIDIsPaired:(id)arg1 completion:(/*^block*/id)arg2;
-(void)accessoryServerDidUpdateConnectionState:(id)arg1;
-(id)operationQueueForDeviceID:(id)arg1;
-(void)removePublicKeyForAccessoryWithID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)retrieveLocalPairingIdentityWithCompletion:(/*^block*/id)arg1;

@end

