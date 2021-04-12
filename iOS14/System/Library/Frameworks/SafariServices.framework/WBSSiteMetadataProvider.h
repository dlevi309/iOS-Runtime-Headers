/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol WBSSiteMetadataProvider <NSObject>
@property (__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate; 
@property (nonatomic,readonly) BOOL providesFavicons; 
@optional
-(BOOL)providesFavicons;
-(void)emptyCaches;
-(void)purgeUnneededCacheEntries;
-(void)stopWatchingUpdatesForRequest:(id)arg1;
-(void)savePendingChangesBeforeTermination;

@required
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2;
-(BOOL)canHandleRequest:(id)arg1;
-(void)setProviderDelegate:(id)arg1;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;

@end

