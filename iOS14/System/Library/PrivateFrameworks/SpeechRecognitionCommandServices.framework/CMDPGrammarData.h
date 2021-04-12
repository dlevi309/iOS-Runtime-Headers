/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
*/


@class NSString;

@interface CMDPGrammarData : NSObject {

	NSString* _commandIdentifier;
	NSString* _builtInLMIdentifier;
	NSString* _word;

}

@property (readonly) NSString * commandIdentifier;                //@synthesize commandIdentifier=_commandIdentifier - In the implementation block
@property (readonly) NSString * builtInLMIdentifier;              //@synthesize builtInLMIdentifier=_builtInLMIdentifier - In the implementation block
@property (readonly) NSString * word;                             //@synthesize word=_word - In the implementation block
-(NSString *)word;
-(NSString *)commandIdentifier;
-(id)initWithGrammarDataWord:(id)arg1 lmIdentifer:(id)arg2 commandIdentifier:(id)arg3 ;
-(NSString *)builtInLMIdentifier;
@end

