/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NSArray, NSString, NSMutableDictionary;

@interface NLTagger : NSObject {

	NSArray* _schemes;
	NSString* _string;
	void* _tagger;
	NSMutableDictionary* _customModels;
	NSMutableDictionary* _customModelDictionaries;
	NSMutableDictionary* _classifierCaches;
	NSMutableDictionary* _sequenceCaches;
	NSMutableDictionary* _customGazetteers;
	NSMutableDictionary* _customGazetteerDictionaries;

}

@property (nonatomic,copy,readonly) NSArray * tagSchemes; 
@property (nonatomic,retain) NSString * string; 
@property (nonatomic,copy,readonly) NSString * dominantLanguage; 
+(id)availableTagSchemesForUnit:(long long)arg1 language:(id)arg2 ;
+(id)availableTagSchemesForLanguage:(id)arg1 ;
+(void)registerForAssetNotifications;
+(void)requestAssetsForLanguage:(id)arg1 tagScheme:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)string;
-(void)dealloc;
-(id)description;
-(void)setString:(NSString *)arg1 ;
-(NSString *)dominantLanguage;
-(void)setOrthography:(id)arg1 range:(NSRange)arg2 ;
-(id)_tagSchemeForScheme:(id)arg1 ;
-(void)enumerateTagsInRange:(NSRange)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)tagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 tokenRange:(NSRange*)arg4 ;
-(id)tagsInRange:(NSRange)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 tokenRanges:(id*)arg5 ;
-(NSArray *)tagSchemes;
-(void)stringEditedInRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
-(NSRange)sentenceRangeForRange:(NSRange)arg1 ;
-(NSRange)tokenRangeAtIndex:(unsigned long long)arg1 unit:(long long)arg2 ;
-(void)setLanguage:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithTagSchemes:(id)arg1 ;
-(id)_customModelAtIndex:(unsigned long long)arg1 unit:(long long)arg2 modelDictionary:(id)arg3 ;
-(id)_customGazetteerAtIndex:(unsigned long long)arg1 unit:(long long)arg2 gazetteerDictionary:(id)arg3 ;
-(id)_customTagDictionaryForSentence:(id)arg1 options:(unsigned long long)arg2 model:(id)arg3 gazetteer:(id)arg4 ;
-(id)_customTagAtIndex:(unsigned long long)arg1 fromTagDictionary:(id)arg2 ;
-(id)_customTagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 modelDictionary:(id)arg5 gazetteerDictionary:(id)arg6 ;
-(void)setModels:(id)arg1 forTagScheme:(id)arg2 ;
-(id)modelsForTagScheme:(id)arg1 ;
-(void)setGazetteers:(id)arg1 forTagScheme:(id)arg2 ;
-(id)gazetteersForTagScheme:(id)arg1 ;
@end

