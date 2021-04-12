/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

