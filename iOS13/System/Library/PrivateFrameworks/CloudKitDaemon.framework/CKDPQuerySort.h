/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPLocationCoordinate *)coordinate;
-(id)dictionaryRepresentation;
-(int)order;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCoordinate:(CKDPLocationCoordinate *)arg1 ;
-(void)setOrder:(int)arg1 ;
-(CKDPRecordFieldIdentifier *)fieldName;
-(BOOL)hasCoordinate;
-(void)setFieldName:(CKDPRecordFieldIdentifier *)arg1 ;
-(BOOL)hasFieldName;
-(void)setHasOrder:(BOOL)arg1 ;
-(BOOL)hasOrder;
-(id)orderAsString:(int)arg1 ;
-(int)StringAsOrder:(id)arg1 ;
@end

