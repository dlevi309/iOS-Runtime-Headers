/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSMutableDictionary;

@interface TVRMSPairingRecordStore : NSObject {

	NSMutableDictionary* _pairingRecords;

}
+(id)sharedRecordStore;
-(void)_synchronizePreferences;
-(id)init;
-(id)allPairingRecords;
-(id)pairedServiceNetworkNames;
-(id)pairingRecordForServiceWithNetworkName:(id)arg1 ;
-(void)savePairingRecord:(id)arg1 forServiceWithNetworkName:(id)arg2 ;
-(void)removePairingRecordForServiceWithNetworkName:(id)arg1 ;
@end

