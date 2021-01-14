/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCKDatabaseRecordMiddleware.h>
#import <libobjc.A.dylib/FCCKDatabaseOperationMiddleware.h>

@protocol FCCKRecordNameCipher;
@class FCCKPrivateDatabaseSchema, NSString;

@interface FCCKDatabaseEncryptionMiddleware : NSObject <FCCKDatabaseRecordMiddleware, FCCKDatabaseOperationMiddleware> {

	FCCKPrivateDatabaseSchema* _encryptionSchema;
	id<FCCKRecordNameCipher> _recordNameCipher;

}

@property (nonatomic,retain) FCCKPrivateDatabaseSchema * encryptionSchema;              //@synthesize encryptionSchema=_encryptionSchema - In the implementation block
@property (nonatomic,retain) id<FCCKRecordNameCipher> recordNameCipher;                 //@synthesize recordNameCipher=_recordNameCipher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isEnabledForDatabase:(id)arg1 ;
-(id)serverToClientRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)initWithEncryptionSchema:(id)arg1 ;
-(BOOL)_decryptField:(id)arg1 inRecord:(id)arg2 error:(id*)arg3 ;
-(id)serverToClientRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)clientToServerRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(BOOL)_encryptRecord:(id)arg1 withEncryptionKey:(id)arg2 schema:(id)arg3 error:(id*)arg4 ;
-(id)initWithEncryptionSchema:(id)arg1 recordNameCipher:(id)arg2 ;
-(id)clientToServerRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(BOOL)_decryptRecord:(id)arg1 withEncryptionKey:(id)arg2 schema:(id)arg3 error:(id*)arg4 ;
-(id)clientToServerRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)_encryptionKeyForServerRecordID:(id)arg1 inDatabase:(id)arg2 ;
-(id)serverToClientRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
-(void)setRecordNameCipher:(id<FCCKRecordNameCipher>)arg1 ;
-(BOOL)_encryptRecordID:(id)arg1 withEncryptionKey:(id)arg2 error:(id*)arg3 ;
-(void)setEncryptionSchema:(FCCKPrivateDatabaseSchema *)arg1 ;
-(id)_encryptionKeyForClientRecordID:(id)arg1 inDatabase:(id)arg2 ;
-(id)serverToClientRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)serverToClientRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id<FCCKRecordNameCipher>)recordNameCipher;
-(long long)database:(id)arg1 willEnqueueOperation:(id)arg2 error:(id*)arg3 ;
-(FCCKPrivateDatabaseSchema *)encryptionSchema;
-(id)_clientZoneIDFromServerZoneID:(id)arg1 error:(id*)arg2 ;
-(BOOL)_decryptRecordID:(id)arg1 withEncryptionKey:(id)arg2 error:(id*)arg3 ;
-(id)clientToServerRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
-(id)_serverZoneIDFromClientZoneID:(id)arg1 error:(id*)arg2 ;
-(BOOL)_encryptField:(id)arg1 inRecord:(id)arg2 error:(id*)arg3 ;
-(id)clientToServerRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
@end

