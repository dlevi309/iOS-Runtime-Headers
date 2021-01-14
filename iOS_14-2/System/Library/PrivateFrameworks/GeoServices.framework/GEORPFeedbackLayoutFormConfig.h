/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEORPFeedbackLayoutFormConfig : PBCodable <NSCopying> {

	NSMutableArray* _layoutFields;
	int _formType;
	unsigned _ttl;
	BOOL _enabled;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasTtl; 
@property (assign,nonatomic) unsigned ttl; 
@property (assign,nonatomic) BOOL hasFormType; 
@property (assign,nonatomic) int formType; 
@property (nonatomic,retain) NSMutableArray * layoutFields; 
@property (assign,nonatomic) BOOL hasEnabled; 
@property (assign,nonatomic) BOOL enabled; 
+(Class)layoutFieldType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)enabled;
-(void)setTtl:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasFormType:(BOOL)arg1 ;
-(BOOL)hasFormType;
-(id)formTypeAsString:(int)arg1 ;
-(int)StringAsFormType:(id)arg1 ;
-(BOOL)hasEnabled;
-(id)jsonRepresentation;
-(NSMutableArray *)layoutFields;
-(void)addLayoutField:(id)arg1 ;
-(unsigned long long)layoutFieldsCount;
-(void)clearLayoutFields;
-(id)layoutFieldAtIndex:(unsigned long long)arg1 ;
-(void)setLayoutFields:(NSMutableArray *)arg1 ;
-(void)setHasEnabled:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)formType;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasTtl;
-(unsigned)ttl;
-(void)setHasTtl:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFormType:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

