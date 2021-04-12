/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPRecordFieldIdentifier;

@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable <NSCopying> {

	NSMutableArray* _assets;
	CKDPRecordFieldIdentifier* _field;

}

@property (nonatomic,readonly) BOOL hasField; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * field;              //@synthesize field=_field - In the implementation block
@property (nonatomic,retain) NSMutableArray * assets;                        //@synthesize assets=_assets - In the implementation block
+(Class)assetsType;
-(unsigned long long)assetsCount;
-(NSMutableArray *)assets;
-(id)dictionaryRepresentation;
-(CKDPRecordFieldIdentifier *)field;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasField;
-(id)description;
-(void)addAssets:(id)arg1 ;
-(void)setAssets:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(void)setField:(CKDPRecordFieldIdentifier *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearAssets;
-(id)assetsAtIndex:(unsigned long long)arg1 ;
@end

