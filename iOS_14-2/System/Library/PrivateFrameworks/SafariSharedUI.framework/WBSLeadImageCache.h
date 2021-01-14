/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;              //@synthesize providerDelegate=_providerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL providesFavicons; 
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(void)emptyCaches;
-(id)imageForURL:(id)arg1 ;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2 ;
-(void)purgeUnneededCacheEntries;
-(BOOL)canHandleRequest:(id)arg1 ;
-(id)initWithImageDirectoryURL:(id)arg1 ;
-(void)_addRequest:(id)arg1 ;
-(void)stopWatchingUpdatesForRequest:(id)arg1 ;
-(void)siteMetadataImageCacheDidEmptyCache:(id)arg1 ;
-(NSURL *)imageDirectoryURL;
-(void)saveImage:(id)arg1 forURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3 ;
-(void)setProviderDelegate:(id<WBSSiteMetadataProviderDelegate>)arg1 ;
-(void)savePendingChangesBeforeTermination;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2 ;
@end

