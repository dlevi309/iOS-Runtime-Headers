/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDProactiveAppPredictionSubscores;

@interface AWDProactiveAppData : PBCodable <NSCopying> {

	double _score;
	unsigned long long _timestamp;
	NSString* _bundleId;
	NSString* _sessionId;
	AWDProactiveAppPredictionSubscores* _subscores;
	BOOL _engagedApp;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEngagedApp; 
@property (assign,nonatomic) BOOL engagedApp;                                             //@synthesize engagedApp=_engagedApp - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score;                                                //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) BOOL hasSubscores; 
@property (nonatomic,retain) AWDProactiveAppPredictionSubscores * subscores;              //@synthesize subscores=_subscores - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                                        //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                                         //@synthesize bundleId=_bundleId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(double)score;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)bundleId;
-(void)setScore:(double)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(BOOL)hasSessionId;
-(BOOL)hasBundleId;
-(AWDProactiveAppPredictionSubscores *)subscores;
-(void)setEngagedApp:(BOOL)arg1 ;
-(void)setHasEngagedApp:(BOOL)arg1 ;
-(BOOL)hasEngagedApp;
-(BOOL)hasSubscores;
-(BOOL)engagedApp;
-(void)setSubscores:(AWDProactiveAppPredictionSubscores *)arg1 ;
@end

