/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSArray, NSMutableArray, NSMutableOrderedSet, NSString, NSMutableString;

@interface AXLanguageTaggedContent : NSObject {

	NSArray* _currentDialects;
	NSRange _currentChunk;
	BOOL _predictedByTagger;
	void* _nlTagger;
	void* _namedEntityTagger;
	BOOL _tagged;
	NSMutableArray* _tags;
	NSMutableOrderedSet* _unpredictedAmbiguousLangMaps;
	NSString* _userPreferredLangID;
	NSMutableOrderedSet* _predictedSecondaryLangMaps;
	NSMutableString* _contentString;

}

@property (nonatomic,retain) NSMutableString * contentString;                                 //@synthesize contentString=_contentString - In the implementation block
@property (assign,getter=isTagged,nonatomic) BOOL tagged;                                     //@synthesize tagged=_tagged - In the implementation block
@property (nonatomic,retain) NSMutableArray * tags;                                           //@synthesize tags=_tags - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * unpredictedAmbiguousLangMaps;              //@synthesize unpredictedAmbiguousLangMaps=_unpredictedAmbiguousLangMaps - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * predictedSecondaryLangMaps;                //@synthesize predictedSecondaryLangMaps=_predictedSecondaryLangMaps - In the implementation block
@property (nonatomic,retain) NSArray * currentDialects;                                       //@synthesize currentDialects=_currentDialects - In the implementation block
@property (nonatomic,readonly) NSString * content; 
@property (nonatomic,copy) NSString * userPreferredLangID;                                    //@synthesize userPreferredLangID=_userPreferredLangID - In the implementation block
-(void)dealloc;
-(id)description;
-(NSMutableArray *)tags;
-(void)setTags:(NSMutableArray *)arg1 ;
-(NSString *)content;
-(id)initWithContent:(id)arg1 ;
-(void)tagContent;
-(void)appendLanguageTaggedContent:(id)arg1 ;
-(id)primaryUnambiguousDialect;
-(id)primaryAmbiguousDialect;
-(void)setUserPreferredLangID:(NSString *)arg1 ;
-(NSString *)userPreferredLangID;
-(id)ambiguousLangMaps;
-(id)unambiguousLangMaps;
-(void)setContentString:(NSMutableString *)arg1 ;
-(NSMutableString *)contentString;
-(NSMutableOrderedSet *)unpredictedAmbiguousLangMaps;
-(NSMutableOrderedSet *)predictedSecondaryLangMaps;
-(NSArray *)currentDialects;
-(void)setCurrentDialects:(NSArray *)arg1 ;
-(BOOL)isTagged;
-(void)setTagged:(BOOL)arg1 ;
-(id)_allLangIDs;
-(void)_addTag;
-(BOOL)_isNamedEntity:(id)arg1 ;
-(BOOL)_addLanguageTagForDateIfNecessary;
-(int)langIDforLangCode:(id)arg1 ;
-(SCD_Struct_AX19*)_languageHintsEvenlyDistributedWithProbability:(float)arg1 excludingHints:(id)arg2 ;
-(id)langCodeForlangId:(int)arg1 ;
-(id)_overrideLanguageDetection:(id)arg1 ;
-(void)_manuallyProcessContentWithRange:(NSRange)arg1 ;
-(BOOL)_addLanguageTagForCurrentChunk;
-(id)significantAmbiguousLangMapsForUserKeyboards;
-(BOOL)_isStringCombinationOfCommonAndEmoji:(id)arg1 ;
-(void)setUnpredictedAmbiguousLangMaps:(NSMutableOrderedSet *)arg1 ;
-(void)setPredictedSecondaryLangMaps:(NSMutableOrderedSet *)arg1 ;
-(void)enumerateUnpredictedTags:(/*^block*/id)arg1 ;
-(void)enumeratePredictedTags:(/*^block*/id)arg1 ;
-(BOOL)langMapIsSignificant:(id)arg1 ;
-(id)significantAmbiguousLangMaps;
-(BOOL)hasOnlyWesternLangMaps;
-(BOOL)hasOnlyNonWesternLangMaps;
-(void)updateTagsForLocalePrefChange;
@end

