/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IOAccessoryLdcmHealthClass : NSObject <NSSecureCoding> {

	BOOL _isHealthy;
	unsigned _version;
	unsigned long long _leakagePassedCount;
	unsigned long long _dryCount;
	unsigned long long _wetCount;
	unsigned long long _overVoltageCount;
	unsigned long long _outOfProfileCount;
	unsigned long long _lastSeenTimestamp;
	unsigned long long _rsvd0;
	unsigned long long _rsvd1;
	unsigned long long _rsvd2;
	unsigned long long _rsvd3;
	unsigned long long _overVoltageTimestamp;

}

@property (assign) unsigned version;                                     //@synthesize version=_version - In the implementation block
@property (assign) BOOL isHealthy;                                       //@synthesize isHealthy=_isHealthy - In the implementation block
@property (assign) unsigned long long leakagePassedCount;                //@synthesize leakagePassedCount=_leakagePassedCount - In the implementation block
@property (assign) unsigned long long dryCount;                          //@synthesize dryCount=_dryCount - In the implementation block
@property (assign) unsigned long long wetCount;                          //@synthesize wetCount=_wetCount - In the implementation block
@property (assign) unsigned long long overVoltageCount;                  //@synthesize overVoltageCount=_overVoltageCount - In the implementation block
@property (assign) unsigned long long outOfProfileCount;                 //@synthesize outOfProfileCount=_outOfProfileCount - In the implementation block
@property (assign) unsigned long long lastSeenTimestamp;                 //@synthesize lastSeenTimestamp=_lastSeenTimestamp - In the implementation block
@property (assign) unsigned long long rsvd0;                             //@synthesize rsvd0=_rsvd0 - In the implementation block
@property (assign) unsigned long long rsvd1;                             //@synthesize rsvd1=_rsvd1 - In the implementation block
@property (assign) unsigned long long rsvd2;                             //@synthesize rsvd2=_rsvd2 - In the implementation block
@property (assign) unsigned long long rsvd3;                             //@synthesize rsvd3=_rsvd3 - In the implementation block
@property (assign) unsigned long long overVoltageTimestamp;              //@synthesize overVoltageTimestamp=_overVoltageTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(void)setLastSeenTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)lastSeenTimestamp;
-(BOOL)isHealthy;
-(unsigned long long)leakagePassedCount;
-(unsigned long long)dryCount;
-(unsigned long long)wetCount;
-(unsigned long long)overVoltageCount;
-(unsigned long long)outOfProfileCount;
-(unsigned long long)rsvd0;
-(unsigned long long)rsvd1;
-(unsigned long long)rsvd2;
-(unsigned long long)rsvd3;
-(void)setIsHealthy:(BOOL)arg1 ;
-(void)setLeakagePassedCount:(unsigned long long)arg1 ;
-(void)setDryCount:(unsigned long long)arg1 ;
-(void)setWetCount:(unsigned long long)arg1 ;
-(void)setOverVoltageCount:(unsigned long long)arg1 ;
-(void)setOutOfProfileCount:(unsigned long long)arg1 ;
-(void)setRsvd0:(unsigned long long)arg1 ;
-(void)setRsvd1:(unsigned long long)arg1 ;
-(void)setRsvd2:(unsigned long long)arg1 ;
-(void)setRsvd3:(unsigned long long)arg1 ;
-(unsigned long long)overVoltageTimestamp;
-(void)setOverVoltageTimestamp:(unsigned long long)arg1 ;
@end

