/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

@class _SFWebView, _SFReloadOptionsController, NSURL, WBSTranslationContext, SFBrowserDocumentTrackerInfo;


@protocol _SFBrowserDocument <NSObject>
@property (nonatomic,readonly) _SFWebView * webView; 
@property (nonatomic,readonly) _SFWebView * activeWebView; 
@property (nonatomic,readonly) _SFReloadOptionsController * reloadOptionsController; 
@property (nonatomic,readonly) id<SFReaderContext> readerContext; 
@property (nonatomic,readonly) NSURL * URLForPerSitePreferences; 
@property (nonatomic,readonly) BOOL wasLoadedWithContentBlockersEnabled; 
@property (nonatomic,readonly) BOOL canHideToolbar; 
@property (nonatomic,readonly) WBSTranslationContext * translationContext; 
@property (nonatomic,readonly) SFBrowserDocumentTrackerInfo * trackerInfo; 
@optional
-(SFBrowserDocumentTrackerInfo *)trackerInfo;

@required
-(_SFWebView *)webView;
-(id<SFReaderContext>)readerContext;
-(_SFReloadOptionsController *)reloadOptionsController;
-(_SFWebView *)activeWebView;
-(WBSTranslationContext *)translationContext;
-(BOOL)canHideToolbar;
-(BOOL)wasLoadedWithContentBlockersEnabled;
-(void)reloadEnablingContentBlockers:(BOOL)arg1;
-(void)perSiteSettingsUIPresentSettings;
-(NSURL *)URLForPerSitePreferences;

@end

