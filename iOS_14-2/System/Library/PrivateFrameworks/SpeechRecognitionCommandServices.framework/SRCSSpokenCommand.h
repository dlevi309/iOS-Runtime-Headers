/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
*/

#import <SpeechRecognitionCommandServices/SpeechRecognitionCommandServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSDictionary, NSMutableDictionary, SRCSCommandRecognizer;

@interface SRCSSpokenCommand : NSObject <NSCopying> {

	NSArray* _strings;
	NSString* _identifier;
	NSDictionary* _recognizedParameters;
	NSMutableDictionary* _languageModelTree;
	id _fstGrammar;
	SRCSCommandRecognizer* _commandRecognizer;

}

@property (readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSDictionary * recognizedParameters;              //@synthesize recognizedParameters=_recognizedParameters - In the implementation block
@property (readonly) NSArray * strings; 
-(NSArray *)strings;
-(id)initWithStrings:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)recognizedParameters;
-(id)commandRecognizer;
-(void)setCommandRecognizer:(id)arg1 ;
-(void)setRecognizedParameters:(NSDictionary *)arg1 ;
-(id)_initWithSpokenCommand:(id)arg1 ;
-(id)_uniqueCustomCommandIdentifier;
-(void)_replaceBuiltInIdentiferNodesWithSubTreesInMutableLM:(id)arg1 ;
-(id)languageModelTree;
-(id)fstGrammar;
@end

