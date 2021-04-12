/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CHTokenizedTextResult : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _tokenColumns;
	NSArray* _transcriptionPaths;
	NSArray* _transcriptionPathScores;

}

@property (nonatomic,readonly) long long tokenColumnCount; 
@property (nonatomic,copy,readonly) NSArray * transcriptionPaths;                   //@synthesize transcriptionPaths=_transcriptionPaths - In the implementation block
@property (nonatomic,copy,readonly) NSArray * transcriptionPathScores;              //@synthesize transcriptionPathScores=_transcriptionPathScores - In the implementation block
@property (nonatomic,copy,readonly) NSString * topTranscription; 
+(BOOL)supportsSecureCoding;
+(pair<double, double>)_scoreMeanAndStdForToken:(id)arg1 forLocale:(id)arg2 ;
+(long long)_characterCountInToken:(id)arg1 filteringCharacterSet:(id)arg2 filteredCharacterCount:(long long*)arg3 ;
+(id)tokenizedTextResultWithString:(id)arg1 strokeIndexes:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)transcriptionPaths;
-(id)transcriptionWithPath:(id)arg1 columnRange:(NSRange)arg2 filterLowConfidence:(BOOL)arg3 excludeGibberish:(BOOL)arg4 rejectionRate:(double*)arg5 tokenProcessingBlock:(/*^block*/id)arg6 ;
-(id)initWithTokenColumns:(id)arg1 transcriptionPaths:(id)arg2 scores:(id)arg3 ;
-(long long)tokenColumnCount;
-(id)tokenColumns;
-(id)tokensInTranscriptionPath:(id)arg1 atColumnIndex:(long long)arg2 ;
-(NSArray *)transcriptionPathScores;
-(void)enumerateTokensInTranscriptionPath:(id)arg1 columnRange:(NSRange)arg2 tokenProcessingBlock:(/*^block*/id)arg3 ;
-(NSString *)topTranscription;
-(id)legacyTextRecognitionResults;
-(id)transcriptionWithPath:(id)arg1 columnRange:(NSRange)arg2 filterLowConfidence:(BOOL)arg3 ;
-(id)tokenRowsAtColumnIndex:(long long)arg1 ;
-(id)tokenAtLocation:(SCD_Struct_CH38)arg1 ;
-(id)precedingSeparatorForToken:(id)arg1 ;
-(BOOL)_shouldFilterOutStringForToken:(id)arg1 isGibberish:(BOOL*)arg2 ;
-(BOOL)_isGibberishToken:(id)arg1 ;
-(double)languageFitnessForTranscriptionPath:(id)arg1 locale:(id)arg2 recognitionMode:(int)arg3 ;
-(long long)_tokenCountInTranscriptionPath:(id)arg1 columnRange:(NSRange)arg2 ;
-(double)_normalizedLanguageFitness:(double)arg1 ;
-(id)_legacyTextRecognitionResultForTranscriptionIndex:(long long)arg1 ;
-(BOOL)isEqualToTokenizedTextResult:(id)arg1 ;
-(id)precedingSeparatorForTopTranscriptionPath;
-(id)strokeIndexesForColumnsInRange:(NSRange)arg1 ;
-(double)languageFitnessForLocale:(id)arg1 recognitionMode:(int)arg2 ;
@end

