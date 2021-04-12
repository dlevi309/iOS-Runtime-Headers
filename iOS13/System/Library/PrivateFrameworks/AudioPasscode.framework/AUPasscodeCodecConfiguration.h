/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/

#import <AudioPasscode/AudioPasscode-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AUPasscodeCodecConfiguration : NSObject <NSCopying, NSSecureCoding> {

	long long _payloadLengthBytes;
	long long _sampleRate;
	long long _numChannels;
	NSString* _algorithmName;

}

@property (assign,nonatomic) long long payloadLengthBytes;              //@synthesize payloadLengthBytes=_payloadLengthBytes - In the implementation block
@property (assign,nonatomic) long long sampleRate;                      //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) long long numChannels;                     //@synthesize numChannels=_numChannels - In the implementation block
@property (nonatomic,copy) NSString * algorithmName;                    //@synthesize algorithmName=_algorithmName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSampleRate:(long long)arg1 ;
-(long long)sampleRate;
-(long long)numChannels;
-(long long)payloadLengthBytes;
-(id)initWithAlgorithmName:(id)arg1 ;
-(void)setAlgorithmName:(NSString *)arg1 ;
-(id)commandLineOptions;
-(id)initWithCommandLineArgs:(id)arg1 ;
-(void)setNumChannels:(long long)arg1 ;
-(NSString *)algorithmName;
-(void)setPayloadLengthBytes:(long long)arg1 ;
-(void)__setDefaultValues;
@end

