/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLFFailureDetails : PBCodable <NSCopying> {

	int _failureReason;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasFailureReason; 
@property (assign,nonatomic) int failureReason; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)failureReason;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)failureReasonAsString:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasFailureReason;
-(id)description;
-(void)setFailureReason:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasFailureReason:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)StringAsFailureReason:(id)arg1 ;
@end

