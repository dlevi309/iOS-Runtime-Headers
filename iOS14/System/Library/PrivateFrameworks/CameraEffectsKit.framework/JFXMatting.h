/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JFXMatting : NSObject {

	CGSize _colorBufferSize;
	long long _cameraLocation;
	BOOL _ready;

}

@property (assign,nonatomic) BOOL ready;              //@synthesize ready=_ready - In the implementation block
+(void)postNotification:(unsigned long long)arg1 ;
+(BOOL)_defaultMatteGeneratorPrefersDepth;
+(CGSize)mattingDepthInputSize;
+(id)depthDataForCVPixelBuffer:(CVBufferRef)arg1 ;
+(BOOL)canMatteWithANE;
+(BOOL)isCVASegMattingSPIWorking;
+(Class)defaultMatteGeneratorClass;
+(BOOL)defaultMatteGeneratorPrefersDepth;
+(id)defaultMatteGenerator:(id)arg1 ;
-(BOOL)ready;
-(void)setReady:(BOOL)arg1 ;
-(id)initForFrameSet:(id)arg1 ;
-(BOOL)isValidForCameraFrameSet:(id)arg1 ;
-(void)requestMattingStatus;
-(void)alphaMatteForFrameSet:(id)arg1 mattingPerfState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

