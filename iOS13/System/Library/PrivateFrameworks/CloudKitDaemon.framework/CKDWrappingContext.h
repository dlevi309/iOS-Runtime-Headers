/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CKRecordID *)recordID;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(NSString *)fieldName;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(void)setFileSignature:(NSData *)arg1 ;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(void)setFieldName:(NSString *)arg1 ;
-(id)initWithRecordID:(id)arg1 fieldName:(id)arg2 fileSignature:(id)arg3 referenceSignature:(id)arg4 ;
-(id)assetContextString;
-(id)encryptedDataContextString;
@end

