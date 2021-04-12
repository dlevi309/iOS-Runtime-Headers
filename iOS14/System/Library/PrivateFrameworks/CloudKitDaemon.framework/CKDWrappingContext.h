/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class CKRecordID, NSString, NSData;

@interface CKDWrappingContext : NSObject {

	CKRecordID* _recordID;
	NSString* _fieldName;
	NSData* _fileSignature;
	NSData* _referenceSignature;

}

@property (nonatomic,retain) CKRecordID * recordID;                    //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * fieldName;                     //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,retain) NSData * fileSignature;                   //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,retain) NSData * referenceSignature;              //@synthesize referenceSignature=_referenceSignature - In the implementation block
-(void)setReferenceSignature:(NSData *)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(NSString *)fieldName;
-(void)setFieldName:(NSString *)arg1 ;
-(CKRecordID *)recordID;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(void)setFileSignature:(NSData *)arg1 ;
-(id)initWithRecordID:(id)arg1 fieldName:(id)arg2 fileSignature:(id)arg3 referenceSignature:(id)arg4 ;
-(id)assetContextString;
-(id)encryptedDataContextString;
@end

