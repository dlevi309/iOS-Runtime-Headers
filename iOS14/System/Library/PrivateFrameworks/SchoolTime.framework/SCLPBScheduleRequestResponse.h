/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCLPBScheduleSettings;

@interface SCLPBScheduleRequestResponse : PBCodable <NSCopying> {

	SCLPBScheduleSettings* _scheduleSettings;

}

@property (nonatomic,readonly) BOOL hasScheduleSettings; 
@property (nonatomic,retain) SCLPBScheduleSettings * scheduleSettings;              //@synthesize scheduleSettings=_scheduleSettings - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SCLPBScheduleSettings *)scheduleSettings;
-(void)setScheduleSettings:(SCLPBScheduleSettings *)arg1 ;
-(BOOL)hasScheduleSettings;
@end

