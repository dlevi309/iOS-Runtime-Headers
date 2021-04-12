/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TTSSpeechVoice;

@interface TTSSpeechChannel : NSObject <NSSecureCoding> {

	TTSSpeechVoice* _voice;

}

@property (nonatomic,retain) TTSSpeechVoice * voice;              //@synthesize voice=_voice - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TTSSpeechVoice *)voice;
-(void)setVoice:(TTSSpeechVoice *)arg1 ;
-(id)initWithVoice:(id)arg1 ;
@end

