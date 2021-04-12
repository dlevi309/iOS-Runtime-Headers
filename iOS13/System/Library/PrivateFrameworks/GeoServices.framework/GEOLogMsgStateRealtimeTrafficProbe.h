/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (nonatomic,readonly) BOOL hasTripId; 
@property (nonatomic,retain) NSString * tripId; 
@property (assign,nonatomic) BOOL hasRecvTime; 
@property (assign,nonatomic) long long recvTime; 
@property (assign,nonatomic) BOOL hasProbeCount; 
@property (assign,nonatomic) int probeCount; 
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
-(NSString *)tripId;
-(void)setTripId:(NSString *)arg1 ;
-(BOOL)hasTripId;
-(long long)recvTime;
-(void)setRecvTime:(long long)arg1 ;
-(void)setHasRecvTime:(BOOL)arg1 ;
-(BOOL)hasRecvTime;
-(int)probeCount;
-(void)setProbeCount:(int)arg1 ;
-(void)setHasProbeCount:(BOOL)arg1 ;
-(BOOL)hasProbeCount;
@end

