/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <UIKit/UIDocumentPickerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@class NSString;

@interface AAUIImagePickerAlertController : UIViewController <UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, UIDocumentPickerDelegate, UIImagePickerControllerDelegate> {

	/*^block*/id _selectionHandler;

}

@property (nonatomic,copy) id selectionHandler;                     //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alertControllerWithSelectionHandler:(/*^block*/id)arg1 ;
-(void)viewDidLoad;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(long long)modalPresentationStyle;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)documentPickerWasCancelled:(id)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(void)_dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSelectionHandler:(id)arg1 ;
-(void)_presentImagePickerAnimated:(BOOL)arg1 ;
-(void)_presentDocumentPickerAnimated:(BOOL)arg1 ;
-(void)_presentImageSourcePickerAnimated:(BOOL)arg1 ;
-(void)_presentImagePickerWithSourceType:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_callSelectionHandlerWithImage:(id)arg1 cropRect:(id)arg2 ;
-(id)_propertiesForImagePickerController:(id)arg1 ;
-(id)selectionHandler;
@end

