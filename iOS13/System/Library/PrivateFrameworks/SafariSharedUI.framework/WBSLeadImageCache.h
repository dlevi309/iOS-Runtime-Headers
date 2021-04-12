/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSSiteMetadataImageCacheDelegate.h>
#import <libobjc.A.dylib/WBSSiteMetadataProvider.h>

@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;
@class WBSSiteMetadataImageCache, NSObject, NSMutableDictionary, NSURL, NSString;

@interface WBSLeadImageCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider> {

	WBSSiteMetadataImageCache* _imageCache;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableDictionary* _urlStringToRequestSets;
	id<WBSSiteMetadataProviderDelegate> _providerDelegate;

}

@property (nonatomic,readonly) NSURL * imageDirectoryURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;              //@synthesize providerDelegate=_providerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL providesFavicons; 
-(BOOL)canHandleRequest:(id)arg1 ;
-(id)imageForURL:(id)arg1 ;
-(void)stopWatchingUpdatesForRequest:(id)arg1 ;
-(void)savePendingChangesBeforeTermination;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2 ;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2 ;
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(void)setProviderDelegate:(id<WBSSiteMetadataProviderDelegate>)arg1 ;
-(void)emptyCaches;
-(void)purgeUnneededCacheEntries;
-(id)initWithImageDirectoryURL:(id)arg1 ;
-(void)_addRequest:(id)arg1 ;
-(NSURL *)imageDirectoryURL;
-(void)saveImage:(id)arg1 forURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3 ;
-(void)siteMetadataImageCacheDidEmptyCache:(id)arg1 ;
@end

