/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDProactiveAppPredictionSubscores;

@interface AWDProactiveActionData : PBCodable <NSCopying> {

	double _score;
	unsigned long long _timestamp;
	NSString* _actionKey;
	int _cacheRank;
	NSString* _engaged;
	NSString* _heuristicName;
	NSString* _sessionId;
	AWDProactiveAppPredictionSubscores* _subscores;
	BOOL _engagedAction;
	BOOL _futureMedia;
	BOOL _shown;
	SCD_Struct_AW14 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasActionKey; 
@property (nonatomic,retain) NSString * actionKey;                                        //@synthesize actionKey=_actionKey - In the implementation block
@property (assign,nonatomic) BOOL hasCacheRank; 
@property (assign,nonatomic) int cacheRank;                                               //@synthesize cacheRank=_cacheRank - In the implementation block
@property (assign,nonatomic) BOOL hasEngagedAction; 
@property (assign,nonatomic) BOOL engagedAction;                                          //@synthesize engagedAction=_engagedAction - In the implementation block
@property (assign,nonatomic) BOOL hasFutureMedia; 
@property (assign,nonatomic) BOOL futureMedia;                                            //@synthesize futureMedia=_futureMedia - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score;                                                //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL hasShown; 
@property (assign,nonatomic) BOOL shown;                                                  //@synthesize shown=_shown - In the implementation block
@property (nonatomic,readonly) BOOL hasSubscores; 
@property (nonatomic,retain) AWDProactiveAppPredictionSubscores * subscores;              //@synthesize subscores=_subscores - In the implementation block
@property (nonatomic,readonly) BOOL hasHeuristicName; 
@property (nonatomic,retain) NSString * heuristicName;                                    //@synthesize heuristicName=_heuristicName - In the implementation block
@property (nonatomic,readonly) BOOL hasEngaged; 
@property (nonatomic,retain) NSString * engaged;                                          //@synthesize engaged=_engaged - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                                        //@synthesize sessionId=_sessionId - In the implementation block
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
-(void)setScore:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(BOOL)hasSessionId;
-(AWDProactiveAppPredictionSubscores *)subscores;
-(void)setEngaged:(NSString *)arg1 ;
-(BOOL)shown;
-(BOOL)engagedAction;
-(NSString *)actionKey;
-(void)setShown:(BOOL)arg1 ;
-(NSString *)heuristicName;
-(void)setHeuristicName:(NSString *)arg1 ;
-(void)setActionKey:(NSString *)arg1 ;
-(BOOL)hasSubscores;
-(void)setSubscores:(AWDProactiveAppPredictionSubscores *)arg1 ;
-(BOOL)hasEngaged;
-(NSString *)engaged;
-(BOOL)hasActionKey;
-(void)setCacheRank:(int)arg1 ;
-(void)setHasCacheRank:(BOOL)arg1 ;
-(BOOL)hasCacheRank;
-(void)setEngagedAction:(BOOL)arg1 ;
-(void)setHasEngagedAction:(BOOL)arg1 ;
-(BOOL)hasEngagedAction;
-(void)setFutureMedia:(BOOL)arg1 ;
-(void)setHasFutureMedia:(BOOL)arg1 ;
-(BOOL)hasFutureMedia;
-(void)setHasShown:(BOOL)arg1 ;
-(BOOL)hasShown;
-(BOOL)hasHeuristicName;
-(int)cacheRank;
-(BOOL)futureMedia;
@end

