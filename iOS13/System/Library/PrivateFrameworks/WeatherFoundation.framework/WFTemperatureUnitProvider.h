/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface WFTemperatureUnitProvider : NSObject {

	NSObject*<OS_dispatch_queue> _providerQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> providerQueue;              //@synthesize providerQueue=_providerQueue - In the implementation block
@property (readonly) int userTemperatureUnit; 
-(id)init;
-(int)userTemperatureUnit;
-(void)fetchTemperatureUnitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)replaceUnit:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setProviderQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)providerQueue;
-(int)_providerQueue_readUnit;
-(int)_providerQueue_changeUnit:(int)arg1 ;
-(void)_postDidChangeUnitDefaultsPreference;
-(void)replaceUnit:(int)arg1 ;
@end

