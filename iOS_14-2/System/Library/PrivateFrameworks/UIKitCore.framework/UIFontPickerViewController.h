/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKitCore/_UIFontPickerRemoteViewControllerHost.h>
#import <UIKitCore/_UIRemoteViewControllerContaining.h>
#import <UIKit/UIFontPicker.h>

@protocol UIFontPickerViewControllerDelegate, NSCopying;
@class UIFontDescriptor, _UIFontPickerRemoteViewController, UIFontPickerViewControllerConfiguration, NSExtension, NSString, _UIRemoteViewController;

@interface UIFontPickerViewController : UIViewController <_UIFontPickerRemoteViewControllerHost, _UIRemoteViewControllerContaining, UIFontPicker> {

	BOOL _presentingViewController;
	_UIFontPickerRemoteViewController* _childViewController;
	UIFontPickerViewControllerConfiguration* _configuration;
	id<UIFontPickerViewControllerDelegate> _delegate;
	UIFontDescriptor* _selectedFontDescriptor;
	NSExtension* _extension;
	id<NSCopying> _extensionRequestIdentifier;

}

@property (nonatomic,retain) NSExtension * extension;                                                     //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying> extensionRequestIdentifier;                                      //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (nonatomic,copy,readonly) UIFontPickerViewControllerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<UIFontPickerViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIFontDescriptor * selectedFontDescriptor;                                   //@synthesize selectedFontDescriptor=_selectedFontDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
-(id)remoteViewController;
-(id)init;
-(id<UIFontPickerViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMode:(unsigned long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDelegate:(id<UIFontPickerViewControllerDelegate>)arg1 ;
-(UIFontDescriptor *)selectedFontDescriptor;
-(UIFontPickerViewControllerConfiguration *)configuration;
-(void)dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(NSExtension *)extension;
-(void)_commonInitWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)_pickerDidCancel;
-(void)_pickerDidSelectFont:(id)arg1 ;
-(id)_initWithCompletion:(/*^block*/id)arg1 ;
-(void)setSelectedFontDescriptor:(UIFontDescriptor *)arg1 ;
-(id)initWithSelectedFont:(id)arg1 inMode:(unsigned long long)arg2 ;
-(id)_initWithMode:(unsigned long long)arg1 hideSearchBar:(BOOL)arg2 tintColor:(id)arg3 ;
-(void)setExtensionRequestIdentifier:(id<NSCopying>)arg1 ;
-(void)_setChildViewController:(id)arg1 ;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(id<NSCopying>)extensionRequestIdentifier;
-(void)_viewControllerPresentationDidInitiate;
-(void)dealloc;
@end

