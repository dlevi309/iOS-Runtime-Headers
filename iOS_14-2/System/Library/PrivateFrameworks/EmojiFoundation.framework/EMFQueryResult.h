/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/


#import <EmojiFoundation/EmojiFoundation-Structs.h>
@class NSArray, EMFQueryResultOverride, EMFQuery, NSDictionary;

@interface EMFQueryResult : NSObject {

	NSArray* _matches;
	EMFQueryResultOverride* _resultOverride;
	EMFQuery* _query;
	NSDictionary* _matchingDocumentWeights;

}

@property (nonatomic,readonly) EMFQuery * query;                                          //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSArray * matches;                                         //@synthesize matches=_matches - In the implementation block
@property (nonatomic,readonly) NSDictionary * matchingDocumentWeights;                    //@synthesize matchingDocumentWeights=_matchingDocumentWeights - In the implementation block
@property (nonatomic,copy,readonly) EMFQueryResultOverride * resultOverride;              //@synthesize resultOverride=_resultOverride - In the implementation block
+(id)_emojiStringForDocumentID:(id)arg1 usingLocaleData:(EmojiLocaleDataWrapperRef)arg2 ;
-(EMFQuery *)query;
-(id)description;
-(NSArray *)matches;
-(id)emojiMatchesAndDocumentWeightsUsingEmojiLocaleData:(EmojiLocaleDataWrapperRef)arg1 ;
-(EMFQueryResultOverride *)resultOverride;
-(id)emojiMatchesForOverriddenResultsUsingEmojiLocaleData:(EmojiLocaleDataWrapperRef)arg1 ;
-(id)initWithQuery:(id)arg1 matchingDocumentWeights:(id)arg2 resultOverride:(id)arg3 ;
-(BOOL)_matchingDocumentWeightsContainsOnlyBlackLivesMatterResults;
-(id)_handleOverrideResultInterpolationForStandardResults:(id)arg1 ;
-(id)_interpolateOverriddenResultsByPrepending:(id)arg1 ;
-(id)_interpolateOverriddenResultsByAppending:(id)arg1 ;
-(id)_interpolateOverriddenResultsByAppendingAndMoving:(id)arg1 ;
-(id)_interpolateOverriddenResultsByFiltering:(id)arg1 ;
-(id)_interpolateOverriddenResultsByOverwriting;
-(id)initWithQuery:(id)arg1 andMatchingDocumentWeights:(id)arg2 ;
-(id)emojiMatchesUsingEmojiLocaleData:(const EmojiLocaleDataWrapperRef)arg1 ;
-(NSDictionary *)matchingDocumentWeights;
@end

