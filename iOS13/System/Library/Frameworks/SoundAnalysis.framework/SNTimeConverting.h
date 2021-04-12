/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol SNTimeConverting <NSObject>
@property (nonatomic,readonly) double clientSampleRate; 
@required
-(long long)clientSampleTimeFromSampleTime:(long long)arg1 fromBox:(Box*)arg2;
-(double)clientSampleRate;

@end

