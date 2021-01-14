/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_saveUpdatedPCSToServer;
-(CKRecordZoneID *)zoneID;
-(BOOL)_fetchPCSDataFromDatabase;
-(void)_saveNewPCSOnDefaultZone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleDecryptedZonePCSData:(id)arg1 withError:(id)arg2 ;
-(BOOL)_fetchPCSDataFromServer;
-(void)setZonePCSData:(CKDZonePCSData *)arg1 ;
-(void)setShouldCreateZoneishPCS:(BOOL)arg1 ;
-(BOOL)_fetchDependentPCS;
-(void)_willRetryFetch;
-(BOOL)_decryptPCS;
-(void)_saveZoneToServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldCreateZoneishPCS;
-(BOOL)hasAllPCSData;
-(BOOL)_createAdditionalPCS;
-(void)_decryptZonePCSUsingServiceIdentities;
-(void)_saveZoneToServer:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 zoneishPCS:(OpaquePCSShareProtectionRef)arg3 previousEtag:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_savePCSDataToCache;
-(BOOL)needsZoneishPCS;
-(id)itemTypeName;
-(void)_decryptZonePCSInSharedDatabase;
-(void)_fetchDepedentPCSInSharedDatabase;
-(CKDZonePCSData *)zonePCSData;
-(void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2 ;
@end

