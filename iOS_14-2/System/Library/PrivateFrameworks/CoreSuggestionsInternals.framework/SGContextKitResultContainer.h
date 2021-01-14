/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSArray;

@interface SGContextKitResultContainer : NSObject {

	NSArray* _topics;
	NSArray* _namedEntities;
	NSArray* _topicsExactMatchesInSourceText;

}

@property (nonatomic,retain) NSArray * topics;                                      //@synthesize topics=_topics - In the implementation block
@property (nonatomic,retain) NSArray * namedEntities;                               //@synthesize namedEntities=_namedEntities - In the implementation block
@property (nonatomic,retain) NSArray * topicsExactMatchesInSourceText;              //@synthesize topicsExactMatchesInSourceText=_topicsExactMatchesInSourceText - In the implementation block
-(void)setNamedEntities:(NSArray *)arg1 ;
-(NSArray *)topics;
-(void)setTopics:(NSArray *)arg1 ;
-(NSArray *)topicsExactMatchesInSourceText;
-(void)setTopicsExactMatchesInSourceText:(NSArray *)arg1 ;
-(NSArray *)namedEntities;
-(id)initWithTopics:(id)arg1 namedEntities:(id)arg2 topicsExactMatchesInSourceText:(id)arg3 ;
@end

