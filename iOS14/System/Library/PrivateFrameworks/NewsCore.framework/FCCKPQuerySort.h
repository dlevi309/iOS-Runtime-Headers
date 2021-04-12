/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPRecordFieldIdentifier;

@interface FCCKPQuerySort : PBCodable <NSCopying> {

	FCCKPRecordFieldIdentifier* _fieldName;
	int _order;
	SCD_Struct_FC4 _has;

}

@property (nonatomic,readonly) BOOL hasFieldName; 
@property (nonatomic,retain) FCCKPRecordFieldIdentifier * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (assign,nonatomic) BOOL hasOrder; 
@property (assign,nonatomic) int order;                                           //@synthesize order=_order - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(FCCKPRecordFieldIdentifier *)fieldName;
-(BOOL)hasOrder;
-(unsigned long long)hash;
-(BOOL)hasFieldName;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFieldName:(FCCKPRecordFieldIdentifier *)arg1 ;
-(void)setHasOrder:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)order;
-(void)setOrder:(int)arg1 ;
-(void)dealloc;
@end

