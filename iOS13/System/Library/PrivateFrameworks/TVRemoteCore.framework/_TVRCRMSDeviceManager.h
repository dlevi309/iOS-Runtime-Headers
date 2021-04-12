/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@interface _TVRCRMSDeviceManager : NSObject
+(id)sharedInstance;
-(id)_allRecords;
-(id)pairingGUIDForNetworkName:(id)arg1 ;
-(void)removeStoredInfoForNetworkName:(id)arg1 ;
-(void)addStoredInfoForNetworkName:(id)arg1 displayName:(id)arg2 pairingGUID:(id)arg3 ;
-(void)_addOrUpdateRecordInUserDefaults:(id)arg1 ;
-(void)_removeRecordWithNetworkNameFromUserDefaults:(id)arg1 ;
-(void)_performWithMutableRecords:(/*^block*/id)arg1 ;
@end

