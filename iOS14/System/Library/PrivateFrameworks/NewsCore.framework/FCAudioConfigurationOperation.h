/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSString;

@interface FCAudioConfigurationOperation : FCOperation {

	/*^block*/id _fetchCompletionHandler;
	id<FCContentContext> _context;
	NSString* _resultConfigString;

}

@property (nonatomic,readonly) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * resultConfigString;               //@synthesize resultConfigString=_resultConfigString - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                     //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(id)_promiseConfiguration:(id)arg1 ;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(id<FCContentContext>)context;
-(NSString *)resultConfigString;
-(id)fetchCompletionHandler;
-(id)_promiseConfiguration;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(void)setResultConfigString:(NSString *)arg1 ;
@end

