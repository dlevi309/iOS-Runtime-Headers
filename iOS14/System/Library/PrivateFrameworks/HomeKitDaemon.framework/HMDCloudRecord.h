/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSString, HMDCloudZone, CKRecordID, NSData, CKRecord;

@interface HMDCloudRecord : HMFObject {

	BOOL _decryptionFailed;
	BOOL _encryptionFailed;
	BOOL _controllerIdentifierChanged;
	BOOL _recordCreated;
	NSUUID* _objectID;
	NSString* _recordName;
	HMDCloudZone* _cloudZone;
	CKRecordID* _recordID;
	NSData* _cachedData;
	CKRecord* _record;

}

@property (nonatomic,retain) NSUUID * objectID;                                        //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) BOOL decryptionFailed;                                    //@synthesize decryptionFailed=_decryptionFailed - In the implementation block
@property (assign,nonatomic) BOOL encryptionFailed;                                    //@synthesize encryptionFailed=_encryptionFailed - In the implementation block
@property (assign,nonatomic) BOOL controllerIdentifierChanged;                         //@synthesize controllerIdentifierChanged=_controllerIdentifierChanged - In the implementation block
@property (nonatomic,readonly) NSString * recordType; 
@property (nonatomic,readonly) NSString * recordName;                                  //@synthesize recordName=_recordName - In the implementation block
@property (assign,nonatomic,__weak) HMDCloudZone * cloudZone;                          //@synthesize cloudZone=_cloudZone - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                    //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSData * cachedData;                                      //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) CKRecord * record;                                        //@synthesize record=_record - In the implementation block
@property (getter=isRecordCreated,nonatomic,readonly) BOOL recordCreated;              //@synthesize recordCreated=_recordCreated - In the implementation block
@property (getter=isRecordCached,nonatomic,readonly) BOOL recordCached; 
@property (readonly) unsigned long long objectEncoding; 
+(id)logCategory;
+(id)shortDescription;
-(CKRecord *)record;
-(NSData *)cachedData;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(id)init;
-(void)setRecord:(CKRecord *)arg1 ;
-(NSString *)recordType;
-(id)shortDescription;
-(void)setData:(NSData *)arg1 ;
-(NSUUID *)objectID;
-(void)setObjectID:(NSUUID *)arg1 ;
-(id)description;
-(NSData *)data;
-(void)clearData;
-(void)setCachedData:(NSData *)arg1 ;
-(NSString *)recordName;
-(CKRecordID *)recordID;
-(HMDCloudZone *)cloudZone;
-(void)setCloudZone:(HMDCloudZone *)arg1 ;
-(BOOL)decryptionFailed;
-(void)setDecryptionFailed:(BOOL)arg1 ;
-(BOOL)encryptionFailed;
-(void)setEncryptionFailed:(BOOL)arg1 ;
-(BOOL)controllerIdentifierChanged;
-(void)setControllerIdentifierChanged:(BOOL)arg1 ;
-(id)initWithObjectID:(id)arg1 recordName:(id)arg2 cloudZone:(id)arg3 ;
-(BOOL)isRecordCreated;
-(id)extractObjectChange;
-(unsigned long long)objectEncoding;
-(BOOL)encodeObjectChange:(id)arg1 ;
-(BOOL)isRecordCached;
@end

