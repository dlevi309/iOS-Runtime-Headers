/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface WFTemperatureUnitProvider : NSObject {

	NSObject*<OS_dispatch_queue> _providerQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> providerQueue;              //@synthesize providerQueue=_providerQueue - In the implementation block
@property (readonly) int userTemperatureUnit; 
-(void)setProviderQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(int)userTemperatureUnit;
-(void)fetchTemperatureUnitWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)_providerQueue_changeUnit:(int)arg1 ;
-(void)_postDidChangeUnitDefaultsPreference;
-(void)replaceUnit:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)providerQueue;
-(int)_providerQueue_readUnit;
-(void)replaceUnit:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

