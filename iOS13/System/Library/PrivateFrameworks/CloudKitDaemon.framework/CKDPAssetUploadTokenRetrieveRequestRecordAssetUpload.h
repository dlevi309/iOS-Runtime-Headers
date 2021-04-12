/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPRecordType *)type;
-(void)setType:(CKDPRecordType *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(CKDPRecordIdentifier *)recordId;
-(void)setRecordId:(CKDPRecordIdentifier *)arg1 ;
-(void)setAssetFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)assetFields;
-(void)addAssetFields:(id)arg1 ;
-(unsigned long long)assetFieldsCount;
-(void)clearAssetFields;
-(id)assetFieldsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRecordId;
@end

