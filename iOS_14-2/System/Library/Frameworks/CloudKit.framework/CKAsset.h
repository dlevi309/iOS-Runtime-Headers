/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSNumber, NSURL, NSString, NSDate, CKAssetTransferOptions, CKAssetReference, NSDictionary, CKRecord, CKAssetDownloadPreauthorization, NSFileHandle, CKAssetCopyInfo, CKRecordID, CKAssetRereferenceInfo;

@interface CKAsset : NSObject <CKRecordValue, NSSecureCoding> {

	BOOL _shouldReadRawEncryptedData;
	BOOL _shouldReadAssetContentUsingClientProxy;
	BOOL _wasCached;
	BOOL _hasSize;
	BOOL _uploaded;
	BOOL _downloaded;
	NSData* _signature;
	unsigned long long _size;
	unsigned long long _paddedFileSize;
	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSURL* _fileURL;
	NSData* _assetContent;
	NSString* _itemTypeHint;
	NSString* _UUID;
	NSString* _downloadURLTemplate;
	NSDate* _downloadURLExpiration;
	NSString* _uploadReceipt;
	double _uploadReceiptExpiration;
	long long _storageGroupingPolicy;
	CKAssetTransferOptions* _assetTransferOptions;
	CKAssetReference* _assetReference;
	NSDictionary* _assetChunkerOptions;
	CKRecord* _record;
	NSString* _recordKey;
	NSURL* _contentBaseURL;
	NSString* _owner;
	NSString* _requestor;
	NSString* _authToken;
	CKAssetDownloadPreauthorization* _downloadPreauthorization;
	NSString* _downloadBaseURL;
	unsigned long long _downloadTokenExpiration;
	NSData* _boundaryKey;
	NSFileHandle* _clientOpenedFileHandle;
	NSURL* _constructedAssetDownloadURL;
	NSString* _constructedAssetDownloadURLTemplate;
	unsigned long long _constructedAssetEstimatedSize;
	NSData* _constructedAssetDownloadParameters;
	NSURL* _realPathURL;
	NSNumber* _generationCountToSave;
	CKAssetCopyInfo* _assetCopyInfo;
	NSData* _assetKey;
	NSData* _wrappedAssetKey;
	NSData* _clearAssetKey;
	NSData* _referenceSignature;
	long long _arrayIndex;
	CKRecordID* _recordID;
	CKAssetRereferenceInfo* _assetRereferenceInfo;
	long long _uploadRank;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * signature;                                                        //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) unsigned long long size;                                                 //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long paddedFileSize;                                       //@synthesize paddedFileSize=_paddedFileSize - In the implementation block
@property (nonatomic,retain) NSNumber * deviceID;                                                     //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                                                       //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,copy) NSURL * nullableFileURL; 
@property (nonatomic,copy) NSURL * fileURL;                                                           //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSData * assetContent;                                                   //@synthesize assetContent=_assetContent - In the implementation block
@property (nonatomic,copy) NSString * itemTypeHint;                                                   //@synthesize itemTypeHint=_itemTypeHint - In the implementation block
@property (nonatomic,retain) NSString * UUID;                                                         //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSString * downloadURLTemplate;                                          //@synthesize downloadURLTemplate=_downloadURLTemplate - In the implementation block
@property (nonatomic,retain) NSDate * downloadURLExpiration;                                          //@synthesize downloadURLExpiration=_downloadURLExpiration - In the implementation block
@property (nonatomic,copy) NSString * uploadReceipt;                                                  //@synthesize uploadReceipt=_uploadReceipt - In the implementation block
@property (assign,nonatomic) double uploadReceiptExpiration;                                          //@synthesize uploadReceiptExpiration=_uploadReceiptExpiration - In the implementation block
@property (assign,nonatomic) long long storageGroupingPolicy;                                         //@synthesize storageGroupingPolicy=_storageGroupingPolicy - In the implementation block
@property (assign,nonatomic) BOOL shouldReadRawEncryptedData;                                         //@synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData - In the implementation block
@property (nonatomic,retain) CKAssetTransferOptions * assetTransferOptions;                           //@synthesize assetTransferOptions=_assetTransferOptions - In the implementation block
@property (nonatomic,retain) CKAssetReference * assetReference;                                       //@synthesize assetReference=_assetReference - In the implementation block
@property (nonatomic,retain) NSDictionary * assetChunkerOptions;                                      //@synthesize assetChunkerOptions=_assetChunkerOptions - In the implementation block
@property (assign,nonatomic,__weak) CKRecord * record;                                                //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) NSString * recordKey;                                                      //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,retain) NSURL * contentBaseURL;                                                  //@synthesize contentBaseURL=_contentBaseURL - In the implementation block
@property (nonatomic,retain) NSString * owner;                                                        //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSString * requestor;                                                    //@synthesize requestor=_requestor - In the implementation block
@property (nonatomic,copy) NSString * authToken;                                                      //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,retain) CKAssetDownloadPreauthorization * downloadPreauthorization;              //@synthesize downloadPreauthorization=_downloadPreauthorization - In the implementation block
@property (nonatomic,retain) NSString * downloadBaseURL;                                              //@synthesize downloadBaseURL=_downloadBaseURL - In the implementation block
@property (assign,nonatomic) unsigned long long downloadTokenExpiration;                              //@synthesize downloadTokenExpiration=_downloadTokenExpiration - In the implementation block
@property (nonatomic,copy) NSData * boundaryKey;                                                      //@synthesize boundaryKey=_boundaryKey - In the implementation block
@property (nonatomic,retain) NSFileHandle * clientOpenedFileHandle;                                   //@synthesize clientOpenedFileHandle=_clientOpenedFileHandle - In the implementation block
@property (nonatomic,retain) NSURL * constructedAssetDownloadURL;                                     //@synthesize constructedAssetDownloadURL=_constructedAssetDownloadURL - In the implementation block
@property (nonatomic,retain) NSString * constructedAssetDownloadURLTemplate;                          //@synthesize constructedAssetDownloadURLTemplate=_constructedAssetDownloadURLTemplate - In the implementation block
@property (assign,nonatomic) unsigned long long constructedAssetEstimatedSize;                        //@synthesize constructedAssetEstimatedSize=_constructedAssetEstimatedSize - In the implementation block
@property (nonatomic,retain) NSData * constructedAssetDownloadParameters;                             //@synthesize constructedAssetDownloadParameters=_constructedAssetDownloadParameters - In the implementation block
@property (nonatomic,copy) NSURL * realPathURL;                                                       //@synthesize realPathURL=_realPathURL - In the implementation block
@property (nonatomic,retain) NSNumber * generationCountToSave;                                        //@synthesize generationCountToSave=_generationCountToSave - In the implementation block
@property (assign,nonatomic) BOOL shouldReadAssetContentUsingClientProxy;                             //@synthesize shouldReadAssetContentUsingClientProxy=_shouldReadAssetContentUsingClientProxy - In the implementation block
@property (nonatomic,retain) CKAssetCopyInfo * assetCopyInfo;                                         //@synthesize assetCopyInfo=_assetCopyInfo - In the implementation block
@property (nonatomic,retain) NSData * assetKey;                                                       //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,retain) NSData * wrappedAssetKey;                                                //@synthesize wrappedAssetKey=_wrappedAssetKey - In the implementation block
@property (nonatomic,retain) NSData * clearAssetKey;                                                  //@synthesize clearAssetKey=_clearAssetKey - In the implementation block
@property (nonatomic,retain) NSData * referenceSignature;                                             //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (assign,nonatomic) BOOL wasCached;                                                          //@synthesize wasCached=_wasCached - In the implementation block
@property (assign,nonatomic) BOOL hasSize;                                                            //@synthesize hasSize=_hasSize - In the implementation block
@property (assign,nonatomic) BOOL uploaded;                                                           //@synthesize uploaded=_uploaded - In the implementation block
@property (assign,nonatomic) BOOL downloaded;                                                         //@synthesize downloaded=_downloaded - In the implementation block
@property (assign,nonatomic) long long arrayIndex;                                                    //@synthesize arrayIndex=_arrayIndex - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                                   //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) CKAssetRereferenceInfo * assetRereferenceInfo;                           //@synthesize assetRereferenceInfo=_assetRereferenceInfo - In the implementation block
@property (assign,nonatomic) long long uploadRank;                                                    //@synthesize uploadRank=_uploadRank - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)assetWithFileURL:(id)arg1 ;
+(int)errorCodeFromPOSIXCode:(int)arg1 ;
+(id)openToReadRawEncryptedDataWithOpenInfo:(id)arg1 error:(id*)arg2 ;
+(id)_openUnencryptedWithOpenInfo:(id)arg1 genCountCheck:(BOOL)arg2 error:(id*)arg3 ;
+(id)_expandTemplateURL:(id)arg1 fieldValues:(id)arg2 ;
+(id)getFileSizeWithOpenInfo:(id)arg1 error:(id*)arg2 ;
+(id)getFileMetadataAtPath:(id)arg1 error:(id*)arg2 ;
+(id)_canonicalizeTemplateURL:(id)arg1 ;
+(id)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 error:(id*)arg3 ;
+(id)openWithOpenInfo:(id)arg1 error:(id*)arg2 ;
-(CKRecord *)record;
-(void)setAuthToken:(NSString *)arg1 ;
-(void)setAssetReference:(CKAssetReference *)arg1 ;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSNumber *)deviceID;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSData *)signature;
-(NSString *)authToken;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(void)setAssetKey:(NSData *)arg1 ;
-(NSURL *)contentBaseURL;
-(unsigned long long)downloadTokenExpiration;
-(void)setContentBaseURL:(NSURL *)arg1 ;
-(void)setDownloadTokenExpiration:(unsigned long long)arg1 ;
-(long long)arrayIndex;
-(id)initWithFileURL:(id)arg1 signature:(id)arg2 ;
-(NSString *)constructedAssetDownloadURLTemplate;
-(BOOL)isConstructedAsset;
-(long long)uploadRank;
-(NSString *)UUID;
-(unsigned long long)constructedAssetEstimatedSize;
-(NSNumber *)generationCountToSave;
-(NSString *)uploadReceipt;
-(double)uploadReceiptExpiration;
-(NSData *)wrappedAssetKey;
-(NSData *)clearAssetKey;
-(CKAssetCopyInfo *)assetCopyInfo;
-(CKAssetDownloadPreauthorization *)downloadPreauthorization;
-(BOOL)downloaded;
-(NSString *)downloadURLTemplate;
-(NSDate *)downloadURLExpiration;
-(NSData *)constructedAssetDownloadParameters;
-(long long)storageGroupingPolicy;
-(NSURL *)realPathURL;
-(id)downloadURLWithFileName:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 signature:(id)arg2 assetHandleUUID:(id)arg3 ;
-(id)initWithAssetReference:(id)arg1 ;
-(id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3 ;
-(id)initWithCopyInfo:(id)arg1 fileURL:(id)arg2 ;
-(id)assetHandleUUID;
-(id)downloadURL;
-(id)initWithAssetContent:(id)arg1 itemTypeHint:(id)arg2 ;
-(BOOL)isRereferencedAssetUpload;
-(NSURL *)nullableFileURL;
-(unsigned long long)paddedFileSize;
-(void)setNullableFileURL:(NSURL *)arg1 ;
-(void)setPaddedFileSize:(unsigned long long)arg1 ;
-(void)setAssetContent:(NSData *)arg1 ;
-(NSString *)itemTypeHint;
-(void)setItemTypeHint:(NSString *)arg1 ;
-(void)setDownloadURLTemplate:(NSString *)arg1 ;
-(void)setDownloadURLExpiration:(NSDate *)arg1 ;
-(void)setUploadReceipt:(NSString *)arg1 ;
-(void)setStorageGroupingPolicy:(long long)arg1 ;
-(void)setUploadReceiptExpiration:(double)arg1 ;
-(CKAssetTransferOptions *)assetTransferOptions;
-(void)setAssetTransferOptions:(CKAssetTransferOptions *)arg1 ;
-(NSDictionary *)assetChunkerOptions;
-(void)setAssetChunkerOptions:(NSDictionary *)arg1 ;
-(void)setRecordKey:(NSString *)arg1 ;
-(void)setDownloadPreauthorization:(CKAssetDownloadPreauthorization *)arg1 ;
-(NSString *)downloadBaseURL;
-(NSData *)boundaryKey;
-(void)setDownloadBaseURL:(NSString *)arg1 ;
-(void)setBoundaryKey:(NSData *)arg1 ;
-(NSURL *)constructedAssetDownloadURL;
-(void)setGenerationCountToSave:(NSNumber *)arg1 ;
-(void)setConstructedAssetDownloadURL:(NSURL *)arg1 ;
-(void)setConstructedAssetDownloadURLTemplate:(NSString *)arg1 ;
-(void)setAssetCopyInfo:(CKAssetCopyInfo *)arg1 ;
-(void)setConstructedAssetEstimatedSize:(unsigned long long)arg1 ;
-(void)setConstructedAssetDownloadParameters:(NSData *)arg1 ;
-(void)setRealPathURL:(NSURL *)arg1 ;
-(void)setShouldReadAssetContentUsingClientProxy:(BOOL)arg1 ;
-(void)setWrappedAssetKey:(NSData *)arg1 ;
-(void)setClearAssetKey:(NSData *)arg1 ;
-(void)setUploaded:(BOOL)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(void)setDownloaded:(BOOL)arg1 ;
-(void)setArrayIndex:(long long)arg1 ;
-(CKAssetRereferenceInfo *)assetRereferenceInfo;
-(void)setAssetRereferenceInfo:(CKAssetRereferenceInfo *)arg1 ;
-(void)setUploadRank:(long long)arg1 ;
-(id)init;
-(NSString *)owner;
-(NSNumber *)fileID;
-(void)setRecord:(CKRecord *)arg1 ;
-(unsigned long long)size;
-(id)openWithError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(BOOL)hasSize;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(NSString *)description;
-(void)setRequestor:(NSString *)arg1 ;
-(NSData *)assetKey;
-(void)setOwner:(NSString *)arg1 ;
-(NSData *)assetContent;
-(BOOL)shouldReadRawEncryptedData;
-(BOOL)shouldReadAssetContentUsingClientProxy;
-(BOOL)uploaded;
-(id)initWithCoder:(id)arg1 ;
-(CKAssetReference *)assetReference;
-(BOOL)wasCached;
-(NSString *)requestor;
-(id)_initBare;
-(NSString *)recordKey;
-(void)setUUID:(NSString *)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(CKRecordID *)recordID;
-(void)setWasCached:(BOOL)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(void)setFileID:(NSNumber *)arg1 ;
-(void)setShouldReadRawEncryptedData:(BOOL)arg1 ;
-(NSFileHandle *)clientOpenedFileHandle;
-(void)setClientOpenedFileHandle:(NSFileHandle *)arg1 ;
-(NSData *)referenceSignature;
@end

