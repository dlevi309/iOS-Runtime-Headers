/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <libobjc.A.dylib/DESRecipeEvaluation.h>

@protocol _DKKnowledgeQuerying;
@class NSString;

@interface PSDESPlugin : NSObject <DESRecipeEvaluation> {

	id<_DKKnowledgeQuerying> _knowledgeStore;

}

@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(BOOL)shouldDownloadAttachmentWithURL:(id)arg1 recipe:(id)arg2 recordInfo:(id)arg3 ;
-(void)performEvaluation:(id)arg1 ;
@end

