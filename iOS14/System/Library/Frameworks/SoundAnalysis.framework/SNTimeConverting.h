/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol SNTimeConverting <NSObject>
@property (nonatomic,readonly) double clientSampleRate; 
@required
-(long long)clientSampleTimeFromSampleTime:(long long)arg1 fromBox:(Box*)arg2;
-(double)clientSampleRate;

@end

