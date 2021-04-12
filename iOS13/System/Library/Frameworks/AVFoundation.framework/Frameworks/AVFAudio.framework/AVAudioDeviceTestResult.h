/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface AVAudioDeviceTestResult : NSObject <NSSecureCoding> {

	long long _inputID;
	long long _outputID;
	NSData* _data;
	double _sampleRate;
	double _correlationValue;

}

@property (assign,nonatomic) long long outputID;                   //@synthesize outputID=_outputID - In the implementation block
@property (assign,nonatomic) long long inputID;                    //@synthesize inputID=_inputID - In the implementation block
@property (assign,nonatomic) double sampleRate;                    //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) double correlationValue;              //@synthesize correlationValue=_correlationValue - In the implementation block
@property (nonatomic,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setSampleRate:(double)arg1 ;
-(double)sampleRate;
-(id)initWithData:(id)arg1 inputID:(long long)arg2 outputID:(long long)arg3 sampleRate:(double)arg4 correlationValue:(double)arg5 ;
-(long long)inputID;
-(void)setInputID:(long long)arg1 ;
-(long long)outputID;
-(void)setOutputID:(long long)arg1 ;
-(double)correlationValue;
-(void)setCorrelationValue:(double)arg1 ;
@end

