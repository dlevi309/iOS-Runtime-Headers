/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithCADisplay:(id)arg1 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(void)colorRampPropertyHandler:(id)arg1 ;
-(void)displayBrightnessPropertyHandler:(id)arg1 ;
-(void)nitsThresholdPLCPropertyHandler:(id)arg1 ;
-(void)updateDigitalDimmingBrightnessScaler:(id)arg1 ;
-(id)initWithCADisplays:(id)arg1 ;
@end

