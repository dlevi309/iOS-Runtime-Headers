/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)requestAssetsForLanguage:(id)arg1 tagScheme:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)availableTagSchemesForUnit:(long long)arg1 language:(id)arg2 ;
+(id)availableTagSchemesForLanguage:(id)arg1 ;
+(void)registerForAssetNotifications;
-(id)tagHypothesesAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 maximumCount:(unsigned long long)arg4 tokenRange:(NSRange*)arg5 ;
-(NSString *)dominantLanguage;
-(id)_customHypothesesAtIndex:(unsigned long long)arg1 fromHypothesisDictionary:(id)arg2 ;
-(id)_customHypothesesAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 maximumCount:(unsigned long long)arg4 options:(unsigned long long)arg5 modelDictionary:(id)arg6 gazetteerDictionary:(id)arg7 ;
-(void)setGazetteers:(id)arg1 forTagScheme:(id)arg2 ;
-(void)setModels:(id)arg1 forTagScheme:(id)arg2 ;
-(id)initWithTagSchemes:(id)arg1 ;
-(id)gazetteersForTagScheme:(id)arg1 ;
-(id)_customTagDictionaryForSentence:(id)arg1 options:(unsigned long long)arg2 model:(id)arg3 gazetteer:(id)arg4 ;
-(id)description;
-(id)_tagSchemeForScheme:(id)arg1 ;
-(id)_customTagAtIndex:(unsigned long long)arg1 fromTagDictionary:(id)arg2 ;
-(id)_customHypothesisDictionaryForSentence:(id)arg1 options:(unsigned long long)arg2 model:(id)arg3 gazetteer:(id)arg4 maximumCount:(unsigned long long)arg5 ;
-(NSRange)tokenRangeAtIndex:(unsigned long long)arg1 unit:(long long)arg2 ;
-(void)stringEditedInRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
-(NSString *)string;
-(NSRange)tokenRangeForRange:(NSRange)arg1 unit:(long long)arg2 ;
-(NSRange)sentenceRangeForRange:(NSRange)arg1 ;
-(NSArray *)tagSchemes;
-(id)_customTagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 modelDictionary:(id)arg5 gazetteerDictionary:(id)arg6 ;
-(id)_customGazetteerAtIndex:(unsigned long long)arg1 unit:(long long)arg2 gazetteerDictionary:(id)arg3 ;
-(void)setOrthography:(id)arg1 range:(NSRange)arg2 ;
-(id)tagsInRange:(NSRange)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 tokenRanges:(id*)arg5 ;
-(id)tagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 tokenRange:(NSRange*)arg4 ;
-(id)modelsForTagScheme:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(void)setLanguage:(id)arg1 range:(NSRange)arg2 ;
-(void)enumerateTagsInRange:(NSRange)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)_customModelAtIndex:(unsigned long long)arg1 unit:(long long)arg2 modelDictionary:(id)arg3 ;
-(void)dealloc;
@end

