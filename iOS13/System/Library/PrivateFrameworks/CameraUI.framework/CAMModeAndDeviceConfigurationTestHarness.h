/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMPerformanceTestHarness.h>

@class NSMutableArray;

@interface CAMModeAndDeviceConfigurationTestHarness : CAMPerformanceTestHarness {

	NSMutableArray* __modeChangeListeners;

}

@property (nonatomic,readonly) NSMutableArray * _modeChangeListeners;              //@synthesize _modeChangeListeners=__modeChangeListeners - In the implementation block
-(void)handleWillCloseViewfinderForReason:(long long)arg1 ;
-(void)handleDidCloseViewfinderForReason:(long long)arg1 ;
-(void)handleWillOpenViewfinderForReason:(long long)arg1 ;
-(void)handleDidOpenViewfinderForReason:(long long)arg1 ;
-(void)handleChangeToMode:(long long)arg1 device:(long long)arg2 ;
-(id)initWithTestName:(id)arg1 ;
-(void)registerHandler:(/*^block*/id)arg1 forChangeToMode:(long long)arg2 devicePosition:(long long)arg3 ;
-(NSMutableArray *)_modeChangeListeners;
@end

