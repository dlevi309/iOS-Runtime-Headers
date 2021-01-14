/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGExtractionDocument.h>

@class NSString, NSArray;

@interface SGStructuredEventDocument : SGExtractionDocument {

	BOOL _fromSuggestTool;
	unsigned char _category;
	NSString* _plainText;
	NSArray* _dataDetectorMatches;

}

@property (nonatomic,readonly) NSString * plainText;                       //@synthesize plainText=_plainText - In the implementation block
@property (nonatomic,readonly) unsigned char category;                     //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSArray * dataDetectorMatches;              //@synthesize dataDetectorMatches=_dataDetectorMatches - In the implementation block
+(id)candidatesForLabelIndexSets:(id)arg1 inPlainText:(id)arg2 forTaggedCharacterRanges:(id)arg3 ;
+(id)modelOutputSummary:(id)arg1 ;
+(id)simpleCandidateResolutionFromCandidates:(id)arg1 ;
+(id)cleanCandidates:(id)arg1 ;
+(BOOL)caseInsensitiveContainsString:(id)arg1 inCandidates:(id)arg2 ;
+(id)stripRepeatedContent:(id)arg1 ;
-(unsigned char)category;
-(id)resolveCandidates:(id)arg1 forCategory:(unsigned char)arg2 label:(id)arg3 rawIndexSet:(id)arg4 taggedCharacterRanges:(id)arg5 ;
-(id)initWithPlainText:(id)arg1 category:(unsigned char)arg2 dataDetectorMatches:(id)arg3 enrichedTaggedCharacterRanges:(id)arg4 modelOutput:(id)arg5 fromSuggestTool:(BOOL)arg6 ;
-(id)detectedEventName;
-(id)detectedReservationIdWithError:(id*)arg1 ;
-(id)detectedStartDateComponents;
-(id)detectedEndDateComponents;
-(id)filterCandidateDateComponents:(id)arg1 ;
-(id)detectedStartAddressWithError:(id*)arg1 ;
-(id)detectedEndAddressWithError:(id*)arg1 ;
-(id)detectedAddressForLabel:(id)arg1 withError:(id*)arg2 ;
-(id)detectedStartPlaceWithError:(id*)arg1 ;
-(id)detectedEndPlaceWithError:(id*)arg1 ;
-(id)_simpleCandidateForOutputName:(id)arg1 label:(id)arg2 withError:(id*)arg3 ;
-(id)mergePostalAddressComponents:(id)arg1 ;
-(id)detectedPostalAddressExtractionForTokenIndexes:(id)arg1 dataDetectorMatches:(id)arg2 label:(id)arg3 ;
-(id)titleMapping;
-(id)modelOutputSummary;
-(id)predictedStringsFromModelOutput;
-(id)labelTokenIndexesForOutputName:(id)arg1 label:(id)arg2 ;
-(NSString *)plainText;
-(NSArray *)dataDetectorMatches;
@end

