/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMPerformanceTestHarness.h>

@class NSMutableArray;

@interface CAMModeAndDeviceConfigurationTestHarness : CAMPerformanceTestHarness {

	NSMutableArray* __modeChangeListeners;

}

@property (nonatomic,readonly) NSMutableArray * _modeChangeListeners;              //@synthesize _modeChangeListeners=__modeChangeListeners - In the implementation block
-(void)handleDidOpenViewfinderForReason:(long long)arg1 ;
-(void)handleWillCloseViewfinderForReason:(long long)arg1 ;
-(void)handleDidCloseViewfinderForReason:(long long)arg1 ;
-(void)handleWillOpenViewfinderForReason:(long long)arg1 ;
-(void)handleChangeToMode:(long long)arg1 device:(long long)arg2 ;
-(id)initWithTestName:(id)arg1 ;
-(void)registerHandler:(/*^block*/id)arg1 forChangeToMode:(long long)arg2 devicePosition:(long long)arg3 ;
-(NSMutableArray *)_modeChangeListeners;
@end

