/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSArray, NSDictionary;

@interface SGExtractionDocument : NSObject {

	NSArray* _enrichedTaggedCharacterRanges;
	NSDictionary* _modelOutput;
	NSDictionary* _indexSetForOutputNameLabel;

}

@property (nonatomic,retain) NSArray * enrichedTaggedCharacterRanges;                //@synthesize enrichedTaggedCharacterRanges=_enrichedTaggedCharacterRanges - In the implementation block
@property (nonatomic,retain) NSDictionary * modelOutput;                             //@synthesize modelOutput=_modelOutput - In the implementation block
@property (nonatomic,retain) NSDictionary * indexSetForOutputNameLabel;              //@synthesize indexSetForOutputNameLabel=_indexSetForOutputNameLabel - In the implementation block
+(NSRange)textRangeForIndexRange:(NSRange)arg1 inTaggedCharacterRanges:(id)arg2 ;
+(id)dateComponentsFromDataDetectorMatch:(id)arg1 inferDates:(BOOL)arg2 approximateTime:(BOOL)arg3 partialDate:(BOOL)arg4 useEndForDurations:(BOOL)arg5 ;
+(id)candidatesForLabelTokenIndexes:(id)arg1 inPlainText:(id)arg2 forTaggedCharacterRanges:(id)arg3 ;
+(id)keyForOutputName:(id)arg1 label:(id)arg2 ;
+(id)indexSetForOutputNameLabelForModelOutput:(id)arg1 ;
+(id)labelTokenIndexesForOutputName:(id)arg1 label:(id)arg2 modelOutput:(id)arg3 maxMergeDistance:(unsigned long long)arg4 ;
+(id)labelTokenIndexesForOutputName:(id)arg1 label:(id)arg2 modelOutput:(id)arg3 ;
+(NSRange)firstRangeInIndexSet:(id)arg1 ;
+(id)candidatesForLabelsWithPlainTextIndexSets:(id)arg1 inPlainText:(id)arg2 ;
+(id)candidatesForPlainTextIndexSet:(id)arg1 inPlainText:(id)arg2 ;
+(id)allDayDateComponentsFromDate:(id)arg1 ;
+(id)dateComponentsFromDate:(id)arg1 ;
+(id)mergeDetectedDateComponents:(id)arg1 ;
+(id)mergeComponent:(unsigned long long)arg1 usingBaseDateComponents:(id)arg2 withDateComponents:(id)arg3 ;
-(id)labelTokenIndexesForOutputName:(id)arg1 label:(id)arg2 ;
-(id)initWithEnrichedTaggedCharacterRanges:(id)arg1 modelOutput:(id)arg2 ;
-(id)candidatesForLabelTokenIndexes:(id)arg1 inPlainText:(id)arg2 ;
-(id)detectedDateComponentsForTokenIndexes:(id)arg1 dataDetectorMatches:(id)arg2 allowDatesInPast:(BOOL)arg3 inferDates:(BOOL)arg4 approximateTime:(BOOL)arg5 partialDate:(BOOL)arg6 allowTimeOffset:(BOOL)arg7 useEndForDurations:(BOOL)arg8 ;
-(id)dataDetectorMatchesForTokenIndexes:(id)arg1 dataDetectorMatches:(id)arg2 allowDatesInPast:(BOOL)arg3 allowTimeOffset:(BOOL)arg4 ;
-(NSRange)textRangeForTokenRange:(NSRange)arg1 ;
-(id)detectedDateComponentsForTokenIndexes:(id)arg1 dataDetectorMatches:(id)arg2 allowDatesInPast:(BOOL)arg3 inferDates:(BOOL)arg4 approximateTime:(BOOL)arg5 partialDate:(BOOL)arg6 useEndForDurations:(BOOL)arg7 ;
-(NSArray *)enrichedTaggedCharacterRanges;
-(void)setEnrichedTaggedCharacterRanges:(NSArray *)arg1 ;
-(NSDictionary *)modelOutput;
-(void)setModelOutput:(NSDictionary *)arg1 ;
-(NSDictionary *)indexSetForOutputNameLabel;
-(void)setIndexSetForOutputNameLabel:(NSDictionary *)arg1 ;
@end

