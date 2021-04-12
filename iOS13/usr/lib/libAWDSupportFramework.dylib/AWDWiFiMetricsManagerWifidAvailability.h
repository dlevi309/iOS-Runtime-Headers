/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerWifidAvailability : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	double _wifidBootTimeDiff;
	unsigned _pid;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWifidBootTimeDiff; 
@property (assign,nonatomic) double wifidBootTimeDiff;                  //@synthesize wifidBootTimeDiff=_wifidBootTimeDiff - In the implementation block
@property (assign,nonatomic) BOOL hasPid; 
@property (assign,nonatomic) unsigned pid;                              //@synthesize pid=_pid - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPid:(unsigned)arg1 ;
-(unsigned)pid;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasPid:(BOOL)arg1 ;
-(BOOL)hasPid;
-(void)setWifidBootTimeDiff:(double)arg1 ;
-(void)setHasWifidBootTimeDiff:(BOOL)arg1 ;
-(BOOL)hasWifidBootTimeDiff;
-(double)wifidBootTimeDiff;
@end

