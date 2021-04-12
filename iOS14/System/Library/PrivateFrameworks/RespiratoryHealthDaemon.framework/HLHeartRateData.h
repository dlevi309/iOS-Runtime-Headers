/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthDaemon.framework/RespiratoryHealthDaemon
*/


@class NSDate, NSUUID;

@interface HLHeartRateData : NSObject {

	int _context;
	NSDate* _timestamp;
	double _heartRate;
	double _confidence;
	unsigned long long _confidenceLevel;
	unsigned long long _mode;
	NSUUID* _uuid;

}

@property (readonly) NSDate * timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double heartRate;                        //@synthesize heartRate=_heartRate - In the implementation block
@property (readonly) double confidence;                               //@synthesize confidence=_confidence - In the implementation block
@property (readonly) unsigned long long confidenceLevel;              //@synthesize confidenceLevel=_confidenceLevel - In the implementation block
@property (readonly) unsigned long long mode;                         //@synthesize mode=_mode - In the implementation block
@property (readonly) int context;                                     //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
-(double)confidence;
-(unsigned long long)mode;
-(NSUUID *)uuid;
-(NSDate *)timestamp;
-(int)context;
-(void)setUuid:(NSUUID *)arg1 ;
-(unsigned long long)confidenceLevel;
-(double)heartRate;
-(void)setHeartRate:(double)arg1 ;
@end

