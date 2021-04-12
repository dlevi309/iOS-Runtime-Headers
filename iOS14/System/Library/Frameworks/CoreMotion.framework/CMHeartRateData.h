/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)modeName:(long long)arg1 ;
+(id)dataSourceName:(long long)arg1 ;
-(double)confidence;
-(long long)mode;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)dataSource;
-(BOOL)error;
-(id)initWithHeartRate:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3 startDate:(id)arg4 error:(BOOL)arg5 dataSource:(long long)arg6 mode:(long long)arg7 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(void)dealloc;
-(double)heartRate;
@end

