/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeroAppPredictionClient.framework/HeroAppPredictionClient
*/

#import <HeroAppPredictionClient/HeroAppPredictionClient-Structs.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>
#import <libobjc.A.dylib/ATXSuggestionExecutableProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CPSClipMetadata;

@interface ATXHeroAppPrediction : NSObject <ATXProtoBufWrapper, ATXSuggestionExecutableProtocol, NSSecureCoding, NSCopying> {

	BOOL _isTouristApp;
	unsigned long long _adamId;
	NSString* _bundleId;
	double _latitude;
	double _longitude;
	double _latitudeAtPredictionTime;
	double _longitudeAtPredictionTime;
	unsigned long long _radiusInMeters;
	unsigned long long _rank;
	double _score;
	NSString* _urlHash;
	CPSClipMetadata* _clipMetadata;

}

@property (assign,nonatomic) unsigned long long adamId;                      //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,retain) NSString * bundleId;                            //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) double latitude;                                //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                               //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) double latitudeAtPredictionTime;                //@synthesize latitudeAtPredictionTime=_latitudeAtPredictionTime - In the implementation block
@property (assign,nonatomic) double longitudeAtPredictionTime;               //@synthesize longitudeAtPredictionTime=_longitudeAtPredictionTime - In the implementation block
@property (assign,nonatomic) unsigned long long radiusInMeters;              //@synthesize radiusInMeters=_radiusInMeters - In the implementation block
@property (assign,nonatomic) unsigned long long rank;                        //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) BOOL isTouristApp;                              //@synthesize isTouristApp=_isTouristApp - In the implementation block
@property (assign,nonatomic) double score;                                   //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) NSString * urlHash;                             //@synthesize urlHash=_urlHash - In the implementation block
@property (nonatomic,retain) CPSClipMetadata * clipMetadata;                 //@synthesize clipMetadata=_clipMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)apui_isSupportedForCardRequests;
+(BOOL)supportsSecureCoding;
+(BOOL)isClipMetadataEqual:(id)arg1 other:(id)arg2 ;
+(id)copyClipMetadata:(id)arg1 ;
-(id)apui_intent;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(void)setRank:(unsigned long long)arg1 ;
-(double)latitude;
-(id)initWithPredictedBundleId:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 radiusInMeters:(unsigned long long)arg4 rank:(unsigned long long)arg5 isTouristApp:(BOOL)arg6 ;
-(id)initWithPredictedAdamId:(unsigned long long)arg1 latitude:(double)arg2 longitude:(double)arg3 radiusInMeters:(unsigned long long)arg4 rank:(unsigned long long)arg5 isTouristApp:(BOOL)arg6 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)proto;
-(id)init;
-(id)encodeAsProto;
-(void)setLatitudeAtPredictionTime:(double)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(double)score;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(NSString *)bundleId;
-(double)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(NSString *)urlHash;
-(void)setLatitude:(double)arg1 ;
-(NSString *)description;
-(void)setIsTouristApp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)rank;
-(BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLongitudeAtPredictionTime:(double)arg1 ;
-(double)latitudeAtPredictionTime;
-(unsigned long long)radiusInMeters;
-(void)setUrlHash:(NSString *)arg1 ;
-(CPSClipMetadata *)clipMetadata;
-(id)initWithPredictedAdamId:(unsigned long long)arg1 bundleId:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 radiusInMeters:(unsigned long long)arg5 rank:(unsigned long long)arg6 isTouristApp:(BOOL)arg7 score:(double)arg8 urlHash:(id)arg9 clipMetadata:(id)arg10 ;
-(double)longitudeAtPredictionTime;
-(void)setRadiusInMeters:(unsigned long long)arg1 ;
-(BOOL)isTouristApp;
-(unsigned long long)adamId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAdamId:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setClipMetadata:(CPSClipMetadata *)arg1 ;
@end

