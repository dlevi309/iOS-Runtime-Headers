/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
*/


#import <SpeechRecognitionCommandServices/SpeechRecognitionCommandServices-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary, NSArray;

@interface SRCSCommandRecognitionSystem : NSObject {

	NSString* _targetType;
	NSMutableArray* _recognizers;
	NSMutableDictionary* _resolvedBuiltInIdentifiers;
	NSString* _localeIdentifier;

}

@property (retain,readonly) NSString * localeIdentifier;              //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (retain,readonly) NSArray * recognizers;                    //@synthesize recognizers=_recognizers - In the implementation block
-(NSString *)localeIdentifier;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)targetType;
-(NSArray *)recognizers;
-(id)languageModelTreeForBuiltInLMIdentifier:(id)arg1 ;
-(void)_initalizeLanguageModelTree;
-(id)spokenCommandFromRecognizedAFSpeechPhrases:(id)arg1 ;
-(void)addRecognizer:(id)arg1 ;
-(id)spokenCommandFromRecognizedEARTokenSausage:(CFArrayRef)arg1 ;
-(void)_testWithPhrases:(id)arg1 ;
@end

