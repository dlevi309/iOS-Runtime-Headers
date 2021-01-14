/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <AVFCapture/AVCaptureVideoDataOutput.h>

@class CAMCaptureEngine;

@interface CAMPanoramaOutput : AVCaptureVideoDataOutput {

	long long _photoEncodingBehavior;
	CAMCaptureEngine* __engine;

}

@property (nonatomic,__weak,readonly) CAMCaptureEngine * _engine;              //@synthesize _engine=__engine - In the implementation block
@property (nonatomic,readonly) long long photoEncodingBehavior;                //@synthesize photoEncodingBehavior=_photoEncodingBehavior - In the implementation block
-(void)changeToEncodingBehavior:(long long)arg1 ;
-(void)changeToDirection:(long long)arg1 ;
-(id)initWithEngine:(id)arg1 ;
-(CAMCaptureEngine *)_engine;
-(long long)photoEncodingBehavior;
@end

