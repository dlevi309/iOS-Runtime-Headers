/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/

#import <AudioPasscode/AudioPasscode-Structs.h>
#import <AudioPasscode/AUPasscodeCodecCapability.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface EchoCodecCapability : AUPasscodeCodecCapability <NSSecureCoding> {

	NSArray* _algorithmVersionNumbers;
	NSRange _frameSizeRange;
	NSRange _numFrameRepeatRange;
	NSRange _hpfCutOffFreqRange;

}

@property (nonatomic,readonly) NSRange frameSizeRange;                         //@synthesize frameSizeRange=_frameSizeRange - In the implementation block
@property (nonatomic,readonly) NSRange numFrameRepeatRange;                    //@synthesize numFrameRepeatRange=_numFrameRepeatRange - In the implementation block
@property (nonatomic,readonly) NSArray * algorithmVersionNumbers;              //@synthesize algorithmVersionNumbers=_algorithmVersionNumbers - In the implementation block
@property (nonatomic,readonly) NSRange hpfCutOffFreqRange;                     //@synthesize hpfCutOffFreqRange=_hpfCutOffFreqRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)frameSizeRange;
-(NSRange)numFrameRepeatRange;
-(NSArray *)algorithmVersionNumbers;
-(NSRange)hpfCutOffFreqRange;
@end

