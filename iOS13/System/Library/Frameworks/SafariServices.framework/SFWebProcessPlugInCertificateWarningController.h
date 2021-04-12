/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/WBSCertificateWarningPagePresenter.h>

@protocol WBSCertificateWarningPageHandler;
@class _SFWebProcessPlugInPageController, _WKRemoteObjectInterface, WBSCertificateWarningPageContext, NSString;

@interface SFWebProcessPlugInCertificateWarningController : NSObject <WBSCertificateWarningPagePresenter> {

	_SFWebProcessPlugInPageController* _pageController;
	_WKRemoteObjectInterface* _certificateWarningPagePresenterInterface;
	WBSCertificateWarningPageContext* _warningPageContext;
	id<WBSCertificateWarningPageHandler> _certificateWarningPageHandlerProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)visitInsecureWebsite;
-(void)visitInsecureWebsiteWithTemporaryBypass;
-(void)showCertificateInformation;
-(void)openClockSettings;
-(void)prepareCertificateWarningPage:(id)arg1 ;
-(id)initWithPageController:(id)arg1 ;
-(void)injectCertificateWarningBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2 ;
-(void)_setUpCertificateWarningPagePresenterInterface;
-(void)_clearCertificateWarningPagePresenterInterface;
-(id)_certificateWarningPageHandlerProxy;
-(void)certificateWarningPageLoaded;
-(void)goBackSelected;
@end

