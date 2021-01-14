/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeroAppPredictionClient.framework/HeroAppPredictionClient
*/

#import <HeroAppPredictionClient/HeroAppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ATXPBHeroAppPrediction : PBCodable <NSCopying> {

	long long _adamId;
	double _latitude;
	double _latitudeAtPredictionTime;
	double _longitude;
	double _longitudeAtPredictionTime;
	long long _radius;
	long long _rank;
	double _score;
	NSString* _bundleId;
	NSData* _clipMetadata;
	NSString* _urlHash;
	BOOL _isTouristApp;
	SCD_Struct_AT1 _has;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                                //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                               //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                            //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL hasIsTouristApp; 
@property (assign,nonatomic) BOOL isTouristApp;                              //@synthesize isTouristApp=_isTouristApp - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score;                                   //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) BOOL hasUrlHash; 
@property (nonatomic,retain) NSString * urlHash;                             //@synthesize urlHash=_urlHash - In the implementation block
@property (nonatomic,readonly) BOOL hasClipMetadata; 
@property (nonatomic,retain) NSData * clipMetadata;                          //@synthesize clipMetadata=_clipMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasAdamId; 
@property (assign,nonatomic) long long adamId;                               //@synthesize adamId=_adamId - In the implementation block
@property (assign,nonatomic) BOOL hasRank; 
@property (assign,nonatomic) long long rank;                                 //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) long long radius;                               //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) BOOL hasLatitudeAtPredictionTime; 
@property (assign,nonatomic) double latitudeAtPredictionTime;                //@synthesize latitudeAtPredictionTime=_latitudeAtPredictionTime - In the implementation block
@property (assign,nonatomic) BOOL hasLongitudeAtPredictionTime; 
@property (assign,nonatomic) double longitudeAtPredictionTime;               //@synthesize longitudeAtPredictionTime=_longitudeAtPredictionTime - In the implementation block
-(id)dictionaryRepresentation;
-(void)setRank:(long long)arg1 ;
-(double)latitude;
-(void)setRadius:(long long)arg1 ;
-(BOOL)hasScore;
-(void)setHasLatitude:(BOOL)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)setLatitudeAtPredictionTime:(double)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(double)score;
-(NSString *)bundleId;
-(double)longitude;
-(BOOL)hasBundleId;
-(BOOL)hasRank;
-(void)setScore:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRadius;
-(NSString *)urlHash;
-(void)setLatitude:(double)arg1 ;
-(long long)radius;
-(id)description;
-(void)setIsTouristApp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(long long)rank;
-(void)setLongitudeAtPredictionTime:(double)arg1 ;
-(double)latitudeAtPredictionTime;
-(void)setUrlHash:(NSString *)arg1 ;
-(BOOL)hasAdamId;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)clipMetadata;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)longitudeAtPredictionTime;
-(void)setHasAdamId:(BOOL)arg1 ;
-(void)setHasRadius:(BOOL)arg1 ;
-(BOOL)isTouristApp;
-(long long)adamId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAdamId:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setClipMetadata:(NSData *)arg1 ;
-(void)setHasRank:(BOOL)arg1 ;
-(BOOL)hasUrlHash;
-(void)setHasIsTouristApp:(BOOL)arg1 ;
-(BOOL)hasIsTouristApp;
-(BOOL)hasClipMetadata;
-(void)setHasLatitudeAtPredictionTime:(BOOL)arg1 ;
-(BOOL)hasLatitudeAtPredictionTime;
-(void)setHasLongitudeAtPredictionTime:(BOOL)arg1 ;
-(BOOL)hasLongitudeAtPredictionTime;
@end

