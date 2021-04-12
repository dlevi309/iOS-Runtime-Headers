/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@class AVCaptureSystemPressureStateInternal, NSString;

@interface AVCaptureSystemPressureState : NSObject {

	AVCaptureSystemPressureStateInternal* _internal;

}

@property (readonly) NSString * level; 
@property (readonly) unsigned long long factors; 
+(void)initialize;
-(id)recommendedFrameRateRangeForPortrait;
-(id)init;
-(int)figLevel;
-(id)debugDescription;
-(id)description;
-(NSString *)level;
-(id)spiDebugDescription;
-(id)initWithFigLevel:(int)arg1 factors:(unsigned long long)arg2 recommendedFrameRateRangeForPortrait:(id)arg3 ;
-(unsigned long long)factors;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

