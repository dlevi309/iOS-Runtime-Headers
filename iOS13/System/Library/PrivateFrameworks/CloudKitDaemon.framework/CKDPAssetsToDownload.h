/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRequestedFields;

@interface CKDPAssetsToDownload : PBCodable <NSCopying> {

	CKDPRequestedFields* _assetFields;
	BOOL _allAssets;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasAllAssets; 
@property (assign,nonatomic) BOOL allAssets;                                 //@synthesize allAssets=_allAssets - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetFields; 
@property (nonatomic,retain) CKDPRequestedFields * assetFields;              //@synthesize assetFields=_assetFields - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAssetFields:(CKDPRequestedFields *)arg1 ;
-(CKDPRequestedFields *)assetFields;
-(void)setAllAssets:(BOOL)arg1 ;
-(BOOL)hasAssetFields;
-(void)setHasAllAssets:(BOOL)arg1 ;
-(BOOL)hasAllAssets;
-(BOOL)allAssets;
@end

