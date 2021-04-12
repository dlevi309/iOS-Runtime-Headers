/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)visitInsecureWebsiteWithTemporaryBypass;
-(void)showCertificateInformation;
-(void)injectCertificateWarningBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2 ;
-(void)_setUpCertificateWarningPagePresenterInterface;
-(id)initWithPageController:(id)arg1 ;
-(void)openClockSettings;
-(void)certificateWarningPageLoaded;
-(void)prepareCertificateWarningPage:(id)arg1 ;
-(void)_clearCertificateWarningPagePresenterInterface;
-(void)visitInsecureWebsite;
-(id)_certificateWarningPageHandlerProxy;
-(void)goBackSelected;
-(void)dealloc;
@end

