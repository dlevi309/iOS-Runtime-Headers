/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AVSpeechSynthesisProviderVoice;

@interface AVSpeechSynthesisProviderRequest : NSObject <NSSecureCoding, NSCopying> {

	NSString* _ssmlRepresentation;
	AVSpeechSynthesisProviderVoice* _voice;

}

@property (nonatomic,retain) NSString * ssmlRepresentation;                       //@synthesize ssmlRepresentation=_ssmlRepresentation - In the implementation block
@property (nonatomic,retain) AVSpeechSynthesisProviderVoice * voice;              //@synthesize voice=_voice - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(AVSpeechSynthesisProviderVoice *)voice;
-(void)setVoice:(AVSpeechSynthesisProviderVoice *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSSMLRepresentation:(id)arg1 voice:(id)arg2 ;
-(NSString *)ssmlRepresentation;
-(void)setSsmlRepresentation:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

