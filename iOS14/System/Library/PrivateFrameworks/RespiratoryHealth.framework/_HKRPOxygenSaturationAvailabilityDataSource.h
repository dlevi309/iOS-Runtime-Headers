/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
*/

#import <libobjc.A.dylib/HKRPOxygenSaturationAvailabilityDataSource.h>

@class NRDevice, NSString;

@interface _HKRPOxygenSaturationAvailabilityDataSource : NSObject <HKRPOxygenSaturationAvailabilityDataSource> {

	NRDevice* _device;

}

@property (nonatomic,readonly) BOOL skipHardwareCheck; 
@property (nonatomic,readonly) BOOL deviceIsSupported; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(BOOL)skipHardwareCheck;
-(BOOL)deviceIsSupported;
@end

