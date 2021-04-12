/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCKDatabaseRecordMiddleware.h>

@protocol FCCKRecordNameCipher;
@class FCCKPrivateDatabaseSchema, NSString;

@interface FCCKDatabaseEncryptionMiddleware : NSObject <FCCKDatabaseRecordMiddleware> {

	FCCKPrivateDatabaseSchema* _encryptionSchema;
	id<FCCKRecordNameCipher> _recordNameCipher;

}

@property (nonatomic,retain) FCCKPrivateDatabaseSchema * encryptionSchema;              //@synthesize encryptionSchema=_encryptionSchema - In the implementation block
@property (nonatomic,retain) id<FCCKRecordNameCipher> recordNameCipher;                 //@synthesize recordNameCipher=_recordNameCipher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)clientToServerRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)serverToClientRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)clientToServerRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)serverToClientRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)clientToServerRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)serverToClientRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)clientToServerRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)serverToClientRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)clientToServerRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
-(id)serverToClientRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
-(id)initWithEncryptionSchema:(id)arg1 recordNameCipher:(id)arg2 ;
-(BOOL)_isEnabledForDatabase:(id)arg1 ;
-(id)_serverZoneIDFromClientZoneID:(id)arg1 error:(id*)arg2 ;
-(id)_clientZoneIDFromServerZoneID:(id)arg1 error:(id*)arg2 ;
-(id)_encryptionKeyForClientRecordID:(id)arg1 inDatabase:(id)arg2 ;
-(BOOL)_encryptRecordID:(id)arg1 withEncryptionKey:(id)arg2 error:(id*)arg3 ;
-(id)_encryptionKeyForServerRecordID:(id)arg1 inDatabase:(id)arg2 ;
-(BOOL)_decryptRecordID:(id)arg1 withEncryptionKey:(id)arg2 error:(id*)arg3 ;
-(FCCKPrivateDatabaseSchema *)encryptionSchema;
-(BOOL)_encryptRecord:(id)arg1 withEncryptionKey:(id)arg2 schema:(id)arg3 error:(id*)arg4 ;
-(BOOL)_decryptRecord:(id)arg1 withEncryptionKey:(id)arg2 schema:(id)arg3 error:(id*)arg4 ;
-(BOOL)_encryptField:(id)arg1 inRecord:(id)arg2 error:(id*)arg3 ;
-(id<FCCKRecordNameCipher>)recordNameCipher;
-(BOOL)_decryptField:(id)arg1 inRecord:(id)arg2 error:(id*)arg3 ;
-(id)initWithEncryptionSchema:(id)arg1 ;
-(void)setEncryptionSchema:(FCCKPrivateDatabaseSchema *)arg1 ;
-(void)setRecordNameCipher:(id<FCCKRecordNameCipher>)arg1 ;
@end

