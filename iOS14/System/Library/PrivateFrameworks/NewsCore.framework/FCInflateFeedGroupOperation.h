/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, FCFeedDescriptor, FCDeflatedFeedGroup, FCFeedGroup;

@interface FCInflateFeedGroupOperation : FCOperation {

	BOOL _cachedOnly;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCFeedDescriptor* _feedDescriptor;
	FCDeflatedFeedGroup* _deflatedGroup;
	/*^block*/id _inflationCompletionHandler;
	FCFeedGroup* _inflatedGroup;

}

@property (nonatomic,retain) FCFeedGroup * inflatedGroup;                      //@synthesize inflatedGroup=_inflatedGroup - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;                //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,retain) FCDeflatedFeedGroup * deflatedGroup;              //@synthesize deflatedGroup=_deflatedGroup - In the implementation block
@property (assign,nonatomic) BOOL cachedOnly;                                  //@synthesize cachedOnly=_cachedOnly - In the implementation block
@property (nonatomic,copy) id inflationCompletionHandler;                      //@synthesize inflationCompletionHandler=_inflationCompletionHandler - In the implementation block
-(FCFeedDescriptor *)feedDescriptor;
-(BOOL)validateOperation;
-(void)setCachedOnly:(BOOL)arg1 ;
-(BOOL)cachedOnly;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)_fetchHeadlinesWithDeflatedHeadlines:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(FCDeflatedFeedGroup *)deflatedGroup;
-(void)_fetchTagsForPBGroup:(id)arg1 sharedStrings:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setInflationCompletionHandler:(id)arg1 ;
-(FCCloudContext *)context;
-(FCFeedGroup *)inflatedGroup;
-(void)_fetchHeadlinesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(id)inflationCompletionHandler;
-(void)setInflatedGroup:(FCFeedGroup *)arg1 ;
-(void)setDeflatedGroup:(FCDeflatedFeedGroup *)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
@end
