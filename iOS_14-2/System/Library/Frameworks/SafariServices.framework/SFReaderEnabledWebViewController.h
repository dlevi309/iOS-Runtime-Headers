/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SFWebViewController.h>
#import <libobjc.A.dylib/_SFAppBannerMetaTagContentObserver.h>
#import <libobjc.A.dylib/_SFReaderControllerDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>

@class _WKRemoteObjectInterface, _SFReaderController, NSString;

@interface SFReaderEnabledWebViewController : SFWebViewController <_SFAppBannerMetaTagContentObserver, _SFReaderControllerDelegate, WKNavigationDelegatePrivate> {

	_WKRemoteObjectInterface* _appBannerMetaTagContentObserverInterface;
	_SFReaderController* _readerController;

}

@property (nonatomic,readonly) _SFReaderController * readerController;                                  //@synthesize readerController=_readerController - In the implementation block
@property (assign,nonatomic,__weak) id<SFReaderEnabledWebViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_SFReaderController *)readerController;
-(void)_updateDarkModeEnabled;
-(void)didFindAppBannerWithContent:(id)arg1 ;
-(void)invalidate;
-(void)loadView;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)createReaderWebViewForReaderController:(id)arg1 ;
-(void)readerController:(id)arg1 didDetermineReaderAvailability:(id)arg2 dueTo:(long long)arg3 ;
-(void)setUpReaderWithReaderWebView:(id)arg1 ;
-(void)readerController:(id)arg1 contentDidBecomeReadyWithDetectedLanguage:(id)arg2 ;
-(void)readerController:(id)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg2 ;
-(void)readerController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2 ;
-(void)dealloc;
@end

