/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEORPSearchFeedbackCorrections : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _correctionType;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasCorrectionType; 
@property (assign,nonatomic) int correctionType; 
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
-(int)correctionType;
-(void)setCorrectionType:(int)arg1 ;
-(void)setHasCorrectionType:(BOOL)arg1 ;
-(BOOL)hasCorrectionType;
-(id)correctionTypeAsString:(int)arg1 ;
-(int)StringAsCorrectionType:(id)arg1 ;
@end

