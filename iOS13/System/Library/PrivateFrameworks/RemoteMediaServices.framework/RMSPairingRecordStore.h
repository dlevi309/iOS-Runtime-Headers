/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@class NSMutableDictionary;

@interface RMSPairingRecordStore : NSObject {

	NSMutableDictionary* _pairingRecords;

}
+(id)sharedRecordStore;
-(id)init;
-(void)_synchronizePreferences;
-(id)allPairingRecords;
-(id)pairedServiceNetworkNames;
-(id)pairingRecordForServiceWithNetworkName:(id)arg1 ;
-(void)savePairingRecord:(id)arg1 forServiceWithNetworkName:(id)arg2 ;
-(void)removePairingRecordForServiceWithNetworkName:(id)arg1 ;
@end

