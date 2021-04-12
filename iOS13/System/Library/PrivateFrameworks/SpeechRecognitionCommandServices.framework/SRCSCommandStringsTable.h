/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
*/


@class NSString, NSDictionary;

@interface SRCSCommandStringsTable : NSObject {

	NSString* _localeIdentifier;
	NSDictionary* _commandStringsCache;

}
+(id)componentsFromLocaleIdentifier:(id)arg1 ;
+(id)languageModelDictionaryFromCommandText:(id)arg1 parsingErrorString:(id*)arg2 ;
+(BOOL)isSameLocaleIdentifier:(id)arg1 secondLocaleIdentifier:(id)arg2 ;
+(id)supportedTargetTypes;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)languageModelDictionaryForCommandIdentifier:(id)arg1 targetType:(id)arg2 parsingErrorString:(id*)arg3 ;
-(id)spokenStringPermutationsOfLanguageModelDictionary:(id)arg1 stringsTable:(id)arg2 ;
-(id)unparsedCommandTextForCommandIdentifier:(id)arg1 targetType:(id)arg2 ;
-(id)spokenStringPermutationsOfLanguageModelDictionary:(id)arg1 stringsTable:(id)arg2 restrictPermutationsToShortestAndLongest:(BOOL)arg3 ;
-(id)_commandStringsTable;
-(id)_commandStringsDictionaryForLocaleIdentifier:(id)arg1 ;
-(void)_flushCommandStringsTable;
-(id)rootCommandIdentifier:(id)arg1 foundTargetType:(id*)arg2 ;
-(unsigned long long)countOptionalNodesOfLanguageModelDictionary:(id)arg1 ;
-(id)spokenStringPermutationOfLanguageModelDictionary:(id)arg1 givenPermutation:(unsigned short*)arg2 stringsTable:(id)arg3 ;
-(void)removeDuplicateSpacesFromMutableString:(id)arg1 ;
-(id)warningStringForText:(id)arg1 identifier:(id)arg2 textTable:(id)arg3 ;
-(id)supportedCommandIdentifiersForTargetTypes:(id)arg1 ;
-(BOOL)isSupportedCommandIdentifier:(id)arg1 forTargetTypes:(id)arg2 ;
-(id)rowDataForTargetTypes:(id)arg1 ;
@end

