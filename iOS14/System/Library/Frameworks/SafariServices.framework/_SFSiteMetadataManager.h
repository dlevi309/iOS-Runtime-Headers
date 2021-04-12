/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithInjectedBundleURL:(id)arg1 imageCacheDirectoryURL:(id)arg2 cacheIsReadOnly:(BOOL)arg3 metadataType:(unsigned long long)arg4 ;
-(_SFLinkPresentationIconCache *)linkPresentationIconCache;
-(WBSLeadImageCache *)leadImageCache;
-(void)scheduleLowPriorityRequestForBookmarks:(id)arg1 ;
-(_SFPasswordTouchIconCache *)passwordTouchIconCache;
-(_SFTouchIconCache *)touchIconCache;
-(_SFFaviconProvider *)faviconProvider;
@end

