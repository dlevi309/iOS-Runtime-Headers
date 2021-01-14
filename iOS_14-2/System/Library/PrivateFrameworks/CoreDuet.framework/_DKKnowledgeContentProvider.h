/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKContentProvider.h>

@protocol _DKKnowledgeQuerying;
@class NSString;

@interface _DKKnowledgeContentProvider : NSObject <_DKContentProvider> {

	id<_DKKnowledgeQuerying> _knowledgeStore;

}

@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 queue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithKnowledgeStore:(id)arg1 ;
@end

