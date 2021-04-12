/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>
#import <libobjc.A.dylib/SRSampling.h>

@class NSDate, NSString;

@interface CMHeartRateData : CMLogItem <SRSampling> {

	BOOL _error;
	double _heartRate;
	double _confidence;
	NSDate* _startDate;
	long long _dataSource;
	long long _mode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double heartRate;                    //@synthesize heartRate=_heartRate - In the implementation block
@property (nonatomic,readonly) double confidence;                   //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) BOOL error;                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) long long dataSource;                //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) long long mode;                      //@synthesize mode=_mode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dataSourceName:(long long)arg1 ;
+(id)modeName:(long long)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)error;
-(NSDate *)startDate;
-(double)confidence;
-(long long)mode;
-(long long)dataSource;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(double)heartRate;
-(id)initWithHeartRate:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3 startDate:(id)arg4 error:(BOOL)arg5 dataSource:(long long)arg6 mode:(long long)arg7 ;
@end

