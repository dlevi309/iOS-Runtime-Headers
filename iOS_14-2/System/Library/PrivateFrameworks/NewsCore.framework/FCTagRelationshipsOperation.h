/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, FCTagProviding;
@class FCTagRelationships;

@interface FCTagRelationshipsOperation : FCOperation {

	/*^block*/id _completionHandler;
	id<FCContentContext> _context;
	id<FCTagProviding> _tag;
	FCTagRelationships* _resultTagRelationships;

}

@property (nonatomic,copy,readonly) id<FCContentContext> context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) id<FCTagProviding> tag;                            //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) FCTagRelationships * resultTagRelationships;              //@synthesize resultTagRelationships=_resultTagRelationships - In the implementation block
@property (nonatomic,copy) id completionHandler;                                       //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setResultTagRelationships:(FCTagRelationships *)arg1 ;
-(FCTagRelationships *)resultTagRelationships;
-(id)initWithContext:(id)arg1 tag:(id)arg2 ;
-(id<FCTagProviding>)tag;
-(id)completionHandler;
-(id<FCContentContext>)context;
@end

