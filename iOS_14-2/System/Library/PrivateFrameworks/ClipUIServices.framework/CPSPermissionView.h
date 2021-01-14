/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@class CPSButton, NSString;

@interface CPSPermissionView : UIView <UITextViewDelegate> {

	CPSButton* _permissionButton;
	NSString* _appName;
	BOOL _requestsNotificationPermission;
	BOOL _requestsLocationConfirmationPermission;
	BOOL _permissionTextNeedsUpdate;
	BOOL _notificationPermissionEnabled;
	BOOL _locationConfirmationPermissionEnabled;
	/*^block*/id _optionsAction;

}

@property (nonatomic,copy) id optionsAction;                                          //@synthesize optionsAction=_optionsAction - In the implementation block
@property (assign,nonatomic) BOOL notificationPermissionEnabled;                      //@synthesize notificationPermissionEnabled=_notificationPermissionEnabled - In the implementation block
@property (assign,nonatomic) BOOL locationConfirmationPermissionEnabled;              //@synthesize locationConfirmationPermissionEnabled=_locationConfirmationPermissionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)permissionButtonTapped:(id)arg1 ;
-(void)transitionViewAnimated:(BOOL)arg1 ;
-(void)toggleNotificationPermission;
-(void)toggleLocationConfirmationPermission;
-(id)optionsAction;
-(void)setNotificationPermissionEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLocationConfirmationPermissionEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)notificationPermissionEnabled;
-(BOOL)locationConfirmationPermissionEnabled;
-(void)configureWithAppName:(id)arg1 requestsNotificationPermission:(BOOL)arg2 requestsLocationConfirmationPermission:(BOOL)arg3 ;
-(void)setNotificationPermissionEnabled:(BOOL)arg1 ;
-(void)setLocationConfirmationPermissionEnabled:(BOOL)arg1 ;
-(void)setOptionsAction:(id)arg1 ;
@end

