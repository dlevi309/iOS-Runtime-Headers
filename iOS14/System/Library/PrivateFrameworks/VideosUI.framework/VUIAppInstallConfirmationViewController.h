/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIAppLoadingViewController.h>

@protocol WLKInstallable;
@class NSString, UIBarButtonItem, VUIAppInstallConfirmationView, UIButton, VUIAppInstallLockup;

@interface VUIAppInstallConfirmationViewController : VUIAppLoadingViewController {

	NSString* _updateTitle;
	NSString* _updateMessage;
	/*^block*/id _cancelationHandler;
	/*^block*/id _actionHandler;
	/*^block*/id _appStoreHandler;
	/*^block*/id _secondaryLinkHandler;
	unsigned long long _state;
	UIBarButtonItem* _barButtonItem;
	VUIAppInstallConfirmationView* _confirmationView;
	id<WLKInstallable> _installable;

}

@property (nonatomic,retain) UIBarButtonItem * barButtonItem;                               //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (nonatomic,retain) VUIAppInstallConfirmationView * confirmationView;              //@synthesize confirmationView=_confirmationView - In the implementation block
@property (nonatomic,retain) id<WLKInstallable> installable;                                //@synthesize installable=_installable - In the implementation block
@property (nonatomic,copy) id cancelationHandler;                                           //@synthesize cancelationHandler=_cancelationHandler - In the implementation block
@property (nonatomic,copy) id actionHandler;                                                //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,copy) id appStoreHandler;                                              //@synthesize appStoreHandler=_appStoreHandler - In the implementation block
@property (nonatomic,copy) id secondaryLinkHandler;                                         //@synthesize secondaryLinkHandler=_secondaryLinkHandler - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton; 
@property (nonatomic,readonly) VUIAppInstallLockup * lockup; 
@property (assign,nonatomic) unsigned long long state;                                      //@synthesize state=_state - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setMessage:(id)arg1 ;
-(UIBarButtonItem *)barButtonItem;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setCancelationHandler:(id)arg1 ;
-(id)init;
-(VUIAppInstallLockup *)lockup;
-(id)actionHandler;
-(void)setTitle:(id)arg1 ;
-(void)setActionHandler:(id)arg1 ;
-(void)_handleCancel;
-(UIButton *)actionButton;
-(void)setState:(unsigned long long)arg1 ;
-(id)cancelationHandler;
-(unsigned long long)state;
-(VUIAppInstallConfirmationView *)confirmationView;
-(void)loadView;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_handleAction;
-(id)initWithInstallable:(id)arg1 ;
-(void)setUpdateTitle:(id)arg1 ;
-(void)setUpdateMessage:(id)arg1 ;
-(void)setAppStoreHandler:(id)arg1 ;
-(void)setSecondaryLinkTitle:(id)arg1 ;
-(id)secondaryLinkHandler;
-(void)setSecondaryLinkHandler:(id)arg1 ;
-(void)setPreInstallState;
-(void)setInstallingState;
-(id<WLKInstallable>)installable;
-(void)_handleAppStore;
-(void)_handleSecondaryLink;
-(void)_fetchAppInfo;
-(id)_namedRatingWithRatings:(id)arg1 ;
-(void)_fetchStoreInfoForAdamID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_fileSizeWithDeviceSizes:(id)arg1 ;
-(id)appStoreHandler;
-(void)setConfirmationView:(VUIAppInstallConfirmationView *)arg1 ;
-(void)setInstallable:(id<WLKInstallable>)arg1 ;
@end

