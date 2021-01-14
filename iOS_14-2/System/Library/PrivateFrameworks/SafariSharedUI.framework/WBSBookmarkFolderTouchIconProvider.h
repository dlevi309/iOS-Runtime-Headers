/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSSiteMetadataProvider.h>

@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;
@class NSObject, NSMutableDictionary, NSArray, UIColor, NSString;

@interface WBSBookmarkFolderTouchIconProvider : NSObject <WBSSiteMetadataProvider> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableDictionary* _requestsToRequestInfos;
	NSMutableDictionary* _folderUUIDsToTouchIconInfo;
	id<WBSSiteMetadataProviderDelegate> _providerDelegate;

}

@property (nonatomic,readonly) NSArray * allFolderUUIDs; 
@property (readonly) UIColor * backgroundColor; 
@property (__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;              //@synthesize providerDelegate=_providerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL providesFavicons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_appUsesLeftToRightLayout;
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(id)init;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2 ;
-(id)displayableFolderContentsForRequest:(id)arg1 ;
-(BOOL)canHandleRequest:(id)arg1 ;
-(UIColor *)backgroundColor;
-(NSArray *)allFolderUUIDs;
-(void)stopWatchingUpdatesForRequest:(id)arg1 ;
-(void)removeInfoForFolderWithUUID:(id)arg1 ;
-(void)removeInfoForFoldersWithUUIDs:(id)arg1 ;
-(id)touchIconRequestForBookmark:(id)arg1 inFolderWithRequest:(id)arg2 ;
-(id)bookmarkUUIDForRequest:(id)arg1 ;
-(void)setProviderDelegate:(id<WBSSiteMetadataProviderDelegate>)arg1 ;
-(id)defaultFolderIconForRequest:(id)arg1 ;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2 ;
-(void)_prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2 ;
-(/*^block*/id)_responseHandlerForRequest:(id)arg1 thumbnailIndex:(unsigned long long)arg2 ;
-(void)_coalesceResponseDispatchForRequest:(id)arg1 ;
-(void)_dispatchResponseForRequest:(id)arg1 ;
-(void)_dispatchResponseForRequest:(id)arg1 touchIcon:(id)arg2 ;
-(id)_drawTouchIconForRequest:(id)arg1 ;
-(void)didCreateTouchIcon:(id)arg1 ;
@end

