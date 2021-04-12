/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
*/

#import <AppleMediaServicesUI/AMSUIWebViewController.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <libobjc.A.dylib/AMSUIWebDelegate.h>

@protocol NDOAppleCareAMSUIViewPresenterProtocol;
@class UINavigationController, NDOWarranty, NSString;

@interface NDOAppleCareAMSUIViewController : AMSUIWebViewController <UINavigationBarDelegate, AMSUIWebDelegate> {

	BOOL _initialLoadCompleted;
	id<NDOAppleCareAMSUIViewPresenterProtocol> _presenter;
	UINavigationController* _navController;
	NDOWarranty* _warranty;
	NSString* _serialNumber;

}

@property (retain) NDOWarranty * warranty;                                            //@synthesize warranty=_warranty - In the implementation block
@property (retain) NSString * serialNumber;                                           //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign) BOOL initialLoadCompleted;                                         //@synthesize initialLoadCompleted=_initialLoadCompleted - In the implementation block
@property (__weak) id<NDOAppleCareAMSUIViewPresenterProtocol> presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (assign) UINavigationController * navController;                            //@synthesize navController=_navController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)serialNumber;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(UINavigationController *)navController;
-(id<NDOAppleCareAMSUIViewPresenterProtocol>)presenter;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)cancelTapped:(id)arg1 ;
-(void)setNavController:(UINavigationController *)arg1 ;
-(void)setPresenter:(id<NDOAppleCareAMSUIViewPresenterProtocol>)arg1 ;
-(BOOL)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setWarranty:(NDOWarranty *)arg1 ;
-(NDOWarranty *)warranty;
-(id)initWithWarranty:(id)arg1 serialNumber:(id)arg2 ;
-(void)loadAMSUIView;
-(BOOL)initialLoadCompleted;
-(void)setInitialLoadCompleted:(BOOL)arg1 ;
@end

