/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariSharedUI/WBSSiteMetadataManager.h>

@class _SFFaviconProvider, _SFPasswordTouchIconCache, _SFTouchIconCache, WBSLeadImageCache, _SFLinkPresentationIconCache;

@interface _SFSiteMetadataManager : WBSSiteMetadataManager {

	_SFFaviconProvider* _faviconProvider;
	_SFPasswordTouchIconCache* _passwordTouchIconCache;
	_SFTouchIconCache* _touchIconCache;
	WBSLeadImageCache* _leadImageCache;
	_SFLinkPresentationIconCache* _linkPresentationIconCache;

}

@property (nonatomic,readonly) _SFFaviconProvider * faviconProvider;                                  //@synthesize faviconProvider=_faviconProvider - In the implementation block
@property (nonatomic,readonly) _SFPasswordTouchIconCache * passwordTouchIconCache;                    //@synthesize passwordTouchIconCache=_passwordTouchIconCache - In the implementation block
@property (nonatomic,readonly) _SFTouchIconCache * touchIconCache;                                    //@synthesize touchIconCache=_touchIconCache - In the implementation block
@property (nonatomic,readonly) WBSLeadImageCache * leadImageCache;                                    //@synthesize leadImageCache=_leadImageCache - In the implementation block
@property (nonatomic,readonly) _SFLinkPresentationIconCache * linkPresentationIconCache;              //@synthesize linkPresentationIconCache=_linkPresentationIconCache - In the implementation block
+(id)sharedSiteMetadataManager;
+(void)setSharedSiteMetadataManager:(id)arg1 ;
+(void)setSharedSiteMetadataManagerProvider:(id)arg1 ;
-(_SFTouchIconCache *)touchIconCache;
-(_SFLinkPresentationIconCache *)linkPresentationIconCache;
-(id)initWithInjectedBundleURL:(id)arg1 imageCacheDirectoryURL:(id)arg2 cacheIsReadOnly:(BOOL)arg3 metadataType:(unsigned long long)arg4 ;
-(void)scheduleLowPriorityRequestForBookmarks:(id)arg1 ;
-(_SFFaviconProvider *)faviconProvider;
-(_SFPasswordTouchIconCache *)passwordTouchIconCache;
-(WBSLeadImageCache *)leadImageCache;
@end

