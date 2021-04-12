/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCChannelProviding;
@class FCCloudContext, FCTopStoriesOperationResult, FCForYouConfig, NSError;

@interface FCTopStoriesOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	id<FCChannelProviding> _topStoriesChannel;
	FCTopStoriesOperationResult* _topStoriesResult;
	FCForYouConfig* _forYouConfig;
	NSError* _error;
	/*^block*/id _catchUpCompletionHandler;

}

@property (copy) id<FCChannelProviding> topStoriesChannel;                      //@synthesize topStoriesChannel=_topStoriesChannel - In the implementation block
@property (retain) FCTopStoriesOperationResult * topStoriesResult;              //@synthesize topStoriesResult=_topStoriesResult - In the implementation block
@property (retain) FCForYouConfig * forYouConfig;                               //@synthesize forYouConfig=_forYouConfig - In the implementation block
@property (retain) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                          //@synthesize context=_context - In the implementation block
@property (copy) id catchUpCompletionHandler;                                   //@synthesize catchUpCompletionHandler=_catchUpCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(id)catchUpCompletionHandler;
-(FCCloudContext *)context;
-(void)setError:(NSError *)arg1 ;
-(void)_checkShouldShowTopStoriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(FCForYouConfig *)forYouConfig;
-(NSError *)error;
-(id<FCChannelProviding>)topStoriesChannel;
-(id<FCCoreConfiguration>)configuration;
-(void)setForYouConfig:(FCForYouConfig *)arg1 ;
-(FCTopStoriesOperationResult *)topStoriesResult;
-(void)setTopStoriesResult:(FCTopStoriesOperationResult *)arg1 ;
-(void)setCatchUpCompletionHandler:(id)arg1 ;
-(void)setTopStoriesChannel:(id<FCChannelProviding>)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
@end

