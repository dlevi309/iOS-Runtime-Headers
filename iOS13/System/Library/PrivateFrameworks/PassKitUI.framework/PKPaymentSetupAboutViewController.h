/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSMutableString, PKPaymentSetupAboutView, NSString;

@interface PKPaymentSetupAboutViewController : UIViewController <UIScrollViewDelegate> {

	NSMutableString* _bodyText;
	PKPaymentSetupAboutView* _aboutView;
	void* _navigationController;
	BOOL _navigationControllerHidesShadow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_done:(id)arg1 ;
-(id)initForPrivacyPresented:(BOOL)arg1 webService:(id)arg2 ;
@end

