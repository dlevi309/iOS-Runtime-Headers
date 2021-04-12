/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class CKRecordZoneID, CKDZonePCSData;

@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation {

	BOOL _shouldCreateZoneishPCS;

}

@property (nonatomic,readonly) BOOL needsZoneishPCS; 
@property (nonatomic,readonly) CKRecordZoneID * zoneID; 
@property (nonatomic,retain) CKDZonePCSData * zonePCSData; 
@property (assign,nonatomic) BOOL shouldCreateZoneishPCS;               //@synthesize shouldCreateZoneishPCS=_shouldCreateZoneishPCS - In the implementation block
-(CKRecordZoneID *)zoneID;
-(CKDZonePCSData *)zonePCSData;
-(BOOL)needsZoneishPCS;
-(void)setZonePCSData:(CKDZonePCSData *)arg1 ;
-(void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2 ;
-(void)_fetchDepedentPCSInSharedDatabase;
-(void)_saveZoneToServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saveZoneToServer:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 zoneishPCS:(OpaquePCSShareProtectionRef)arg3 previousEtag:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_saveNewPCSOnDefaultZone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShouldCreateZoneishPCS:(BOOL)arg1 ;
-(void)_decryptZonePCSInSharedDatabase;
-(void)_decryptZonePCSUsingServiceIdentities;
-(void)_handleDecryptedZonePCSData:(id)arg1 withError:(id)arg2 ;
-(BOOL)shouldCreateZoneishPCS;
-(id)itemTypeName;
-(BOOL)hasAllPCSData;
-(void)_willRetryFetch;
-(BOOL)_fetchPCSDataFromDatabase;
-(BOOL)_fetchDependentPCS;
-(BOOL)_fetchPCSDataFromServer;
-(BOOL)_createAdditionalPCS;
-(BOOL)_decryptPCS;
-(BOOL)_saveUpdatedPCSToServer;
-(BOOL)_savePCSDataToCache;
@end

