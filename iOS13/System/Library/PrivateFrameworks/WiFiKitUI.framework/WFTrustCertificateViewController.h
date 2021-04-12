/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TrustCertificateViewControllerDelegate.h>
#import <libobjc.A.dylib/WFNetworkView.h>

@protocol WFCertificateProviderContext;
@class TrustCertificateViewController, NSString;

@interface WFTrustCertificateViewController : UIViewController <TrustCertificateViewControllerDelegate, WFNetworkView> {

	BOOL _wantsModalPresentation;
	TrustCertificateViewController* _certViewController;
	id<WFCertificateProviderContext> _credentialsContext;

}

@property (nonatomic,retain) TrustCertificateViewController * certViewController;              //@synthesize certViewController=_certViewController - In the implementation block
@property (nonatomic,retain) id<WFCertificateProviderContext> credentialsContext;              //@synthesize credentialsContext=_credentialsContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsModalPresentation;                                    //@synthesize wantsModalPresentation=_wantsModalPresentation - In the implementation block
-(void)loadView;
-(void)trustCertificateViewController:(id)arg1 finishedWithReturnCode:(int)arg2 ;
-(BOOL)wantsModalPresentation;
-(id<WFCertificateProviderContext>)credentialsContext;
-(void)setCredentialsContext:(id<WFCertificateProviderContext>)arg1 ;
-(id)initWithCertificateProviderContext:(id)arg1 ;
-(TrustCertificateViewController *)certViewController;
-(void)setCertViewController:(TrustCertificateViewController *)arg1 ;
@end

