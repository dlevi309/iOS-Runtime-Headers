/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ATXUserMetricsPBActionPredictionsMetricsLogEntry : PBCodable <NSCopying> {

	NSString* _cacheId;
	int _dayOfWeek;
	unsigned _engagedActions;
	NSString* _engagedBundleId;
	NSMutableArray* _experiments;
	unsigned _hourOfDay;
	unsigned _rankOfFirstEngagement;
	unsigned _shownActions;
	int _ui;
	NSString* _userIdentifier;
	SCD_Struct_AW14 _has;

}

@property (nonatomic,readonly) BOOL hasUserIdentifier; 
@property (nonatomic,retain) NSString * userIdentifier;                   //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasHourOfDay; 
@property (assign,nonatomic) unsigned hourOfDay;                          //@synthesize hourOfDay=_hourOfDay - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) int dayOfWeek;                               //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (assign,nonatomic) BOOL hasShownActions; 
@property (assign,nonatomic) unsigned shownActions;                       //@synthesize shownActions=_shownActions - In the implementation block
@property (assign,nonatomic) BOOL hasEngagedActions; 
@property (assign,nonatomic) unsigned engagedActions;                     //@synthesize engagedActions=_engagedActions - In the implementation block
@property (assign,nonatomic) BOOL hasRankOfFirstEngagement; 
@property (assign,nonatomic) unsigned rankOfFirstEngagement;              //@synthesize rankOfFirstEngagement=_rankOfFirstEngagement - In the implementation block
@property (nonatomic,readonly) BOOL hasEngagedBundleId; 
@property (nonatomic,retain) NSString * engagedBundleId;                  //@synthesize engagedBundleId=_engagedBundleId - In the implementation block
@property (assign,nonatomic) BOOL hasUi; 
@property (assign,nonatomic) int ui;                                      //@synthesize ui=_ui - In the implementation block
@property (nonatomic,readonly) BOOL hasCacheId; 
@property (nonatomic,retain) NSString * cacheId;                          //@synthesize cacheId=_cacheId - In the implementation block
@property (nonatomic,retain) NSMutableArray * experiments;                //@synthesize experiments=_experiments - In the implementation block
+(Class)experimentsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(int)dayOfWeek;
-(unsigned)hourOfDay;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDayOfWeek:(int)arg1 ;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasDayOfWeek;
-(void)setHourOfDay:(unsigned)arg1 ;
-(void)setHasHourOfDay:(BOOL)arg1 ;
-(BOOL)hasHourOfDay;
-(void)setExperiments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)experiments;
-(id)dayOfWeekAsString:(int)arg1 ;
-(int)StringAsDayOfWeek:(id)arg1 ;
-(int)ui;
-(unsigned)shownActions;
-(NSString *)engagedBundleId;
-(BOOL)hasUserIdentifier;
-(void)setShownActions:(unsigned)arg1 ;
-(void)setHasShownActions:(BOOL)arg1 ;
-(BOOL)hasShownActions;
-(void)setEngagedActions:(unsigned)arg1 ;
-(void)setHasEngagedActions:(BOOL)arg1 ;
-(BOOL)hasEngagedActions;
-(void)setRankOfFirstEngagement:(unsigned)arg1 ;
-(void)setHasRankOfFirstEngagement:(BOOL)arg1 ;
-(BOOL)hasRankOfFirstEngagement;
-(BOOL)hasEngagedBundleId;
-(void)setUi:(int)arg1 ;
-(void)setHasUi:(BOOL)arg1 ;
-(BOOL)hasUi;
-(id)uiAsString:(int)arg1 ;
-(int)StringAsUi:(id)arg1 ;
-(BOOL)hasCacheId;
-(void)clearExperiments;
-(void)addExperiments:(id)arg1 ;
-(unsigned long long)experimentsCount;
-(id)experimentsAtIndex:(unsigned long long)arg1 ;
-(unsigned)engagedActions;
-(unsigned)rankOfFirstEngagement;
-(void)setEngagedBundleId:(NSString *)arg1 ;
-(NSString *)cacheId;
-(void)setCacheId:(NSString *)arg1 ;
@end

