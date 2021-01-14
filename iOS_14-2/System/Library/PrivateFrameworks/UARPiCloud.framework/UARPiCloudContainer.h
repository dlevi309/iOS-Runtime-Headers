/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UARPiCloud.framework/UARPiCloud
*/


@class CKServerChangeToken, NSData, NSMutableSet, CKContainer, NSString, CKDatabase;

@interface UARPiCloudContainer : NSObject {

	CKServerChangeToken* _databaseChangeToken;
	NSData* _verificationCertificate;
	id _publicKey;
	NSMutableSet* _updatedZones;
	NSMutableSet* _updatedRecords;
	CKContainer* _container;
	NSString* _containerID;
	CKDatabase* _database;

}

@property (readonly) CKContainer * container;                            //@synthesize container=_container - In the implementation block
@property (copy,readonly) NSString * containerID;                        //@synthesize containerID=_containerID - In the implementation block
@property (readonly) CKDatabase * database;                              //@synthesize database=_database - In the implementation block
@property (copy) NSData * verificationCertificate;                       //@synthesize verificationCertificate=_verificationCertificate - In the implementation block
@property (retain) id publicKey;                                         //@synthesize publicKey=_publicKey - In the implementation block
@property (copy) CKServerChangeToken * databaseChangeToken;              //@synthesize databaseChangeToken=_databaseChangeToken - In the implementation block
@property (copy) NSMutableSet * updatedZones;                            //@synthesize updatedZones=_updatedZones - In the implementation block
@property (copy) NSMutableSet * updatedRecords;                          //@synthesize updatedRecords=_updatedRecords - In the implementation block
-(id)publicKey;
-(NSString *)containerID;
-(void)setPublicKey:(id)arg1 ;
-(NSMutableSet *)updatedRecords;
-(CKDatabase *)database;
-(id)initWithContainerID:(id)arg1 ;
-(CKContainer *)container;
-(CKServerChangeToken *)databaseChangeToken;
-(void)setDatabaseChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setUpdatedZones:(NSMutableSet *)arg1 ;
-(NSMutableSet *)updatedZones;
-(void)setUpdatedRecords:(NSMutableSet *)arg1 ;
-(void)setVerificationCertificate:(NSData *)arg1 ;
-(NSData *)verificationCertificate;
@end

