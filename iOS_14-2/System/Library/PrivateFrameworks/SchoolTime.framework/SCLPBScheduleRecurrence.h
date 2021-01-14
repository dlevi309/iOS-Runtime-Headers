/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCLPBTimeInterval;

@interface SCLPBScheduleRecurrence : PBCodable <NSCopying> {

	int _day;
	SCLPBTimeInterval* _timeInterval;
	SCD_Struct_SC4 _has;

}

@property (nonatomic,readonly) BOOL hasTimeInterval; 
@property (nonatomic,retain) SCLPBTimeInterval * timeInterval;              //@synthesize timeInterval=_timeInterval - In the implementation block
@property (assign,nonatomic) BOOL hasDay; 
@property (assign,nonatomic) int day;                                       //@synthesize day=_day - In the implementation block
-(id)dictionaryRepresentation;
-(int)day;
-(void)setDay:(int)arg1 ;
-(void)setTimeInterval:(SCLPBTimeInterval *)arg1 ;
-(BOOL)hasDay;
-(SCLPBTimeInterval *)timeInterval;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasTimeInterval;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDay:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dayAsString:(int)arg1 ;
-(int)StringAsDay:(id)arg1 ;
@end

