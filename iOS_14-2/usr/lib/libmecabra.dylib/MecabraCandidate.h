/*
* Generated on Thursday, January 14, 2021 at 2:29:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libmecabra.dylib
*/

#import <libmecabra.dylib/libmecabra.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface MecabraCandidate : NSObject <NSCopying> {

	void* _rawCandidate;

}

@property (nonatomic,readonly) MecabraCandidateBase* rawCandidate; 
@property (nonatomic,readonly) ConversionCandidate* rawConversionCandidate; 
@property (nonatomic,readonly) BOOL isConversionCandidate; 
@property (nonatomic,readonly) BOOL isSyntheticCandidate; 
@property (nonatomic,readonly) BOOL isExtensionCandidate; 
@property (nonatomic,readonly) BOOL isExtensionForCandidateBar; 
@property (nonatomic,readonly) BOOL isEmojiCandidate; 
@property (nonatomic,readonly) BOOL isPersonName; 
@property (nonatomic,readonly) BOOL isLearningDictionaryCandidate; 
@property (nonatomic,readonly) BOOL isUserWordCandidate; 
@property (nonatomic,readonly) BOOL isPredictionCandidate; 
@property (nonatomic,readonly) BOOL isFuzzyMatchCandidate; 
@property (nonatomic,readonly) BOOL isAutocorrectedCandidate; 
@property (nonatomic,readonly) BOOL isOTAWordlistCandidate; 
@property (nonatomic,readonly) BOOL isRegionalCandidate; 
@property (nonatomic,readonly) BOOL isBilingualCandidate; 
@property (nonatomic,readonly) BOOL isPartialCandidate; 
@property (nonatomic,readonly) BOOL isAbbreviated; 
@property (nonatomic,readonly) BOOL isWubixingConvertedByPinyin; 
@property (nonatomic,readonly) unsigned long long wubixingType; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) unsigned long long wordCount; 
@property (nonatomic,readonly) NSString * surface; 
@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSString * analysisString; 
@property (nonatomic,readonly) NSString * convertedAnalysisString; 
@property (nonatomic,readonly) NSString * dictionaryReading; 
@property (nonatomic,readonly) NSDictionary * attributes; 
+(id)syntheticCandidateFromWords:(id)arg1 withLexicon:(Lexicon*)arg2 language:(int)arg3 ;
-(id)words;
-(BOOL)isBilingualCandidate;
-(BOOL)isPartialCandidate;
-(void)setWeight:(unsigned long long)arg1 ;
-(BOOL)isWubixingConvertedByPinyin;
-(id)initWithCandidate:(MecabraCandidateBase*)arg1 ;
-(NSString *)category;
-(long long)weight;
-(BOOL)isEmojiCandidate;
-(unsigned short)kind;
-(BOOL)setDisplayString:(CFStringRef)arg1 ;
-(BOOL)isExtensionCandidate;
-(BOOL)isRegionalCandidate;
-(NSDictionary *)attributes;
-(id)description;
-(NSString *)surface;
-(int)type;
-(NSString *)string;
-(id)wordIDs;
-(unsigned long long)wordCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned short)matchType;
-(ConversionCandidate*)rawConversionCandidate;
-(NSString *)dictionaryReading;
-(BOOL)isConversionCandidate;
-(MecabraCandidateBase*)rawCandidate;
-(NSString *)analysisString;
-(NSString *)convertedAnalysisString;
-(BOOL)isPersonName;
-(BOOL)isExtensionForCandidateBar;
-(BOOL)isLearningDictionaryCandidate;
-(BOOL)isUserWordCandidate;
-(BOOL)isPredictionCandidate;
-(BOOL)isFuzzyMatchCandidate;
-(BOOL)isAutocorrectedCandidate;
-(BOOL)isOTAWordlistCandidate;
-(long long)phraseBoundaryAfterWordAtIndex:(long long)arg1 ;
-(unsigned short)wordLengthAtIndex:(unsigned long long)arg1 ;
-(unsigned short)wordReadingLengthAtIndex:(unsigned long long)arg1 ;
-(unsigned short)wordDictionaryReadingLengthAtIndex:(unsigned long long)arg1 ;
-(BOOL)wordIsFromSystemDictionaryAtIndex:(unsigned long long)arg1 ;
-(CFArrayRef)copySyllableLengthArrayForWordAtIndex:(unsigned long long)arg1 ;
-(unsigned short)lcAttrAtIndex:(unsigned long long)arg1 ;
-(unsigned short)rcAttrAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trieValueAtIndex:(unsigned long long)arg1 ;
-(unsigned short)kindAtIndex:(unsigned long long)arg1 ;
-(long long)costAtIndex:(unsigned long long)arg1 ;
-(unsigned short)lastPrefixValue;
-(unsigned short)matchedLengthType;
-(double)lmProbability;
-(long long)baseCost;
-(long long)matchPenalty;
-(CFArrayRef)copySyllableLengthArrayInAnalysisString;
-(CFArrayRef)copySyllableLengthArrayInConvertedAnalysisString;
-(CFArrayRef)copySyllableLengthArrayInDictionaryReading;
-(unsigned long long)wubixingType;
-(SCD_Struct_Me5)wordRangeAtIndex:(long long)arg1 ;
-(BOOL)isAbbreviated;
-(id)syllablesInAnalysisString;
-(id)syllablesInConvertedAnalysisString;
-(id)syllablesInDictionaryReading;
-(id)syllablesInString:(id)arg1 syllableLengths:(id)arg2 ;
-(BOOL)isSyntheticCandidate;
-(id)convertedAnalysisStringForFirstSyllable;
-(id)syllabifiedAnalysisString;
-(id)syllabifiedConvertedAnalysisString;
-(id)syllabifiedDictionaryReading;
-(id)wordReadings;
@end

