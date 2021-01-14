/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class FCCurrentAudioContent;

@interface FCCurrentAudioContentFetchOperation : FCOperation {

	/*^block*/id _fetchCompletionHandler;
	id<FCContentContext> _context;
	FCCurrentAudioContent* _resultCurrentContent;

}

@property (nonatomic,readonly) id<FCContentContext> context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) FCCurrentAudioContent * resultCurrentContent;              //@synthesize resultCurrentContent=_resultCurrentContent - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                                 //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(FCCurrentAudioContent *)resultCurrentContent;
-(id<FCContentContext>)context;
-(id)_promiseContentWithConfiguration:(id)arg1 ;
-(id)fetchCompletionHandler;
-(id)_promisePlaceholderContentWithConfiguration:(id)arg1 ;
-(void)setResultCurrentContent:(FCCurrentAudioContent *)arg1 ;
-(id)_promiseConfiguration;
-(void)setFetchCompletionHandler:(id)arg1 ;
@end

