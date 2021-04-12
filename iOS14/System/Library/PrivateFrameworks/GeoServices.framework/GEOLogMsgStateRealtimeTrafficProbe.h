/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgStateRealtimeTrafficProbe : PBCodable <NSCopying> {

	long long _recvTime;
	NSString* _tripId;
	int _probeCount;
	SCD_Struct_GE123 _flags;

}

@property (nonatomic,readonly) BOOL hasTripId; 
@property (nonatomic,retain) NSString * tripId; 
@property (assign,nonatomic) BOOL hasRecvTime; 
@property (assign,nonatomic) long long recvTime; 
@property (assign,nonatomic) BOOL hasProbeCount; 
@property (assign,nonatomic) int probeCount; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(void)setProbeCount:(int)arg1 ;
-(id)jsonRepresentation;
-(NSString *)tripId;
-(long long)recvTime;
-(int)probeCount;
-(void)mergeFrom:(id)arg1 ;
-(void)setRecvTime:(long long)arg1 ;
-(BOOL)hasRecvTime;
-(void)setHasRecvTime:(BOOL)arg1 ;
-(void)setHasProbeCount:(BOOL)arg1 ;
-(BOOL)hasProbeCount;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasTripId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTripId:(NSString *)arg1 ;
@end

