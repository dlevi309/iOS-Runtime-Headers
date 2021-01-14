/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <ActivityAchievementsDaemon/ActivityAchievementsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDActivityAWDActivityAchievementCountEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _totalAchievementCount;
	int _totalOTAAchievementCount;
	int _totalOTAAchievementViewedCount;
	BOOL _moreThanOneYearSinceActivitySetup;
	SCD_Struct_HD4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAchievementCount; 
@property (assign,nonatomic) int totalAchievementCount;                              //@synthesize totalAchievementCount=_totalAchievementCount - In the implementation block
@property (assign,nonatomic) BOOL hasMoreThanOneYearSinceActivitySetup; 
@property (assign,nonatomic) BOOL moreThanOneYearSinceActivitySetup;                 //@synthesize moreThanOneYearSinceActivitySetup=_moreThanOneYearSinceActivitySetup - In the implementation block
@property (assign,nonatomic) BOOL hasTotalOTAAchievementCount; 
@property (assign,nonatomic) int totalOTAAchievementCount;                           //@synthesize totalOTAAchievementCount=_totalOTAAchievementCount - In the implementation block
@property (assign,nonatomic) BOOL hasTotalOTAAchievementViewedCount; 
@property (assign,nonatomic) int totalOTAAchievementViewedCount;                     //@synthesize totalOTAAchievementViewedCount=_totalOTAAchievementViewedCount - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)totalAchievementCount;
-(void)setTotalAchievementCount:(int)arg1 ;
-(void)setHasTotalAchievementCount:(BOOL)arg1 ;
-(BOOL)hasTotalAchievementCount;
-(id)totalAchievementCountAsString:(int)arg1 ;
-(int)StringAsTotalAchievementCount:(id)arg1 ;
-(void)setMoreThanOneYearSinceActivitySetup:(BOOL)arg1 ;
-(void)setHasMoreThanOneYearSinceActivitySetup:(BOOL)arg1 ;
-(BOOL)hasMoreThanOneYearSinceActivitySetup;
-(int)totalOTAAchievementCount;
-(void)setTotalOTAAchievementCount:(int)arg1 ;
-(void)setHasTotalOTAAchievementCount:(BOOL)arg1 ;
-(BOOL)hasTotalOTAAchievementCount;
-(id)totalOTAAchievementCountAsString:(int)arg1 ;
-(int)StringAsTotalOTAAchievementCount:(id)arg1 ;
-(int)totalOTAAchievementViewedCount;
-(void)setTotalOTAAchievementViewedCount:(int)arg1 ;
-(void)setHasTotalOTAAchievementViewedCount:(BOOL)arg1 ;
-(BOOL)hasTotalOTAAchievementViewedCount;
-(id)totalOTAAchievementViewedCountAsString:(int)arg1 ;
-(int)StringAsTotalOTAAchievementViewedCount:(id)arg1 ;
-(BOOL)moreThanOneYearSinceActivitySetup;
@end

