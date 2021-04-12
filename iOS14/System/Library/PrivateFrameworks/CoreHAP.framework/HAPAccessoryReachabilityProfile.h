/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HAPAccessoryReachabilityProfile.h>
@class HAPCharacteristic;


@protocol HAPAccessoryReachabilityProfile <NSObject>
@property (assign,nonatomic) double sleepInterval; 
@property (assign,nonatomic) double activityInterval; 
@property (nonatomic,readonly) HAPCharacteristic * sleepIntervalCharacteristic; 
@property (nonatomic,readonly) HAPCharacteristic * pollCharacteristic; 
@required
-(double)sleepInterval;
-(void)setSleepInterval:(double)arg1;
-(void)setActivityInterval:(double)arg1;
-(double)activityInterval;
-(HAPCharacteristic *)sleepIntervalCharacteristic;
-(HAPCharacteristic *)pollCharacteristic;

@end


@class HAPCharacteristic, NSString;

@interface HAPAccessoryReachabilityProfile : HMFObject <HAPAccessoryReachabilityProfile> {

	double _sleepInterval;
	double _activityInterval;
	HAPCharacteristic* _sleepIntervalCharacteristic;
	HAPCharacteristic* _pollCharacteristic;

}

@property (nonatomic,retain) HAPCharacteristic * sleepIntervalCharacteristic;              //@synthesize sleepIntervalCharacteristic=_sleepIntervalCharacteristic - In the implementation block
@property (nonatomic,retain) HAPCharacteristic * pollCharacteristic;                       //@synthesize pollCharacteristic=_pollCharacteristic - In the implementation block
@property (assign,nonatomic) double sleepInterval;                                         //@synthesize sleepInterval=_sleepInterval - In the implementation block
@property (assign,nonatomic) double activityInterval;                                      //@synthesize activityInterval=_activityInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)timeIntervalFromMillisecondNumberValue:(id)arg1 ;
-(id)init;
-(id)attributeDescriptions;
-(double)sleepInterval;
-(void)setSleepInterval:(double)arg1 ;
-(id)initWithDiscoveredServices:(id)arg1 ;
-(void)setSleepIntervalCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)setActivityInterval:(double)arg1 ;
-(void)setPollCharacteristic:(HAPCharacteristic *)arg1 ;
-(double)activityInterval;
-(HAPCharacteristic *)sleepIntervalCharacteristic;
-(HAPCharacteristic *)pollCharacteristic;
@end

