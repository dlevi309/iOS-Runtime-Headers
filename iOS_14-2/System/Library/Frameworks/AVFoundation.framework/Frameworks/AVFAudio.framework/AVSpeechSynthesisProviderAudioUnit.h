/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AudioToolboxCore/AUAudioUnit.h>

@class NSArray;

@interface AVSpeechSynthesisProviderAudioUnit : AUAudioUnit {

	NSArray* _speechVoices;
	/*^block*/id _speechSynthesisOutputMetadataBlock;

}

@property (nonatomic,retain) NSArray * speechVoices;                           //@synthesize speechVoices=_speechVoices - In the implementation block
@property (nonatomic,copy) id speechSynthesisOutputMetadataBlock;              //@synthesize speechSynthesisOutputMetadataBlock=_speechSynthesisOutputMetadataBlock - In the implementation block
+(void)initialize;
-(NSArray *)speechVoices;
-(void)synthesizeSpeechRequest:(id)arg1 ;
-(void)cancelSpeechRequest;
-(void)setSpeechVoices:(NSArray *)arg1 ;
-(id)speechSynthesisOutputMetadataBlock;
-(void)setSpeechSynthesisOutputMetadataBlock:(id)arg1 ;
@end

