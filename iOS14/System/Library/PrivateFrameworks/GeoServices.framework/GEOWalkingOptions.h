/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOWalkingOptions : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _avoidedModes;
	double _preferredSpeed;
	struct {
		unsigned has_preferredSpeed : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasPreferredSpeed; 
@property (assign,nonatomic) double preferredSpeed; 
@property (nonatomic,readonly) unsigned long long avoidedModesCount; 
@property (nonatomic,readonly) int* avoidedModes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setAvoidedModes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(int*)avoidedModes;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)avoidedModeAtIndex:(unsigned long long)arg1 ;
-(void)setPreferredSpeed:(double)arg1 ;
-(double)preferredSpeed;
-(void)setHasPreferredSpeed:(BOOL)arg1 ;
-(BOOL)hasPreferredSpeed;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)avoidedModesCount;
-(void)clearAvoidedModes;
-(id)avoidedModesAsString:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addAvoidedMode:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)StringAsAvoidedModes:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

