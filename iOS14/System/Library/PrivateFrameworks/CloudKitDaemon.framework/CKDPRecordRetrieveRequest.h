/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAssetsToDownload, NSString, CKDPRecordRetrieveRequestRetrieveAssetURL, CKDPRecordIdentifier, CKDPRequestedFields;

@interface CKDPRecordRetrieveRequest : PBRequest <NSCopying> {

	CKDPAssetsToDownload* _assetsToDownload;
	NSString* _clientVersionETag;
	CKDPRecordRetrieveRequestRetrieveAssetURL* _getAssetURL;
	CKDPRecordIdentifier* _recordIdentifier;
	CKDPRequestedFields* _requestedFields;
	NSString* _versionETag;
	BOOL _shouldFailBatch;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasRecordIdentifier; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordIdentifier;                              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedFields; 
@property (nonatomic,retain) CKDPRequestedFields * requestedFields;                                //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,readonly) BOOL hasVersionETag; 
@property (nonatomic,retain) NSString * versionETag;                                               //@synthesize versionETag=_versionETag - In the implementation block
@property (nonatomic,readonly) BOOL hasClientVersionETag; 
@property (nonatomic,retain) NSString * clientVersionETag;                                         //@synthesize clientVersionETag=_clientVersionETag - In the implementation block
@property (nonatomic,readonly) BOOL hasGetAssetURL; 
@property (nonatomic,retain) CKDPRecordRetrieveRequestRetrieveAssetURL * getAssetURL;              //@synthesize getAssetURL=_getAssetURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetsToDownload; 
@property (nonatomic,retain) CKDPAssetsToDownload * assetsToDownload;                              //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
@property (assign,nonatomic) BOOL hasShouldFailBatch; 
@property (assign,nonatomic) BOOL shouldFailBatch;                                                 //@synthesize shouldFailBatch=_shouldFailBatch - In the implementation block
+(id)options;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(CKDPRecordIdentifier *)recordIdentifier;
-(void)setGetAssetURL:(CKDPRecordRetrieveRequestRetrieveAssetURL *)arg1 ;
-(NSString *)versionETag;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRecordIdentifier;
-(void)setVersionETag:(NSString *)arg1 ;
-(id)description;
-(NSString *)clientVersionETag;
-(BOOL)hasRequestedFields;
-(CKDPRecordRetrieveRequestRetrieveAssetURL *)getAssetURL;
-(unsigned long long)hash;
-(BOOL)hasClientVersionETag;
-(BOOL)readFrom:(id)arg1 ;
-(void)setClientVersionETag:(NSString *)arg1 ;
-(BOOL)hasVersionETag;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRequestedFields:(CKDPRequestedFields *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPRequestedFields *)requestedFields;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRecordIdentifier:(CKDPRecordIdentifier *)arg1 ;
-(void)setAssetsToDownload:(CKDPAssetsToDownload *)arg1 ;
-(BOOL)hasGetAssetURL;
-(BOOL)hasAssetsToDownload;
-(void)setShouldFailBatch:(BOOL)arg1 ;
-(void)setHasShouldFailBatch:(BOOL)arg1 ;
-(BOOL)hasShouldFailBatch;
-(CKDPAssetsToDownload *)assetsToDownload;
-(BOOL)shouldFailBatch;
@end

