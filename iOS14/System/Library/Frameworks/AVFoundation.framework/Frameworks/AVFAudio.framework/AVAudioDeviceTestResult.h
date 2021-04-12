/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInputID:(long long)arg1 ;
-(void)setOutputID:(long long)arg1 ;
-(id)initWithData:(id)arg1 inputID:(long long)arg2 outputID:(long long)arg3 sampleRate:(double)arg4 correlationValue:(double)arg5 ;
-(double)correlationValue;
-(void)setCorrelationValue:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)inputID;
-(NSData *)data;
-(void)setSampleRate:(double)arg1 ;
-(long long)outputID;
-(id)initWithCoder:(id)arg1 ;
-(double)sampleRate;
@end

