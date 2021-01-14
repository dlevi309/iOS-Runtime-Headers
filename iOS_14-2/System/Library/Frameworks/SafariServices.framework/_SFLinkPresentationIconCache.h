/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/WBSSiteMetadataProvider.h>

@protocol WBSSiteMetadataProviderDelegate;
@class WBSSiteMetadataImageCache, NSString;

@interface _SFLinkPresentationIconCache : NSObject <WBSSiteMetadataProvider> {

	WBSSiteMetadataImageCache* _imageCache;
	id<WBSSiteMetadataProviderDelegate> _providerDelegate;

}

@property (__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;              //@synthesize providerDelegate=_providerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL providesFavicons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageForHost:(id)arg1 ;
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(void)emptyCaches;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2 ;
-(void)purgeUnneededCacheEntries;
-(BOOL)canHandleRequest:(id)arg1 ;
-(id)initWithImageDirectoryURL:(id)arg1 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)saveImage:(id)arg1 forHost:(id)arg2 ;
-(void)setProviderDelegate:(id<WBSSiteMetadataProviderDelegate>)arg1 ;
-(void)savePendingChangesBeforeTermination;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2 ;
-(void)dealloc;
@end

