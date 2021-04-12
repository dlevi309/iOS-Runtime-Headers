/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <AVFoundation/AVCaptureVideoDataOutput.h>

@class CAMCaptureEngine;

@interface CAMPanoramaOutput : AVCaptureVideoDataOutput {

	long long _photoEncodingBehavior;
	CAMCaptureEngine* __engine;

}

@property (nonatomic,__weak,readonly) CAMCaptureEngine * _engine;              //@synthesize _engine=__engine - In the implementation block
@property (nonatomic,readonly) long long photoEncodingBehavior;                //@synthesize photoEncodingBehavior=_photoEncodingBehavior - In the implementation block
-(id)initWithEngine:(id)arg1 ;
-(CAMCaptureEngine *)_engine;
-(long long)photoEncodingBehavior;
-(void)changeToEncodingBehavior:(long long)arg1 ;
-(void)changeToDirection:(long long)arg1 ;
@end

