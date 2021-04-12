/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/


#import <AudioPasscode/AudioPasscode-Structs.h>
@class NSString, NSArray;

@interface AUPasscodeCodecCapability : NSObject {

	NSString* _algorithmName;
	NSArray* _supportedSampleRates;
	NSRange _numChannelRange;

}

@property (nonatomic,copy,readonly) NSString * algorithmName;               //@synthesize algorithmName=_algorithmName - In the implementation block
@property (nonatomic,readonly) NSArray * supportedSampleRates;              //@synthesize supportedSampleRates=_supportedSampleRates - In the implementation block
@property (nonatomic,readonly) NSRange numChannelRange;                     //@synthesize numChannelRange=_numChannelRange - In the implementation block
-(id)init;
-(id)initWithAlgorithmName:(id)arg1 ;
-(NSString *)algorithmName;
-(NSArray *)supportedSampleRates;
-(NSRange)numChannelRange;
@end

