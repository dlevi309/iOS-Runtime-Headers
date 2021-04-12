/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICSearchResultRanker : NSObject
+(unsigned long long)bucketOfTimeInterval:(double)arg1 ;
+(id)initializeScoreArrayOfLength:(unsigned long long)arg1 setAllZeros:(BOOL)arg2 ;
+(id)rankingRulesByMatchedField;
+(BOOL)bitAtPosition:(long long)arg1 isTrueInValue:(unsigned long long)arg2 ;
+(/*^block*/id)titleOfNoteOrAttachmentMatchingRule;
+(/*^block*/id)participantNameOrEmailMatchingRule;
+(/*^block*/id)bodyOfNoteOrAttachmentMatchingRule;
+(id)modificationDateBucketForSearchableItems:(id)arg1 ;
+(id)relevanceBitFieldForSearchableItems:(id)arg1 ;
+(id)rankingScoresForSearchableItems:(id)arg1 withRankingQueryBitDictionary:(id)arg2 matchedFields:(id*)arg3 isPrefixMatch:(id*)arg4 ;
@end

