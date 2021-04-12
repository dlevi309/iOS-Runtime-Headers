/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCFeedElement;
@class FCCloudContext, FCFeedViewport, FCFeedDescriptor, FCFeedViewportBookmark, FCFeedViewportDiff;

@interface FCFeedViewportExpandGapOperation : FCOperation {

	BOOL _lightweightOnly;
	BOOL _cachedOnly;
	BOOL _offlineMode;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCFeedViewport* _viewport;
	FCFeedDescriptor* _feedDescriptor;
	id<FCFeedElement> _gapElement;
	unsigned long long _desiredHeadlineCount;
	FCFeedViewportBookmark* _bookmark;
	unsigned long long _gapExpansionDirection;
	long long _gapExpansionPolicy;
	/*^block*/id _expandGapCompletionHandler;
	FCFeedViewport* _sanitizedViewport;
	FCFeedViewport* _resultViewport;
	FCFeedViewportDiff* _resultDiff;

}

@property (nonatomic,retain) FCFeedViewport * sanitizedViewport;                    //@synthesize sanitizedViewport=_sanitizedViewport - In the implementation block
@property (nonatomic,retain) FCFeedViewport * resultViewport;                       //@synthesize resultViewport=_resultViewport - In the implementation block
@property (nonatomic,retain) FCFeedViewportDiff * resultDiff;                       //@synthesize resultDiff=_resultDiff - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCFeedViewport * viewport;                             //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;                     //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,copy) id<FCFeedElement> gapElement;                            //@synthesize gapElement=_gapElement - In the implementation block
@property (assign,nonatomic) unsigned long long desiredHeadlineCount;               //@synthesize desiredHeadlineCount=_desiredHeadlineCount - In the implementation block
@property (nonatomic,copy) FCFeedViewportBookmark * bookmark;                       //@synthesize bookmark=_bookmark - In the implementation block
@property (assign,nonatomic) unsigned long long gapExpansionDirection;              //@synthesize gapExpansionDirection=_gapExpansionDirection - In the implementation block
@property (assign,nonatomic) long long gapExpansionPolicy;                          //@synthesize gapExpansionPolicy=_gapExpansionPolicy - In the implementation block
@property (assign) BOOL lightweightOnly;                                            //@synthesize lightweightOnly=_lightweightOnly - In the implementation block
@property (assign,nonatomic) BOOL cachedOnly;                                       //@synthesize cachedOnly=_cachedOnly - In the implementation block
@property (assign) BOOL offlineMode;                                                //@synthesize offlineMode=_offlineMode - In the implementation block
@property (nonatomic,copy) id expandGapCompletionHandler;                           //@synthesize expandGapCompletionHandler=_expandGapCompletionHandler - In the implementation block
+(id)_sanitizeViewport:(id)arg1 context:(id)arg2 feedDescriptor:(id)arg3 configuration:(id)arg4 ;
-(FCFeedDescriptor *)feedDescriptor;
-(BOOL)validateOperation;
-(void)setGapExpansionPolicy:(long long)arg1 ;
-(void)setCachedOnly:(BOOL)arg1 ;
-(void)setBookmark:(FCFeedViewportBookmark *)arg1 ;
-(BOOL)cachedOnly;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(void)setGapExpansionDirection:(unsigned long long)arg1 ;
-(FCFeedViewport *)viewport;
-(void)setViewport:(FCFeedViewport *)arg1 ;
-(void)setExpandGapCompletionHandler:(id)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setResultViewport:(FCFeedViewport *)arg1 ;
-(FCFeedViewportBookmark *)bookmark;
-(FCFeedViewportDiff *)resultDiff;
-(long long)gapExpansionPolicy;
-(unsigned long long)gapExpansionDirection;
-(void)performOperation;
-(void)prepareOperation;
-(void)setLightweightOnly:(BOOL)arg1 ;
-(void)setSanitizedViewport:(FCFeedViewport *)arg1 ;
-(id)init;
-(FCFeedViewport *)sanitizedViewport;
-(void)setResultDiff:(FCFeedViewportDiff *)arg1 ;
-(FCCloudContext *)context;
-(id<FCFeedElement>)gapElement;
-(id<FCCoreConfiguration>)configuration;
-(void)setDesiredHeadlineCount:(unsigned long long)arg1 ;
-(BOOL)offlineMode;
-(BOOL)lightweightOnly;
-(void)_fetchAssetsForInsertedGroup:(id)arg1 cachedOnly:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setOfflineMode:(BOOL)arg1 ;
-(unsigned long long)desiredHeadlineCount;
-(void)setGapElement:(id<FCFeedElement>)arg1 ;
-(FCFeedViewport *)resultViewport;
-(id)expandGapCompletionHandler;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
@end

