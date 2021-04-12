/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(CKDPLocationBound *)bounds;
-(void)setBounds:(CKDPLocationBound *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(CKDPRecordFieldIdentifier *)fieldName;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setFieldName:(CKDPRecordFieldIdentifier *)arg1 ;
-(BOOL)hasFieldName;
-(BOOL)hasBounds;
-(CKDPRecordFieldValue *)fieldValue;
-(void)setFieldValue:(CKDPRecordFieldValue *)arg1 ;
-(BOOL)hasFieldValue;
@end

