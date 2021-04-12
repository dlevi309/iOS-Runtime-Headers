/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPRecordFieldIdentifier *)field;
-(NSMutableArray *)assets;
-(void)setAssets:(NSMutableArray *)arg1 ;
-(void)setField:(CKDPRecordFieldIdentifier *)arg1 ;
-(BOOL)hasField;
-(unsigned long long)assetsCount;
-(void)addAssets:(id)arg1 ;
-(void)clearAssets;
-(id)assetsAtIndex:(unsigned long long)arg1 ;
@end

