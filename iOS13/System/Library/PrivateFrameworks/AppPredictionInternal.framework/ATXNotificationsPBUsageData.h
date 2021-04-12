/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXNotificationsPBUsageData : PBCodable <NSCopying> {

	float _appPopularity;
	float _cleared;
	NSString* _country;
	float _defaultActions;
	float _engaged;
	float _ignored;
	float _orbs;
	float _received;
	float _suppActions;
	float _tapCoalesce;
	float _totalLaunches;
	SCD_Struct_AT53 _has;

}

@property (assign,nonatomic) BOOL hasReceived; 
@property (assign,nonatomic) float received;                      //@synthesize received=_received - In the implementation block
@property (assign,nonatomic) BOOL hasEngaged; 
@property (assign,nonatomic) float engaged;                       //@synthesize engaged=_engaged - In the implementation block
@property (assign,nonatomic) BOOL hasIgnored; 
@property (assign,nonatomic) float ignored;                       //@synthesize ignored=_ignored - In the implementation block
@property (assign,nonatomic) BOOL hasCleared; 
@property (assign,nonatomic) float cleared;                       //@synthesize cleared=_cleared - In the implementation block
@property (assign,nonatomic) BOOL hasAppPopularity; 
@property (assign,nonatomic) float appPopularity;                 //@synthesize appPopularity=_appPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunches; 
@property (assign,nonatomic) float totalLaunches;                 //@synthesize totalLaunches=_totalLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultActions; 
@property (assign,nonatomic) float defaultActions;                //@synthesize defaultActions=_defaultActions - In the implementation block
@property (assign,nonatomic) BOOL hasOrbs; 
@property (assign,nonatomic) float orbs;                          //@synthesize orbs=_orbs - In the implementation block
@property (assign,nonatomic) BOOL hasSuppActions; 
@property (assign,nonatomic) float suppActions;                   //@synthesize suppActions=_suppActions - In the implementation block
@property (assign,nonatomic) BOOL hasTapCoalesce; 
@property (assign,nonatomic) float tapCoalesce;                   //@synthesize tapCoalesce=_tapCoalesce - In the implementation block
@property (nonatomic,readonly) BOOL hasCountry; 
@property (nonatomic,retain) NSString * country;                  //@synthesize country=_country - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)country;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(BOOL)hasCountry;
-(float)ignored;
-(void)setIgnored:(float)arg1 ;
-(void)setHasIgnored:(BOOL)arg1 ;
-(BOOL)hasIgnored;
-(void)setEngaged:(float)arg1 ;
-(float)received;
-(void)setReceived:(float)arg1 ;
-(void)setTotalLaunches:(float)arg1 ;
-(void)setHasTotalLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalLaunches;
-(float)totalLaunches;
-(void)setHasReceived:(BOOL)arg1 ;
-(BOOL)hasReceived;
-(void)setHasEngaged:(BOOL)arg1 ;
-(BOOL)hasEngaged;
-(void)setCleared:(float)arg1 ;
-(void)setHasCleared:(BOOL)arg1 ;
-(BOOL)hasCleared;
-(void)setAppPopularity:(float)arg1 ;
-(void)setHasAppPopularity:(BOOL)arg1 ;
-(BOOL)hasAppPopularity;
-(void)setDefaultActions:(float)arg1 ;
-(void)setHasDefaultActions:(BOOL)arg1 ;
-(BOOL)hasDefaultActions;
-(void)setOrbs:(float)arg1 ;
-(void)setHasOrbs:(BOOL)arg1 ;
-(BOOL)hasOrbs;
-(void)setSuppActions:(float)arg1 ;
-(void)setHasSuppActions:(BOOL)arg1 ;
-(BOOL)hasSuppActions;
-(void)setTapCoalesce:(float)arg1 ;
-(void)setHasTapCoalesce:(BOOL)arg1 ;
-(BOOL)hasTapCoalesce;
-(float)engaged;
-(float)cleared;
-(float)appPopularity;
-(float)defaultActions;
-(float)orbs;
-(float)suppActions;
-(float)tapCoalesce;
@end

