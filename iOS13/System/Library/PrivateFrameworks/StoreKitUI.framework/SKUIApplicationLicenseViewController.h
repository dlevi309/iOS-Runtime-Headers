/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewController.h>

@class SKUIApplicationLicensePage, SSVLoadURLOperation, NSURL, UIWebView;

@interface SKUIApplicationLicenseViewController : SKUIViewController {

	SKUIApplicationLicensePage* _licensePage;
	SSVLoadURLOperation* _loadOperation;
	NSURL* _url;
	UIWebView* _webView;

}
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)reloadData;
-(id)initWithLicenseAgreementURL:(id)arg1 ;
-(void)_displayPage:(id)arg1 error:(id)arg2 ;
-(id)initWithLicenseAgreementPage:(id)arg1 ;
@end

