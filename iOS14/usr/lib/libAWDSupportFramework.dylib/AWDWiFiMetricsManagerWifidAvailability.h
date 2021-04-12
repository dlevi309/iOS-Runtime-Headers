/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(BOOL)hasPid;
-(unsigned)pid;
-(unsigned long long)timestamp;
-(BOOL)hasWifidBootTimeDiff;
-(void)setHasPid:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setWifidBootTimeDiff:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(double)wifidBootTimeDiff;
-(void)setHasWifidBootTimeDiff:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPid:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

