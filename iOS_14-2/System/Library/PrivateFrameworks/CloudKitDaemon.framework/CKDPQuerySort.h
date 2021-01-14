/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPLocationCoordinate, CKDPRecordFieldIdentifier;

@interface CKDPQuerySort : PBCodable <NSCopying> {

	CKDPLocationCoordinate* _coordinate;
	CKDPRecordFieldIdentifier* _fieldName;
	int _order;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasFieldName; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (assign,nonatomic) BOOL hasOrder; 
@property (assign,nonatomic) int order;                                          //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) CKDPLocationCoordinate * coordinate;                //@synthesize coordinate=_coordinate - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasCoordinate;
-(CKDPLocationCoordinate *)coordinate;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setCoordinate:(CKDPLocationCoordinate *)arg1 ;
-(CKDPRecordFieldIdentifier *)fieldName;
-(BOOL)hasOrder;
-(unsigned long long)hash;
-(BOOL)hasFieldName;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFieldName:(CKDPRecordFieldIdentifier *)arg1 ;
-(void)setHasOrder:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)order;
-(void)setOrder:(int)arg1 ;
-(id)orderAsString:(int)arg1 ;
-(int)StringAsOrder:(id)arg1 ;
@end

