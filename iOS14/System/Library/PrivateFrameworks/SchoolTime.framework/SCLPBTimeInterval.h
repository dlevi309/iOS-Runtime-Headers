/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCLPBScheduleTime;

@interface SCLPBTimeInterval : PBCodable <NSCopying> {

	SCLPBScheduleTime* _endTime;
	SCLPBScheduleTime* _startTime;

}

@property (nonatomic,readonly) BOOL hasStartTime; 
@property (nonatomic,retain) SCLPBScheduleTime * startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) BOOL hasEndTime; 
@property (nonatomic,retain) SCLPBScheduleTime * endTime;                //@synthesize endTime=_endTime - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasStartTime;
-(void)setStartTime:(SCLPBScheduleTime *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setEndTime:(SCLPBScheduleTime *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(SCLPBScheduleTime *)endTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCLPBScheduleTime *)startTime;
-(BOOL)hasEndTime;
-(BOOL)isEqual:(id)arg1 ;
@end

