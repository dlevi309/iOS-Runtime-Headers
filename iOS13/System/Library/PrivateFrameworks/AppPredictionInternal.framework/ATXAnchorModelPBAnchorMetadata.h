/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXAnchorModelPBAnchorMetadata : PBCodable <NSCopying> {

	NSString* _anchorEventIdentifier;
	int _anchorEventType;
	int _anchorType;
	unsigned _dayOfMonth;
	int _dayOfWeek;
	unsigned _hourOfDay;
	NSString* _locationIdentifier;
	int _locationType;
	unsigned _month;
	SCD_Struct_AT16 _has;

}

@property (assign,nonatomic) BOOL hasAnchorType; 
@property (assign,nonatomic) int anchorType;                                //@synthesize anchorType=_anchorType - In the implementation block
@property (nonatomic,readonly) BOOL hasAnchorEventIdentifier; 
@property (nonatomic,retain) NSString * anchorEventIdentifier;              //@synthesize anchorEventIdentifier=_anchorEventIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasAnchorEventType; 
@property (assign,nonatomic) int anchorEventType;                           //@synthesize anchorEventType=_anchorEventType - In the implementation block
@property (assign,nonatomic) BOOL hasMonth; 
@property (assign,nonatomic) unsigned month;                                //@synthesize month=_month - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfMonth; 
@property (assign,nonatomic) unsigned dayOfMonth;                           //@synthesize dayOfMonth=_dayOfMonth - In the implementation block
@property (assign,nonatomic) BOOL hasHourOfDay; 
@property (assign,nonatomic) unsigned hourOfDay;                            //@synthesize hourOfDay=_hourOfDay - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) int dayOfWeek;                                 //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationIdentifier; 
@property (nonatomic,retain) NSString * locationIdentifier;                 //@synthesize locationIdentifier=_locationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType;                              //@synthesize locationType=_locationType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMonth:(unsigned)arg1 ;
-(unsigned)month;
-(unsigned)dayOfMonth;
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
-(int)locationType;
-(id)dayOfWeekAsString:(int)arg1 ;
-(int)StringAsDayOfWeek:(id)arg1 ;
-(void)setDayOfMonth:(unsigned)arg1 ;
-(BOOL)hasDayOfMonth;
-(void)setHasDayOfMonth:(BOOL)arg1 ;
-(BOOL)hasMonth;
-(void)setHasMonth:(BOOL)arg1 ;
-(void)setLocationType:(int)arg1 ;
-(NSString *)locationIdentifier;
-(void)setHasLocationType:(BOOL)arg1 ;
-(BOOL)hasLocationType;
-(id)locationTypeAsString:(int)arg1 ;
-(int)StringAsLocationType:(id)arg1 ;
-(int)anchorType;
-(void)setAnchorType:(int)arg1 ;
-(void)setHasAnchorType:(BOOL)arg1 ;
-(BOOL)hasAnchorType;
-(id)anchorTypeAsString:(int)arg1 ;
-(int)StringAsAnchorType:(id)arg1 ;
-(BOOL)hasAnchorEventIdentifier;
-(int)anchorEventType;
-(void)setAnchorEventType:(int)arg1 ;
-(void)setHasAnchorEventType:(BOOL)arg1 ;
-(BOOL)hasAnchorEventType;
-(id)anchorEventTypeAsString:(int)arg1 ;
-(int)StringAsAnchorEventType:(id)arg1 ;
-(BOOL)hasLocationIdentifier;
-(NSString *)anchorEventIdentifier;
-(void)setAnchorEventIdentifier:(NSString *)arg1 ;
-(void)setLocationIdentifier:(NSString *)arg1 ;
@end

