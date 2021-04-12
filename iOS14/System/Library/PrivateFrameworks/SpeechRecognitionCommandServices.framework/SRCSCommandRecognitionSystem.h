/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
*/


#import <SpeechRecognitionCommandServices/SpeechRecognitionCommandServices-Structs.h>
@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface SRCSCommandRecognitionSystem : NSObject {

	NSArray* _targetTypes;
	NSMutableArray* _recognizers;
	NSMutableDictionary* _resolvedBuiltInIdentifiers;
	NSString* _localeIdentifier;

}

@property (nonatomic,readonly) NSArray * targetTypes;                 //@synthesize targetTypes=_targetTypes - In the implementation block
@property (retain,readonly) NSString * localeIdentifier;              //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (retain,readonly) NSArray * recognizers;                    //@synthesize recognizers=_recognizers - In the implementation block
-(NSString *)localeIdentifier;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(NSArray *)recognizers;
-(NSArray *)targetTypes;
-(id)languageModelTreeForBuiltInLMIdentifier:(id)arg1 ;
-(void)_initalizeLanguageModelTree;
-(id)spokenCommandFromRecognizedAFSpeechPhrases:(id)arg1 ;
-(void)addRecognizer:(id)arg1 ;
-(id)spokenCommandFromRecognizedEARTokenSausage:(CFArrayRef)arg1 ;
-(void)_testWithPhrases:(id)arg1 ;
@end

