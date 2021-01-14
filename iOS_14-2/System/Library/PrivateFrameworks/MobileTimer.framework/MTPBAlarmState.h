/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface MTPBAlarmState : PBCodable <NSCopying> {

	NSMutableArray* _alarms;

}

@property (nonatomic,retain) NSMutableArray * alarms;              //@synthesize alarms=_alarms - In the implementation block
+(Class)alarmsType;
-(NSMutableArray *)alarms;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)clearAlarms;
-(void)addAlarms:(id)arg1 ;
-(id)alarmsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)alarmsCount;
-(id)description;
-(void)setAlarms:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

