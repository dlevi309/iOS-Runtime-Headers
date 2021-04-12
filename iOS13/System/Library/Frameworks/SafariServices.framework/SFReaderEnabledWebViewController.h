/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SFWebViewController.h>
#import <libobjc.A.dylib/_SFReaderControllerDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>

@class _SFReaderController, NSString;

@interface SFReaderEnabledWebViewController : SFWebViewController <_SFReaderControllerDelegate, WKNavigationDelegatePrivate> {

	_SFReaderController* _readerController;

}

@property (nonatomic,readonly) _SFReaderController * readerController;                                  //@synthesize readerController=_readerController - In the implementation block
@property (assign,nonatomic,__weak) id<SFReaderEnabledWebViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2 ;
-(_SFReaderController *)readerController;
-(void)createReaderWebViewForReaderController:(id)arg1 ;
-(void)readerController:(id)arg1 didDetermineReaderAvailability:(BOOL)arg2 dueTo:(long long)arg3 ;
-(void)readerController:(id)arg1 contentDidBecomeReadyWithDetectedLanguage:(id)arg2 ;
-(void)readerController:(id)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg2 ;
-(void)readerController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2 ;
-(void)setUpReaderWithReaderWebView:(id)arg1 ;
-(void)_updateDarkModeEnabled;
@end

