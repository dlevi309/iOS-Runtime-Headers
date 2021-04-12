/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


#import <Weather/Weather-Structs.h>
@class ACAccountStore;

@interface WeatherDeviceLookup : NSObject {

	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(id)init;
-(ACAccountStore *)accountStore;
-(void)checkAllDevicesRunningMinimumiOSVersion:(SCD_Struct_We9)arg1 macOSVersion:(SCD_Struct_We9)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

