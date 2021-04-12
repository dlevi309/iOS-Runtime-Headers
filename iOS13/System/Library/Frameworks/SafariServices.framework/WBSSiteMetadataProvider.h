/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol WBSSiteMetadataProvider <NSObject>
@property (assign,nonatomic,__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate; 
@property (nonatomic,readonly) BOOL providesFavicons; 
@optional
-(void)stopWatchingUpdatesForRequest:(id)arg1;
-(void)savePendingChangesBeforeTermination;
-(void)emptyCaches;
-(void)purgeUnneededCacheEntries;
-(BOOL)providesFavicons;

@required
-(BOOL)canHandleRequest:(id)arg1;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(void)setProviderDelegate:(id)arg1;

@end

