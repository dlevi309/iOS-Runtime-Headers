/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVLivePlayerThermalThrottlingPolicy : NSObject {

	HGSynchronizable* _lock;
	map<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *, std::__1::less<PVSPI_OSThermalPressureLevel>, std::__1::allocator<std::__1::pair<const PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *> > >* _policy;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setThermalLevel:(int)arg1 controlParameters:(id)arg2 ;
-(id)populatedControlParametersForCurrentThermalLevel;
-(id)populatedControlParametersForThermalLevel:(int)arg1 ;
-(id)controlParametersForThermalLevel:(int)arg1 ;
@end

