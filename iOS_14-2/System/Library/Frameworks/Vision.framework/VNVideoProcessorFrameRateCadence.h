/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNVideoProcessorCadence.h>

@interface VNVideoProcessorFrameRateCadence : VNVideoProcessorCadence {

	long long _frameRate;

}

@property (readonly) long long frameRate;              //@synthesize frameRate=_frameRate - In the implementation block
-(void)populateVCPVideoProcessorRequestConfiguration:(id)arg1 ;
-(id)initWithFrameRate:(long long)arg1 ;
-(long long)frameRate;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

