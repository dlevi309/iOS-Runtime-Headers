/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVCaptureSystemPressureStateInternal, NSString;

@interface AVCaptureSystemPressureState : NSObject {

	AVCaptureSystemPressureStateInternal* _internal;

}

@property (readonly) NSString * level; 
@property (readonly) unsigned long long factors; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(NSString *)level;
-(unsigned long long)factors;
-(id)initWithFigLevel:(int)arg1 factors:(unsigned long long)arg2 recommendedFrameRateRangeForPortrait:(id)arg3 ;
-(int)figLevel;
-(id)recommendedFrameRateRangeForPortrait;
-(id)spiDebugDescription;
@end

