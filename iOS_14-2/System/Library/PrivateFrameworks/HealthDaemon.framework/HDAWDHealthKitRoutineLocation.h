/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDAWDHealthKitRoutineLocation : PBCodable <NSCopying> {

	long long _confidenceMillis;
	long long _recentVisitCount;
	long long _uncertaintyMillis;
	int _locationType;
	NSString* _locationUUID;
	SCD_Struct_HD10 _has;

}

@property (nonatomic,readonly) BOOL hasLocationUUID; 
@property (nonatomic,retain) NSString * locationUUID;                  //@synthesize locationUUID=_locationUUID - In the implementation block
@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType;                         //@synthesize locationType=_locationType - In the implementation block
@property (assign,nonatomic) BOOL hasUncertaintyMillis; 
@property (assign,nonatomic) long long uncertaintyMillis;              //@synthesize uncertaintyMillis=_uncertaintyMillis - In the implementation block
@property (assign,nonatomic) BOOL hasConfidenceMillis; 
@property (assign,nonatomic) long long confidenceMillis;               //@synthesize confidenceMillis=_confidenceMillis - In the implementation block
@property (assign,nonatomic) BOOL hasRecentVisitCount; 
@property (assign,nonatomic) long long recentVisitCount;               //@synthesize recentVisitCount=_recentVisitCount - In the implementation block
-(id)dictionaryRepresentation;
-(void)setLocationUUID:(NSString *)arg1 ;
-(NSString *)locationUUID;
-(void)mergeFrom:(id)arg1 ;
-(void)setLocationType:(int)arg1 ;
-(id)locationTypeAsString:(int)arg1 ;
-(id)description;
-(int)locationType;
-(int)StringAsLocationType:(id)arg1 ;
-(BOOL)hasLocationType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasLocationUUID;
-(void)setUncertaintyMillis:(long long)arg1 ;
-(void)setHasUncertaintyMillis:(BOOL)arg1 ;
-(BOOL)hasUncertaintyMillis;
-(void)setConfidenceMillis:(long long)arg1 ;
-(void)setHasConfidenceMillis:(BOOL)arg1 ;
-(BOOL)hasConfidenceMillis;
-(void)setRecentVisitCount:(long long)arg1 ;
-(void)setHasRecentVisitCount:(BOOL)arg1 ;
-(BOOL)hasRecentVisitCount;
-(long long)uncertaintyMillis;
-(long long)confidenceMillis;
-(long long)recentVisitCount;
@end

