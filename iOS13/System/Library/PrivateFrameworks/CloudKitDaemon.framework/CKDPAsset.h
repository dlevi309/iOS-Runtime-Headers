/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, CKDPProtectionInfo, CKDPRecordIdentifier;

@interface CKDPAsset : PBCodable <NSCopying> {

	long long _constructedAssetDownloadEstimatedSize;
	long long _constructedAssetDownloadURLExpiration;
	long long _downloadTokenExpiration;
	long long _downloadURLExpiration;
	long long _size;
	NSString* _assetAuthorizationResponseUUID;
	NSData* _clearAssetKey;
	NSString* _constructedAssetDownloadURL;
	NSString* _contentBaseURL;
	NSString* _downloadBaseURL;
	NSData* _downloadRequest;
	NSString* _downloadToken;
	NSString* _owner;
	CKDPProtectionInfo* _protectionInfo;
	CKDPRecordIdentifier* _recordId;
	NSData* _referenceSignature;
	NSString* _requestor;
	NSData* _signature;
	NSString* _uploadReceipt;
	SCD_Struct_CK12 _has;

}

@property (nonatomic,readonly) BOOL hasOwner; 
@property (nonatomic,retain) NSString * owner;                                             //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;                                           //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) long long size;                                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasDownloadToken; 
@property (nonatomic,retain) NSString * downloadToken;                                     //@synthesize downloadToken=_downloadToken - In the implementation block
@property (nonatomic,readonly) BOOL hasDownloadRequest; 
@property (nonatomic,retain) NSData * downloadRequest;                                     //@synthesize downloadRequest=_downloadRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasContentBaseURL; 
@property (nonatomic,retain) NSString * contentBaseURL;                                    //@synthesize contentBaseURL=_contentBaseURL - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestor; 
@property (nonatomic,retain) NSString * requestor;                                         //@synthesize requestor=_requestor - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordId; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordId;                              //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,readonly) BOOL hasUploadReceipt; 
@property (nonatomic,retain) NSString * uploadReceipt;                                     //@synthesize uploadReceipt=_uploadReceipt - In the implementation block
@property (nonatomic,readonly) BOOL hasDownloadBaseURL; 
@property (nonatomic,retain) NSString * downloadBaseURL;                                   //@synthesize downloadBaseURL=_downloadBaseURL - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadURLExpiration; 
@property (assign,nonatomic) long long downloadURLExpiration;                              //@synthesize downloadURLExpiration=_downloadURLExpiration - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;                          //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasReferenceSignature; 
@property (nonatomic,retain) NSData * referenceSignature;                                  //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadTokenExpiration; 
@property (assign,nonatomic) long long downloadTokenExpiration;                            //@synthesize downloadTokenExpiration=_downloadTokenExpiration - In the implementation block
@property (nonatomic,readonly) BOOL hasClearAssetKey; 
@property (nonatomic,retain) NSData * clearAssetKey;                                       //@synthesize clearAssetKey=_clearAssetKey - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetAuthorizationResponseUUID; 
@property (nonatomic,retain) NSString * assetAuthorizationResponseUUID;                    //@synthesize assetAuthorizationResponseUUID=_assetAuthorizationResponseUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasConstructedAssetDownloadURL; 
@property (nonatomic,retain) NSString * constructedAssetDownloadURL;                       //@synthesize constructedAssetDownloadURL=_constructedAssetDownloadURL - In the implementation block
@property (assign,nonatomic) BOOL hasConstructedAssetDownloadURLExpiration; 
@property (assign,nonatomic) long long constructedAssetDownloadURLExpiration;              //@synthesize constructedAssetDownloadURLExpiration=_constructedAssetDownloadURLExpiration - In the implementation block
@property (assign,nonatomic) BOOL hasConstructedAssetDownloadEstimatedSize; 
@property (assign,nonatomic) long long constructedAssetDownloadEstimatedSize;              //@synthesize constructedAssetDownloadEstimatedSize=_constructedAssetDownloadEstimatedSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)size;
-(void)setOwner:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)owner;
-(void)writeTo:(id)arg1 ;
-(void)setSize:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)signature;
-(NSString *)downloadToken;
-(NSData *)referenceSignature;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(NSString *)contentBaseURL;
-(NSString *)requestor;
-(long long)downloadTokenExpiration;
-(void)setDownloadToken:(NSString *)arg1 ;
-(void)setDownloadTokenExpiration:(long long)arg1 ;
-(NSData *)clearAssetKey;
-(void)setContentBaseURL:(NSString *)arg1 ;
-(void)setRequestor:(NSString *)arg1 ;
-(BOOL)hasSize;
-(NSString *)uploadReceipt;
-(long long)downloadURLExpiration;
-(NSString *)downloadBaseURL;
-(void)setDownloadBaseURL:(NSString *)arg1 ;
-(NSString *)constructedAssetDownloadURL;
-(void)setConstructedAssetDownloadURL:(NSString *)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(void)setDownloadURLExpiration:(long long)arg1 ;
-(void)setClearAssetKey:(NSData *)arg1 ;
-(void)setUploadReceipt:(NSString *)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(CKDPProtectionInfo *)protectionInfo;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(CKDPRecordIdentifier *)recordId;
-(BOOL)hasSignature;
-(BOOL)hasOwner;
-(void)setRecordId:(CKDPRecordIdentifier *)arg1 ;
-(BOOL)hasProtectionInfo;
-(BOOL)hasReferenceSignature;
-(BOOL)hasUploadReceipt;
-(BOOL)hasRecordId;
-(void)setDownloadRequest:(NSData *)arg1 ;
-(void)setAssetAuthorizationResponseUUID:(NSString *)arg1 ;
-(BOOL)hasDownloadToken;
-(BOOL)hasDownloadRequest;
-(BOOL)hasContentBaseURL;
-(BOOL)hasRequestor;
-(BOOL)hasDownloadBaseURL;
-(void)setHasDownloadURLExpiration:(BOOL)arg1 ;
-(BOOL)hasDownloadURLExpiration;
-(void)setHasDownloadTokenExpiration:(BOOL)arg1 ;
-(BOOL)hasDownloadTokenExpiration;
-(BOOL)hasClearAssetKey;
-(BOOL)hasAssetAuthorizationResponseUUID;
-(BOOL)hasConstructedAssetDownloadURL;
-(void)setConstructedAssetDownloadURLExpiration:(long long)arg1 ;
-(void)setHasConstructedAssetDownloadURLExpiration:(BOOL)arg1 ;
-(BOOL)hasConstructedAssetDownloadURLExpiration;
-(void)setConstructedAssetDownloadEstimatedSize:(long long)arg1 ;
-(void)setHasConstructedAssetDownloadEstimatedSize:(BOOL)arg1 ;
-(BOOL)hasConstructedAssetDownloadEstimatedSize;
-(NSData *)downloadRequest;
-(NSString *)assetAuthorizationResponseUUID;
-(long long)constructedAssetDownloadURLExpiration;
-(long long)constructedAssetDownloadEstimatedSize;
@end

