/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDProactiveAppPredictionLaunchesAtLocation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _bundleId;
	float _latitude;
	float _longitude;
	unsigned _timeBucket;
	BOOL _isTourist;
	SCD_Struct_AT4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) float latitude;                            //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) float longitude;                           //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) unsigned timeBucket;                       //@synthesize timeBucket=_timeBucket - In the implementation block
@property (nonatomic,retain) NSString * bundleId;                       //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL isTourist;                            //@synthesize isTourist=_isTourist - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(float)latitude;
-(float)longitude;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLongitude:(float)arg1 ;
-(void)setLatitude:(float)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)isTourist;
-(void)setIsTourist:(BOOL)arg1 ;
-(unsigned)timeBucket;
-(void)setTimeBucket:(unsigned)arg1 ;
@end

