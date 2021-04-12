/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_os_log;
@class NSObject, NSMutableArray;

@interface CBCAManager : NSObject {

	NSObject*<OS_os_log> _logHandle;
	NSMutableArray* _displays;
	float _currentlySetMatrix[9];
	float _currentlySetScaler;
	float _digitalDimmingBrightnessScaler;

}
-(void)updateDigitalDimmingBrightnessScaler:(id)arg1 ;
-(void)displayBrightnessPropertyHandler:(id)arg1 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(void)nitsThresholdPLCPropertyHandler:(id)arg1 ;
-(id)initWithCADisplay:(id)arg1 ;
-(void)colorRampPropertyHandler:(id)arg1 ;
-(void)dealloc;
@end

