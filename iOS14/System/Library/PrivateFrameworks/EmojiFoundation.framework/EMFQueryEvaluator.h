/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/


@class EMFInvertedIndex, EMFQueryResultOverrideList;

@interface EMFQueryEvaluator : NSObject {

	EMFInvertedIndex* _index;
	EMFQueryResultOverrideList* _overrideList;

}

@property (nonatomic,readonly) EMFInvertedIndex * index;                             //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) EMFQueryResultOverrideList * overrideList;              //@synthesize overrideList=_overrideList - In the implementation block
-(EMFInvertedIndex *)index;
-(id)initWithIndex:(id)arg1 ;
-(id)performQuery:(id)arg1 ;
-(id)initWithIndex:(id)arg1 andOverrideList:(id)arg2 ;
-(id)_overriddenResultsForQuery:(id)arg1 ;
-(EMFQueryResultOverrideList *)overrideList;
-(void)setOverrideList:(EMFQueryResultOverrideList *)arg1 ;
@end

