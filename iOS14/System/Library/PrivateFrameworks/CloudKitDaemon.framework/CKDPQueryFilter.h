/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPLocationBound, CKDPRecordFieldIdentifier, CKDPRecordFieldValue;

@interface CKDPQueryFilter : PBCodable <NSCopying> {

	CKDPLocationBound* _bounds;
	CKDPRecordFieldIdentifier* _fieldName;
	CKDPRecordFieldValue* _fieldValue;
	int _type;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasFieldName; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) BOOL hasFieldValue; 
@property (nonatomic,retain) CKDPRecordFieldValue * fieldValue;                  //@synthesize fieldValue=_fieldValue - In the implementation block
@property (nonatomic,readonly) BOOL hasBounds; 
@property (nonatomic,retain) CKDPLocationBound * bounds;                         //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                           //@synthesize type=_type - In the implementation block
-(id)dictionaryRepresentation;
-(CKDPLocationBound *)bounds;
-(void)setFieldValue:(CKDPRecordFieldValue *)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setBounds:(CKDPLocationBound *)arg1 ;
-(id)description;
-(CKDPRecordFieldIdentifier *)fieldName;
-(CKDPRecordFieldValue *)fieldValue;
-(int)type;
-(unsigned long long)hash;
-(BOOL)hasFieldName;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFieldName:(CKDPRecordFieldIdentifier *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasFieldValue;
-(BOOL)hasBounds;
-(BOOL)isEqual:(id)arg1 ;
@end

