/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
*/


@class QLExtensionManagerCache;

@interface QLExtensionManager : NSObject {

	QLExtensionManagerCache* _thumbnailExtensionCache;
	QLExtensionManagerCache* _previewExtensionCache;
	QLExtensionManagerCache* _previewHighMemoryExtensionCache;
	QLExtensionManagerCache* _thumbnailHighMemoryExtensionCache;

}

@property (nonatomic,retain) QLExtensionManagerCache * thumbnailExtensionCache;                        //@synthesize thumbnailExtensionCache=_thumbnailExtensionCache - In the implementation block
@property (nonatomic,retain) QLExtensionManagerCache * previewExtensionCache;                          //@synthesize previewExtensionCache=_previewExtensionCache - In the implementation block
@property (nonatomic,retain) QLExtensionManagerCache * previewHighMemoryExtensionCache;                //@synthesize previewHighMemoryExtensionCache=_previewHighMemoryExtensionCache - In the implementation block
@property (nonatomic,retain) QLExtensionManagerCache * thumbnailHighMemoryExtensionCache;              //@synthesize thumbnailHighMemoryExtensionCache=_thumbnailHighMemoryExtensionCache - In the implementation block
+(id)extensionForItem:(id)arg1 ;
+(BOOL)ql_isPreviewExtensionThatHaveCustomPresentationViewForItem:(id)arg1 ;
+(id)ql_previewExtensionCustomLoadingTimeForItem:(id)arg1 ;
+(id)ql_applicationBundleIdentifierOfExtensionForItem:(id)arg1 ;
+(id)sharedManager;
+(void)_setSharedManager:(id)arg1 ;
+(void)_resetSharedManager;
+(BOOL)extension:(id)arg1 supportsExactType:(id)arg2 ;
-(void)remoteViewControllerForContentType:(id)arg1 applicationBundleIdentifier:(id)arg2 extensionType:(unsigned long long)arg3 generatonType:(unsigned long long)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(id)extensionForContentType:(id)arg1 allowExtensionsForParentTypes:(BOOL)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6 ;
-(BOOL)existsExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(BOOL)arg2 firstPartyExtension:(BOOL)arg3 applicationBundleIdentifier:(id)arg4 extensionPath:(id)arg5 extensionType:(unsigned long long)arg6 generationType:(unsigned long long)arg7 ;
-(BOOL)existsExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(BOOL)arg2 applicationBundleIdentifier:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5 ;
-(id)qlExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(BOOL)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6 ;
-(void)_setupCache;
-(QLExtensionManagerCache *)previewExtensionCache;
-(QLExtensionManagerCache *)previewHighMemoryExtensionCache;
-(QLExtensionManagerCache *)thumbnailExtensionCache;
-(QLExtensionManagerCache *)thumbnailHighMemoryExtensionCache;
-(id)extensionForContentType:(id)arg1 allowExtensionsForParentTypes:(BOOL)arg2 firstPartyExtension:(BOOL)arg3 applicationBundleIdentifier:(id)arg4 extensionPath:(id)arg5 extensionType:(unsigned long long)arg6 generationType:(unsigned long long)arg7 ;
-(BOOL)existsExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(BOOL)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6 ;
-(void)extensionContextForContentType:(id)arg1 allowExtensionsForParentTypes:(BOOL)arg2 firstPartyExtension:(BOOL)arg3 appBundleIdentifier:(id)arg4 extensionPath:(id)arg5 extensionType:(unsigned long long)arg6 generationType:(unsigned long long)arg7 withCompletionHandler:(/*^block*/id)arg8 ;
-(void)_addQueryAttributesToExtensionQuery:(id)arg1 withContentType:(id)arg2 appBundleIdentifier:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5 ;
-(id)_cachesForExtensionType:(unsigned long long)arg1 ;
-(id)qlExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(BOOL)arg2 firstPartyExtension:(BOOL)arg3 applicationBundleIdentifier:(id)arg4 extensionPath:(id)arg5 extensionType:(unsigned long long)arg6 generationType:(unsigned long long)arg7 ;
-(id)_applicationPathForBundleId:(id)arg1 ;
-(void)extensionContextForContentType:(id)arg1 allowExtensionsForParentTypes:(BOOL)arg2 appBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6 withCompletionHandler:(/*^block*/id)arg7 ;
-(id)_extensionPointNameForExtensionType:(unsigned long long)arg1 ;
-(void)setThumbnailExtensionCache:(QLExtensionManagerCache *)arg1 ;
-(void)setPreviewExtensionCache:(QLExtensionManagerCache *)arg1 ;
-(void)setPreviewHighMemoryExtensionCache:(QLExtensionManagerCache *)arg1 ;
-(void)setThumbnailHighMemoryExtensionCache:(QLExtensionManagerCache *)arg1 ;
@end
