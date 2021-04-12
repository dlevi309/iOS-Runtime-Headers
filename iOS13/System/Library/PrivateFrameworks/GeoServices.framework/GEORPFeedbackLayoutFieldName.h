/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEORPFeedbackLayoutFieldName : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _addressFieldName;
	int _groundviewFieldName;
	int _otherFieldName;
	int _poiFieldName;
	int _workflowFieldName;
	struct {
		unsigned has_addressFieldName : 1;
		unsigned has_groundviewFieldName : 1;
		unsigned has_otherFieldName : 1;
		unsigned has_poiFieldName : 1;
		unsigned has_workflowFieldName : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasWorkflowFieldName; 
@property (assign,nonatomic) int workflowFieldName; 
@property (assign,nonatomic) BOOL hasPoiFieldName; 
@property (assign,nonatomic) int poiFieldName; 
@property (assign,nonatomic) BOOL hasAddressFieldName; 
@property (assign,nonatomic) int addressFieldName; 
@property (assign,nonatomic) BOOL hasOtherFieldName; 
@property (assign,nonatomic) int otherFieldName; 
@property (assign,nonatomic) BOOL hasGroundviewFieldName; 
@property (assign,nonatomic) int groundviewFieldName; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)workflowFieldName;
-(void)setWorkflowFieldName:(int)arg1 ;
-(void)setHasWorkflowFieldName:(BOOL)arg1 ;
-(BOOL)hasWorkflowFieldName;
-(id)workflowFieldNameAsString:(int)arg1 ;
-(int)StringAsWorkflowFieldName:(id)arg1 ;
-(int)poiFieldName;
-(void)setPoiFieldName:(int)arg1 ;
-(void)setHasPoiFieldName:(BOOL)arg1 ;
-(BOOL)hasPoiFieldName;
-(id)poiFieldNameAsString:(int)arg1 ;
-(int)StringAsPoiFieldName:(id)arg1 ;
-(int)addressFieldName;
-(void)setAddressFieldName:(int)arg1 ;
-(void)setHasAddressFieldName:(BOOL)arg1 ;
-(BOOL)hasAddressFieldName;
-(id)addressFieldNameAsString:(int)arg1 ;
-(int)StringAsAddressFieldName:(id)arg1 ;
-(int)otherFieldName;
-(void)setOtherFieldName:(int)arg1 ;
-(void)setHasOtherFieldName:(BOOL)arg1 ;
-(BOOL)hasOtherFieldName;
-(id)otherFieldNameAsString:(int)arg1 ;
-(int)StringAsOtherFieldName:(id)arg1 ;
-(int)groundviewFieldName;
-(void)setGroundviewFieldName:(int)arg1 ;
-(void)setHasGroundviewFieldName:(BOOL)arg1 ;
-(BOOL)hasGroundviewFieldName;
-(id)groundviewFieldNameAsString:(int)arg1 ;
-(int)StringAsGroundviewFieldName:(id)arg1 ;
@end

