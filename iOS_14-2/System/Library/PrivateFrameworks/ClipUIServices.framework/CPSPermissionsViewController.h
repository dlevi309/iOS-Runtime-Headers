/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PRXCardContentProviding.h>

@protocol CPSPermissionsViewControllerDelegate;
@class NSString, UIImageView, UIView, CPSPermissionItemView, UIImage;

@interface CPSPermissionsViewController : UIViewController <PRXCardContentProviding> {

	NSString* _appName;
	UIImageView* _backgroundImageView;
	UIView* _optionsContainer;
	CPSPermissionItemView* _notificationItemView;
	CPSPermissionItemView* _locationConfirmationItemView;
	BOOL _backgroundImageNeedsUpdate;
	UIImage* _backgroundImage;
	id<CPSPermissionsViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) UIImage * backgroundImage;                                             //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic,__weak) id<CPSPermissionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL notificationPermissionEnabled; 
@property (assign,nonatomic) BOOL locationConfirmationPermissionEnabled; 
@property (nonatomic,readonly) long long cardStyle; 
@property (nonatomic,readonly) BOOL allowsPullToDismiss; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CPSPermissionsViewControllerDelegate>)delegate;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<CPSPermissionsViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)doneTapped;
-(UIImage *)backgroundImage;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)notificationPermissionEnabled;
-(BOOL)locationConfirmationPermissionEnabled;
-(void)setNotificationPermissionEnabled:(BOOL)arg1 ;
-(void)setLocationConfirmationPermissionEnabled:(BOOL)arg1 ;
-(void)updatePreferredContentSizeForCardWidth:(double)arg1 ;
-(id)initWithAppName:(id)arg1 backgroundImage:(id)arg2 ;
-(BOOL)allowsPullToDismiss;
-(void)setUpOptionsContainer;
@end

