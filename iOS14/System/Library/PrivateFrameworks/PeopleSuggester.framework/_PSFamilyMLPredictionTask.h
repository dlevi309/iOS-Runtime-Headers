/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@protocol _DKKnowledgeQuerying_DKKnowledgeSaving;
@class NSString;

@interface _PSFamilyMLPredictionTask : NSObject {

	id<_DKKnowledgeQuerying><_DKKnowledgeSaving> _knowledgeStore;
	NSString* _directory;

}

@property (nonatomic,copy,readonly) NSString * directory;                                              //@synthesize directory=_directory - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying><_DKKnowledgeSaving> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(void)execute;
-(NSString *)directory;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)arg1 ;
-(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)knowledgeStore;
-(id)contactsInContactStore;
-(id)contactKeysToFetch;
-(id)knowledgeEventUsingPredictions:(id)arg1 familyRelations:(id)arg2 ;
@end

