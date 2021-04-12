/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_manifestEnv : 1;
		unsigned wrote_requestAppIdentifier : 1;
		unsigned wrote_throttleDuration : 1;
		unsigned wrote_throttleReqType : 1;
		unsigned wrote_networkService : 1;
		unsigned wrote_throttleCount : 1;
		unsigned wrote_throttleMode : 1;
		unsigned wrote_throttleTriggerCount : 1;
		unsigned wrote_throttleTriggerDuration : 1;
		unsigned wrote_throttleType : 1;
		unsigned wrote_tilesetId : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readRequestAppIdentifier;
-(void)_readManifestEnv;
-(void)_readThrottleReqType;
-(NSString *)requestAppIdentifier;
-(NSString *)manifestEnv;
-(NSString *)throttleReqType;
-(void)setRequestAppIdentifier:(NSString *)arg1 ;
-(void)setManifestEnv:(NSString *)arg1 ;
-(void)setThrottleReqType:(NSString *)arg1 ;
-(int)networkService;
-(void)setNetworkService:(int)arg1 ;
-(void)setHasNetworkService:(BOOL)arg1 ;
-(BOOL)hasNetworkService;
-(id)networkServiceAsString:(int)arg1 ;
-(int)StringAsNetworkService:(id)arg1 ;
-(BOOL)hasRequestAppIdentifier;
-(BOOL)hasManifestEnv;
-(unsigned)tilesetId;
-(void)setTilesetId:(unsigned)arg1 ;
-(void)setHasTilesetId:(BOOL)arg1 ;
-(BOOL)hasTilesetId;
-(int)throttleType;
-(void)setThrottleType:(int)arg1 ;
-(void)setHasThrottleType:(BOOL)arg1 ;
-(BOOL)hasThrottleType;
-(id)throttleTypeAsString:(int)arg1 ;
-(int)StringAsThrottleType:(id)arg1 ;
-(int)throttleMode;
-(void)setThrottleMode:(int)arg1 ;
-(void)setHasThrottleMode:(BOOL)arg1 ;
-(BOOL)hasThrottleMode;
-(id)throttleModeAsString:(int)arg1 ;
-(int)StringAsThrottleMode:(id)arg1 ;
-(BOOL)hasThrottleReqType;
-(unsigned)throttleTriggerCount;
-(void)setThrottleTriggerCount:(unsigned)arg1 ;
-(void)setHasThrottleTriggerCount:(BOOL)arg1 ;
-(BOOL)hasThrottleTriggerCount;
-(unsigned)throttleTriggerDuration;
-(void)setThrottleTriggerDuration:(unsigned)arg1 ;
-(void)setHasThrottleTriggerDuration:(BOOL)arg1 ;
-(BOOL)hasThrottleTriggerDuration;
-(unsigned)throttleCount;
-(void)setThrottleCount:(unsigned)arg1 ;
-(void)setHasThrottleCount:(BOOL)arg1 ;
-(BOOL)hasThrottleCount;
-(double)throttleDuration;
-(void)setThrottleDuration:(double)arg1 ;
-(void)setHasThrottleDuration:(BOOL)arg1 ;
-(BOOL)hasThrottleDuration;
@end

