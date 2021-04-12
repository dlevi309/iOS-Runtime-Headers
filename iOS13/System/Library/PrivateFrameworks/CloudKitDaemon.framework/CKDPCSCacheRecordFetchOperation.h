/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CKRecordID *)recordID;
-(NSString *)serverRecordType;
-(void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2 ;
-(id)itemTypeName;
-(BOOL)hasAllPCSData;
-(BOOL)_fetchPCSDataFromDatabase;
-(BOOL)_fetchDependentPCS;
-(BOOL)_fetchPCSDataFromServer;
-(BOOL)_createAdditionalPCS;
-(BOOL)_decryptPCS;
-(BOOL)_savePCSDataToCache;
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

