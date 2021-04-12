/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class NSString, CKRecordID, CKDRecordPCSData;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation {

	BOOL _serverRecordHasNoProtectionData;
	NSString* _serverRecordType;

}

@property (nonatomic,readonly) CKRecordID * recordID; 
@property (nonatomic,retain) CKDRecordPCSData * recordPCSData; 
@property (assign,nonatomic) BOOL serverRecordHasNoProtectionData;              //@synthesize serverRecordHasNoProtectionData=_serverRecordHasNoProtectionData - In the implementation block
@property (nonatomic,retain) NSString * serverRecordType;                       //@synthesize serverRecordType=_serverRecordType - In the implementation block
-(BOOL)_fetchPCSDataFromDatabase;
-(BOOL)_fetchPCSDataFromServer;
-(NSString *)serverRecordType;
-(BOOL)_fetchDependentPCS;
-(BOOL)_decryptPCS;
-(BOOL)hasAllPCSData;
-(BOOL)_createAdditionalPCS;
-(BOOL)_savePCSDataToCache;
-(id)itemTypeName;
-(CKRecordID *)recordID;
-(void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2 ;
-(CKDRecordPCSData *)recordPCSData;
-(void)setRecordPCSData:(CKDRecordPCSData *)arg1 ;
-(BOOL)serverRecordHasNoProtectionData;
-(void)setServerRecordType:(NSString *)arg1 ;
-(void)setServerRecordHasNoProtectionData:(BOOL)arg1 ;
-(BOOL)needsChainPCSCreation;
-(BOOL)_fetchPCSForPrivateZone;
-(BOOL)_fetchDependentPCSInSharedDatabase;
-(BOOL)_decryptRecordPCSInPrivateDatabase;
-(BOOL)_decryptRecordPCSInSharedDatabase;
@end

