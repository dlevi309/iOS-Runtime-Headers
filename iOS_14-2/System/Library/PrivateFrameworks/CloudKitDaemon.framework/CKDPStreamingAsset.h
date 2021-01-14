/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPStreamingAssetIdentifier, CKDPStreamingAssetRetrieveAssetResponse, CKDPStreamingAssetSaveAssetRequest, CKDPStreamingAssetSaveAssetResponse;

@interface CKDPStreamingAsset : PBCodable <NSCopying> {

	CKDPStreamingAssetIdentifier* _assetId;
	CKDPStreamingAssetRetrieveAssetResponse* _retrieveAssetResponse;
	CKDPStreamingAssetSaveAssetRequest* _saveAssetRequest;
	CKDPStreamingAssetSaveAssetResponse* _saveAssetResponse;

}

@property (nonatomic,readonly) BOOL hasAssetId; 
@property (nonatomic,retain) CKDPStreamingAssetIdentifier * assetId;                                       //@synthesize assetId=_assetId - In the implementation block
@property (nonatomic,readonly) BOOL hasSaveAssetRequest; 
@property (nonatomic,retain) CKDPStreamingAssetSaveAssetRequest * saveAssetRequest;                        //@synthesize saveAssetRequest=_saveAssetRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasSaveAssetResponse; 
@property (nonatomic,retain) CKDPStreamingAssetSaveAssetResponse * saveAssetResponse;                      //@synthesize saveAssetResponse=_saveAssetResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasRetrieveAssetResponse; 
@property (nonatomic,retain) CKDPStreamingAssetRetrieveAssetResponse * retrieveAssetResponse;              //@synthesize retrieveAssetResponse=_retrieveAssetResponse - In the implementation block
-(id)dictionaryRepresentation;
-(CKDPStreamingAssetIdentifier *)assetId;
-(void)setAssetId:(CKDPStreamingAssetIdentifier *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSaveAssetRequest:(CKDPStreamingAssetSaveAssetRequest *)arg1 ;
-(void)setSaveAssetResponse:(CKDPStreamingAssetSaveAssetResponse *)arg1 ;
-(void)setRetrieveAssetResponse:(CKDPStreamingAssetRetrieveAssetResponse *)arg1 ;
-(BOOL)hasAssetId;
-(BOOL)hasSaveAssetRequest;
-(BOOL)hasSaveAssetResponse;
-(BOOL)hasRetrieveAssetResponse;
-(CKDPStreamingAssetSaveAssetRequest *)saveAssetRequest;
-(CKDPStreamingAssetSaveAssetResponse *)saveAssetResponse;
-(CKDPStreamingAssetRetrieveAssetResponse *)retrieveAssetResponse;
@end

