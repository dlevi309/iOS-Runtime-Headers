/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPRecordIdentifier, CKDPRecordType;

@interface CKDPAssetUploadTokenRetrieveRequestRecordAssetUpload : PBCodable <NSCopying> {

	NSMutableArray* _assetFields;
	CKDPRecordIdentifier* _recordId;
	CKDPRecordType* _type;

}

@property (nonatomic,readonly) BOOL hasRecordId; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordId;              //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) CKDPRecordType * type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetFields;                 //@synthesize assetFields=_assetFields - In the implementation block
+(Class)assetFieldsType;
-(id)dictionaryRepresentation;
-(CKDPRecordIdentifier *)recordId;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setRecordId:(CKDPRecordIdentifier *)arg1 ;
-(void)setType:(CKDPRecordType *)arg1 ;
-(id)description;
-(BOOL)hasRecordId;
-(CKDPRecordType *)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAssetFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)assetFields;
-(void)addAssetFields:(id)arg1 ;
-(unsigned long long)assetFieldsCount;
-(void)clearAssetFields;
-(id)assetFieldsAtIndex:(unsigned long long)arg1 ;
@end

