/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TTSSpeechVoice;

@interface TTSSpeechChannel : NSObject <NSSecureCoding> {

	TTSSpeechVoice* _voice;

}

@property (nonatomic,retain) TTSSpeechVoice * voice;              //@synthesize voice=_voice - In the implementation block
+(BOOL)supportsSecureCoding;
-(TTSSpeechVoice *)voice;
-(void)setVoice:(TTSSpeechVoice *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithVoice:(id)arg1 ;
@end

