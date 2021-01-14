/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgEventThrottle : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _manifestEnv;
	NSString* _requestAppIdentifier;
	double _throttleDuration;
	NSString* _throttleReqType;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _networkService;
	unsigned _throttleCount;
	int _throttleMode;
	unsigned _throttleTriggerCount;
	unsigned _throttleTriggerDuration;
	int _throttleType;
	unsigned _tilesetId;
	struct {
		unsigned has_throttleDuration : 1;
		unsigned has_networkService : 1;
		unsigned has_throttleCount : 1;
		unsigned has_throttleMode : 1;
		unsigned has_throttleTriggerCount : 1;
		unsigned has_throttleTriggerDuration : 1;
		unsigned has_throttleType : 1;
		unsigned has_tilesetId : 1;
		unsigned read_manifestEnv : 1;
		unsigned read_requestAppIdentifier : 1;
		unsigned read_throttleReqType : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasNetworkService; 
@property (assign,nonatomic) int networkService; 
@property (nonatomic,readonly) BOOL hasRequestAppIdentifier; 
@property (nonatomic,retain) NSString * requestAppIdentifier; 
@property (nonatomic,readonly) BOOL hasManifestEnv; 
@property (nonatomic,retain) NSString * manifestEnv; 
@property (assign,nonatomic) BOOL hasTilesetId; 
@property (assign,nonatomic) unsigned tilesetId; 
@property (assign,nonatomic) BOOL hasThrottleType; 
@property (assign,nonatomic) int throttleType; 
@property (assign,nonatomic) BOOL hasThrottleMode; 
@property (assign,nonatomic) int throttleMode; 
@property (nonatomic,readonly) BOOL hasThrottleReqType; 
@property (nonatomic,retain) NSString * throttleReqType; 
@property (assign,nonatomic) BOOL hasThrottleTriggerCount; 
@property (assign,nonatomic) unsigned throttleTriggerCount; 
@property (assign,nonatomic) BOOL hasThrottleTriggerDuration; 
@property (assign,nonatomic) unsigned throttleTriggerDuration; 
@property (assign,nonatomic) BOOL hasThrottleCount; 
@property (assign,nonatomic) unsigned throttleCount; 
@property (assign,nonatomic) BOOL hasThrottleDuration; 
@property (assign,nonatomic) double throttleDuration; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasRequestAppIdentifier;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)requestAppIdentifier;
-(id)init;
-(id)jsonRepresentation;
-(int)networkService;
-(NSString *)throttleReqType;
-(int)throttleType;
-(void)setHasThrottleType:(BOOL)arg1 ;
-(BOOL)hasThrottleType;
-(id)throttleTypeAsString:(int)arg1 ;
-(int)StringAsThrottleType:(id)arg1 ;
-(int)throttleMode;
-(void)setHasThrottleMode:(BOOL)arg1 ;
-(BOOL)hasThrottleMode;
-(id)throttleModeAsString:(int)arg1 ;
-(int)StringAsThrottleMode:(id)arg1 ;
-(unsigned)throttleCount;
-(BOOL)hasThrottleReqType;
-(unsigned)throttleTriggerCount;
-(void)setHasThrottleTriggerCount:(BOOL)arg1 ;
-(BOOL)hasThrottleTriggerCount;
-(unsigned)throttleTriggerDuration;
-(void)setHasThrottleTriggerDuration:(BOOL)arg1 ;
-(BOOL)hasThrottleTriggerDuration;
-(void)setHasThrottleCount:(BOOL)arg1 ;
-(BOOL)hasThrottleCount;
-(double)throttleDuration;
-(void)setHasThrottleDuration:(BOOL)arg1 ;
-(BOOL)hasThrottleDuration;
-(unsigned)tilesetId;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)manifestEnv;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTilesetId:(unsigned)arg1 ;
-(void)setHasTilesetId:(BOOL)arg1 ;
-(void)setManifestEnv:(NSString *)arg1 ;
-(id)description;
-(int)StringAsNetworkService:(id)arg1 ;
-(void)setThrottleType:(int)arg1 ;
-(void)setThrottleMode:(int)arg1 ;
-(void)setThrottleReqType:(NSString *)arg1 ;
-(void)setThrottleTriggerCount:(unsigned)arg1 ;
-(void)setThrottleTriggerDuration:(unsigned)arg1 ;
-(void)setThrottleCount:(unsigned)arg1 ;
-(void)setThrottleDuration:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasNetworkService;
-(id)networkServiceAsString:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasManifestEnv;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRequestAppIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasTilesetId;
-(void)setHasNetworkService:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNetworkService:(int)arg1 ;
@end

