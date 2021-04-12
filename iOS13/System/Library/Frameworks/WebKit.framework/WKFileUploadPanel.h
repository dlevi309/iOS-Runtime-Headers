/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIDocumentPickerDelegate.h>
#import <UIKit/UIDocumentMenuDelegate.h>

@protocol WKFileUploadPanelDelegate;
@class WKContentView, NSString;

@interface WKFileUploadPanel : UIViewController <UIPopoverControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate, UIDocumentMenuDelegate> {

	WKContentView* _view;
	RefPtr<WebKit::WebOpenPanelResultListenerProxy, WTF::DumbPtrTraits<WebKit::WebOpenPanelResultListenerProxy> >* _listener;
	RetainPtr<NSArray>* _mimeTypes;
	CGPoint _interactionPoint;
	BOOL _allowMultipleFiles;
	BOOL _usingCamera;
	RetainPtr<UIImagePickerController>* _imagePicker;
	RetainPtr<UIViewController>* _presentationViewController;
	RetainPtr<UIPopoverController>* _presentationPopover;
	RetainPtr<UIDocumentMenuViewController>* _documentMenuController;
	RetainPtr<UIDocumentPickerViewController>* _documentPickerController;
	int _mediaCaptureType;
	id<WKFileUploadPanelDelegate> _delegate;

}

@property (assign,nonatomic) id<WKFileUploadPanelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<WKFileUploadPanelDelegate>)delegate;
-(void)setDelegate:(id<WKFileUploadPanelDelegate>)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)dismiss;
-(id)initWithView:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2 ;
-(void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2 ;
-(void)documentMenuWasCancelled:(id)arg1 ;
-(void)documentPickerWasCancelled:(id)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(void)_dispatchDidDismiss;
-(id)_mediaTypesForPickerSourceType:(long long)arg1 ;
-(void)_presentPopoverWithContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_presentFullscreenViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_showPhotoPickerWithSourceType:(long long)arg1 ;
-(void)_dismissDisplayAnimated:(BOOL)arg1 ;
-(BOOL)_shouldMediaCaptureOpenMediaDevice;
-(void)_adjustMediaCaptureType;
-(void)_showDocumentPickerMenu;
-(void)_cancel;
-(void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 processedImageCount:(unsigned long long)arg4 processedVideoCount:(unsigned long long)arg5 successBlock:(/*^block*/id)arg6 failureBlock:(/*^block*/id)arg7 ;
-(void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(BOOL)_willMultipleSelectionDelegateBeCalled;
-(void)_processMediaInfoDictionaries:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)currentAvailableActionTitles;
-(BOOL)platformSupportsPickerViewController;
-(id)_photoLibraryButtonLabel;
-(id)_cameraButtonLabelAllowingPhoto:(BOOL)arg1 allowingVideo:(BOOL)arg2 ;
-(void)_presentMenuOptionForCurrentInterfaceIdiom:(id)arg1 ;
-(void)_configureImagePicker:(id)arg1 ;
-(void)_chooseFiles:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3 ;
-(void)presentWithParameters:(OpenPanelParameters*)arg1 resultListener:(WebOpenPanelResultListenerProxy*)arg2 ;
@end

