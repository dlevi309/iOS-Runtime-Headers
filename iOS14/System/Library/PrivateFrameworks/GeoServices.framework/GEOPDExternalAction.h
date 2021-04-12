/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDExternalAction : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _externalActionDetails;
	int _componentType;
	struct {
		unsigned has_componentType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasComponentType; 
@property (assign,nonatomic) int componentType; 
@property (nonatomic,retain) NSMutableArray * externalActionDetails; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)externalActionDetailType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setComponentType:(int)arg1 ;
-(void)setHasComponentType:(BOOL)arg1 ;
-(void)addExternalActionDetail:(id)arg1 ;
-(unsigned long long)externalActionDetailsCount;
-(void)clearExternalActionDetails;
-(id)externalActionDetailAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasComponentType;
-(id)componentTypeAsString:(int)arg1 ;
-(int)StringAsComponentType:(id)arg1 ;
-(NSMutableArray *)externalActionDetails;
-(void)setExternalActionDetails:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)componentType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

