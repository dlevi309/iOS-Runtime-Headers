/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VSSpeechWordTimingInfo : NSObject <NSSecureCoding> {

	double _startTime;
	NSRange _textRange;

}

@property (assign,nonatomic) double startTime;               //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) NSRange textRange;              //@synthesize textRange=_textRange - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)extraBytesFromUTF8ToUTF16With:(const char*)arg1 totalLength:(unsigned long long)arg2 begin:(unsigned long long)arg3 end:(unsigned long long)arg4 ;
+(id)wordTimingInfoFrom:(id)arg1 timestamps:(id)arg2 ;
+(id)utf16TimingInfoWithUTF8Range:(id)arg1 withText:(id)arg2 ;
-(void)setTextRange:(NSRange)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSRange)textRange;
-(id)initWithCoder:(id)arg1 ;
-(double)startTime;
@end

