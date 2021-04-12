/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEORPFeedbackLayoutFormConfig : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _layoutFields;
	int _formType;
	unsigned _ttl;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasTtl; 
@property (assign,nonatomic) unsigned ttl; 
@property (assign,nonatomic) BOOL hasFormType; 
@property (assign,nonatomic) int formType; 
@property (nonatomic,retain) NSMutableArray * layoutFields; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)layoutFieldType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)formType;
-(void)setFormType:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)ttl;
-(void)setHasFormType:(BOOL)arg1 ;
-(BOOL)hasFormType;
-(id)formTypeAsString:(int)arg1 ;
-(int)StringAsFormType:(id)arg1 ;
-(BOOL)hasTtl;
-(void)setTtl:(unsigned)arg1 ;
-(void)setHasTtl:(BOOL)arg1 ;
-(void)addLayoutField:(id)arg1 ;
-(unsigned long long)layoutFieldsCount;
-(void)clearLayoutFields;
-(id)layoutFieldAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)layoutFields;
-(void)setLayoutFields:(NSMutableArray *)arg1 ;
@end

