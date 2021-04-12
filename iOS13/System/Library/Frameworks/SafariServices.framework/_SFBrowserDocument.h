/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

@class _SFWebView, _SFReloadOptionsController, NSURL;


@protocol _SFBrowserDocument <NSObject>
@property (nonatomic,readonly) _SFWebView * webView; 
@property (nonatomic,readonly) _SFWebView * activeWebView; 
@property (nonatomic,readonly) _SFReloadOptionsController * reloadOptionsController; 
@property (nonatomic,readonly) id<SFReaderContext> readerContext; 
@property (nonatomic,readonly) NSURL * URLForPerSitePreferences; 
@property (nonatomic,readonly) BOOL wasLoadedWithContentBlockersEnabled; 
@property (nonatomic,readonly) BOOL canHideToolbar; 
@required
-(_SFWebView *)webView;
-(id<SFReaderContext>)readerContext;
-(_SFReloadOptionsController *)reloadOptionsController;
-(BOOL)canHideToolbar;
-(BOOL)wasLoadedWithContentBlockersEnabled;
-(void)reloadEnablingContentBlockers:(BOOL)arg1;
-(void)perSiteSettingsUIPresentSettings;
-(NSURL *)URLForPerSitePreferences;
-(_SFWebView *)activeWebView;

@end

