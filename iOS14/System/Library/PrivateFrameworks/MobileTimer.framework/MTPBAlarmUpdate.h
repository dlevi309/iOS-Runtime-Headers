/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTPBAlarmProperties;

@interface MTPBAlarmUpdate : PBCodable <NSCopying> {

	MTPBAlarmProperties* _alarmProperties;

}

@property (nonatomic,retain) MTPBAlarmProperties * alarmProperties;              //@synthesize alarmProperties=_alarmProperties - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAlarmProperties:(MTPBAlarmProperties *)arg1 ;
-(MTPBAlarmProperties *)alarmProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

