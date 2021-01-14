/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>
#import <libobjc.A.dylib/_PUPickerUnavailableUIViewControllerDelegate.h>
#import <libobjc.A.dylib/_PUPickerRemoteUIViewControllerHostInterface.h>

@protocol PHPickerViewControllerDelegate, NSCopying;
@class _UIRemoteViewController, PHPickerConfiguration, NSExtension, PUPickerRemoteUIViewController, NSString;

@interface PHPickerViewController : UIViewController <_UIRemoteViewControllerContaining, _PUPickerUnavailableUIViewControllerDelegate, _PUPickerRemoteUIViewControllerHostInterface> {

	PHPickerConfiguration* _configuration;
	id<PHPickerViewControllerDelegate> _delegate;
	NSExtension* __extension;
	id<NSCopying> __extensionRequestIdentifier;
	PUPickerRemoteUIViewController* __remoteUIViewController;

}

@property (setter=_setExtension:,nonatomic,retain) NSExtension * _extension;                                                           //@synthesize _extension=__extension - In the implementation block
@property (setter=_setExtensionRequestIdentifier:,nonatomic,copy) id<NSCopying> _extensionRequestIdentifier;                           //@synthesize _extensionRequestIdentifier=__extensionRequestIdentifier - In the implementation block
@property (setter=_setRemoteUIViewController:,nonatomic,retain) PUPickerRemoteUIViewController * _remoteUIViewController;              //@synthesize _remoteUIViewController=__remoteUIViewController - In the implementation block
@property (nonatomic,copy,readonly) PHPickerConfiguration * configuration;                                                             //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<PHPickerViewControllerDelegate> delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSExtension *)_extension;
-(id)init;
-(id<PHPickerViewControllerDelegate>)delegate;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDelegate:(id<PHPickerViewControllerDelegate>)arg1 ;
-(PHPickerConfiguration *)configuration;
-(void)_pickerUnavailableUIViewControllerCancelButtonTapped:(id)arg1 ;
-(void)_pickerUnavailableUIViewControllerRetryButtonTapped:(id)arg1 ;
-(void)_pickerDidFinishPicking:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setExtension:(id)arg1 ;
-(void)_setupExtension:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_cancelExistingExtensionRequestIfPossible;
-(PUPickerRemoteUIViewController *)_remoteUIViewController;
-(void)_setupRemoteViewControllerForExtension:(id)arg1 withExtensionItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleRemoteViewControllerConnection:(id)arg1 extension:(id)arg2 extensionRequestIdentifier:(id)arg3 error:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_setRemoteUIViewController:(id)arg1 ;
-(void)_addOrReplaceChildUnavailableUIViewController:(unsigned long long)arg1 error:(id)arg2 ;
-(void)_setExtensionRequestIdentifier:(id)arg1 ;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(id<NSCopying>)_extensionRequestIdentifier;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_setup:(/*^block*/id)arg1 ;
@end

