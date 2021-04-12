/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMOdometerSuitabilityManagerProxy;

@interface CMOdometerSuitabilityManager : NSObject {

	CMOdometerSuitabilityManagerProxy* _odometerSuitabilityManagerProxy;

}

@property (nonatomic,readonly) CMOdometerSuitabilityManagerProxy * odometerSuitabilityManagerProxy;              //@synthesize odometerSuitabilityManagerProxy=_odometerSuitabilityManagerProxy - In the implementation block
-(id)init;
-(CMOdometerSuitabilityManagerProxy *)odometerSuitabilityManagerProxy;
-(void)startOdometerSuitabilityUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopOdometerSuitabilityUpdates;
-(void)dealloc;
@end

