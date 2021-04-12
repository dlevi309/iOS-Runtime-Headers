/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKitCore/_UIColorPickerRemoteViewControllerHost.h>
#import <UIKitCore/_UIRemoteViewControllerContaining.h>
#import <UIKitCore/_UIGeometryChangeObserver.h>

@protocol UIColorPickerViewControllerDelegate, NSCopying;
@class _UIRemoteViewController, UIPresentationController, _UIColorPickerRemoteViewController, UIColor, NSExtension, NSLayoutConstraint, _UIColorPickerViewControllerConfiguration, NSString;

@interface UIColorPickerViewController : UIViewController <_UIColorPickerRemoteViewControllerHost, _UIRemoteViewControllerContaining, _UIGeometryChangeObserver> {

	UIPresentationController* _presentationController;
	CGRect _keyboardFrame;
	struct {
		unsigned keyboardVisible : 1;
		unsigned geometryReaderAttached : 1;
		unsigned respondingToGeometryChange : 1;
		unsigned delegateImplementsDidSelectColorContinuous : 1;
		unsigned delegateImplementsDidSelectColor : 1;
	}  _flags;
	id<UIColorPickerViewControllerDelegate> _delegate;
	_UIColorPickerRemoteViewController* _childViewController;
	UIColor* _selectedColor;
	NSExtension* _extension;
	id<NSCopying> _extensionRequestIdentifier;
	NSLayoutConstraint* _bottomConstraint;
	_UIColorPickerViewControllerConfiguration* __remoteConfiguration;
	_UIColorPickerViewControllerConfiguration* _configuration;

}

@property (nonatomic,retain) NSExtension * extension;                                                                                     //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying> extensionRequestIdentifier;                                                                      //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (setter=_setChildViewController:,nonatomic,retain) _UIColorPickerRemoteViewController * _childViewController;                   //@synthesize childViewController=_childViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                                                                       //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (setter=_setRemoteConfiguration:,nonatomic,copy) _UIColorPickerViewControllerConfiguration * _remoteConfiguration;              //@synthesize _remoteConfiguration=__remoteConfiguration - In the implementation block
@property (nonatomic,copy,readonly) _UIColorPickerViewControllerConfiguration * configuration;                                            //@synthesize configuration=_configuration - In the implementation block
@property (assign,setter=_setShouldUseDarkGridInDarkMode:,nonatomic) BOOL _shouldUseDarkGridInDarkMode; 
@property (assign,setter=_setUserInterfaceStyleForGrid:,nonatomic) long long _userInterfaceStyleForGrid; 
@property (assign,nonatomic,__weak) id<UIColorPickerViewControllerDelegate> delegate;                                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor;                                                                                     //@synthesize selectedColor=_selectedColor - In the implementation block
@property (assign,nonatomic) BOOL supportsAlpha; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
+(BOOL)automaticallyNotifiesObserversOfSelectedColor;
-(id)remoteViewController;
-(void)_presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2 ;
-(id)init;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id<UIColorPickerViewControllerDelegate>)delegate;
-(void)keyboardDidHide:(id)arg1 ;
-(NSLayoutConstraint *)bottomConstraint;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)_geometryChanged:(const SCD_Struct_UI29*)arg1 forAncestor:(id)arg2 ;
-(void)_pickerDidSelectColor:(id)arg1 colorspace:(id)arg2 isVolatile:(BOOL)arg3 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setDelegate:(id<UIColorPickerViewControllerDelegate>)arg1 ;
-(_UIColorPickerViewControllerConfiguration *)configuration;
-(BOOL)_canShowWhileLocked;
-(void)_commonUIColorPickerViewControllerInit;
-(UIColor *)selectedColor;
-(BOOL)supportsAlpha;
-(BOOL)_geometryObserverNeedsAncestorOnly;
-(NSExtension *)extension;
-(void)setSupportsAlpha:(BOOL)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)keyboardWillHide:(id)arg1 ;
-(void)loadView;
-(void)_tryLaunchingExtension:(long long)arg1 ;
-(void)setExtensionRequestIdentifier:(id<NSCopying>)arg1 ;
-(void)_setChildViewController:(id)arg1 ;
-(void)_updateRemoteConfiguration;
-(void)repositionChildViewController;
-(void)_setRemoteConfiguration:(id)arg1 ;
-(void)_setSelectedColor:(id)arg1 ;
-(BOOL)_shouldUseDarkGridInDarkMode;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(long long)_userInterfaceStyleForGrid;
-(void)updateGeometryObserver;
-(void)_processKeyboardNotification:(id)arg1 ;
-(void)_pickerDidSelectColor:(id)arg1 ;
-(void)_pickerDidShowEyedropper;
-(void)_pickerDidFloatEyedropper;
-(void)_pickerDidDismissEyedropper;
-(void)_colorPickerDidFinish;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(void)_setShouldUseDarkGridInDarkMode:(BOOL)arg1 ;
-(void)_setUserInterfaceStyleForGrid:(long long)arg1 ;
-(void)keyboardFrameDidChange:(id)arg1 ;
-(_UIColorPickerRemoteViewController *)_childViewController;
-(id<NSCopying>)extensionRequestIdentifier;
-(_UIColorPickerViewControllerConfiguration *)_remoteConfiguration;
-(void)dealloc;
@end

