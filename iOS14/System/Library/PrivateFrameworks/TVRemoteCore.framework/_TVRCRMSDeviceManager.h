/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

