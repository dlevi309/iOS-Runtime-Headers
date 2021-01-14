/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVLivePlayerThermalThrottlingPolicy : NSObject {

	HGSynchronizable* _lock;
	map<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *, std::__1::less<PVSPI_OSThermalPressureLevel>, std::__1::allocator<std::__1::pair<const PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *> > >* _policy;

}
-(id)init;
-(id)description;
-(void)dealloc;
-(void)setThermalLevel:(int)arg1 controlParameters:(id)arg2 ;
-(id)populatedControlParametersForCurrentThermalLevel;
-(id)populatedControlParametersForThermalLevel:(int)arg1 ;
-(id)controlParametersForThermalLevel:(int)arg1 ;
@end

