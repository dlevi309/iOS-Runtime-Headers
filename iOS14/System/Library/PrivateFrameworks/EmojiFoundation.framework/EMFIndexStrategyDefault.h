/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/

#import <EmojiFoundation/EMFAbstractIndexStrategy.h>

@interface EMFIndexStrategyDefault : EMFAbstractIndexStrategy
-(id)termsForDocument:(id)arg1 ;
-(id)postingsForTerm:(id)arg1 ;
-(id)commonDocumentsForTerms:(id)arg1 ;
-(double)_calculateCumulativeTermWeightForQueryTokenCounts:(id)arg1 inDocumentID:(id)arg2 ;
-(id)termWeightForTerm:(id)arg1 inDocument:(id)arg2 ;
-(id)calculateDocumentWeightsForQueryTokenCounts:(id)arg1 ;
@end

