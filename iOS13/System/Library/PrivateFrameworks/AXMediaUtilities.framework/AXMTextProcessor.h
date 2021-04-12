/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class AXMSpellChecker, AXMLexiconManager, AXMTagger, AXMDataDetector, AXMSpeechFormatterCache, NSDictionary, NSMutableDictionary;

@interface AXMTextProcessor : NSObject {

	AXMSpellChecker* _spellChecker;
	AXMLexiconManager* _lexiconManager;
	AXMTagger* _tagger;
	AXMDataDetector* _dataDetector;
	AXMSpeechFormatterCache* _speechFormatterCache;
	NSDictionary* _globalWhitelistedWords;
	NSMutableDictionary* _localeWhitelistedWords;

}
-(id)init;
-(id)dataDetector;
-(id)lexiconManager;
-(id)tagger;
-(id)_preprocessText:(id)arg1 diagnostics:(id)arg2 ;
-(id)spellChecker;
-(id)processText:(id)arg1 withOperation:(id)arg2 ;
@end

