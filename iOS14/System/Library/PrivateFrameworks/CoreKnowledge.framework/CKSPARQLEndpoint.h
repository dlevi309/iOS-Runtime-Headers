/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
*/


@class CKKnowledgeStore;

@interface CKSPARQLEndpoint : NSObject {

	CKKnowledgeStore* _knowledgeStore;

}
-(id)sparqlResultsForQuery:(id)arg1 error:(id*)arg2 ;
-(void)importTriplesFromFileAtPath:(id)arg1 ;
-(id)initWithKnowledgeStore:(id)arg1 ;
@end

