/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPRecordFieldIdentifier, FCCKPRecordFieldValue;

@interface FCCKPQueryFilter : PBCodable <NSCopying> {

	FCCKPRecordFieldIdentifier* _fieldName;
	FCCKPRecordFieldValue* _fieldValue;
	int _type;
	SCD_Struct_FC4 _has;

}

@property (nonatomic,readonly) BOOL hasFieldName; 
@property (nonatomic,retain) FCCKPRecordFieldIdentifier * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) BOOL hasFieldValue; 
@property (nonatomic,retain) FCCKPRecordFieldValue * fieldValue;                  //@synthesize fieldValue=_fieldValue - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                            //@synthesize type=_type - In the implementation block
-(id)dictionaryRepresentation;
-(void)setFieldValue:(FCCKPRecordFieldValue *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(FCCKPRecordFieldIdentifier *)fieldName;
-(FCCKPRecordFieldValue *)fieldValue;
-(int)type;
-(unsigned long long)hash;
-(BOOL)hasFieldName;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFieldName:(FCCKPRecordFieldIdentifier *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasFieldValue;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

