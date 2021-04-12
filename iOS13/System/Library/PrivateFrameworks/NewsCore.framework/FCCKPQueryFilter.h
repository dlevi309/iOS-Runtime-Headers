/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_FC1 _has;

}

@property (nonatomic,readonly) BOOL hasFieldName; 
@property (nonatomic,retain) FCCKPRecordFieldIdentifier * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) BOOL hasFieldValue; 
@property (nonatomic,retain) FCCKPRecordFieldValue * fieldValue;                  //@synthesize fieldValue=_fieldValue - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                            //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(FCCKPRecordFieldIdentifier *)fieldName;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setFieldName:(FCCKPRecordFieldIdentifier *)arg1 ;
-(BOOL)hasFieldName;
-(FCCKPRecordFieldValue *)fieldValue;
-(void)setFieldValue:(FCCKPRecordFieldValue *)arg1 ;
-(BOOL)hasFieldValue;
@end

