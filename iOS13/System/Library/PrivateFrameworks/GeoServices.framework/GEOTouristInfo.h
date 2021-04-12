/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTouristInfo : PBCodable <NSCopying> {

	double _fetchTimestamp;
	BOOL _isTourist;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasIsTourist; 
@property (assign,nonatomic) BOOL isTourist; 
@property (assign,nonatomic) BOOL hasFetchTimestamp; 
@property (assign,nonatomic) double fetchTimestamp; 
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
-(BOOL)isTourist;
-(void)setIsTourist:(BOOL)arg1 ;
-(void)setHasIsTourist:(BOOL)arg1 ;
-(BOOL)hasIsTourist;
-(void)setFetchTimestamp:(double)arg1 ;
-(double)fetchTimestamp;
-(void)setHasFetchTimestamp:(BOOL)arg1 ;
-(BOOL)hasFetchTimestamp;
@end

