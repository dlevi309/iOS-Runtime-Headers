/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKitCore/_UIDocumentPickerExtensionViewController.h>

@class NSString;

@interface _UIDocumentPickerNavigationBridgeController : UINavigationController <_UIDocumentPickerExtensionViewController> {

	BOOL _hasSetInitialNavigationItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)_setTintColor:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setPickableTypes:(id)arg1 ;
-(void)_setPickerMode:(unsigned long long)arg1 ;
-(void)_setUploadURLWrapper:(id)arg1 ;
-(void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_documentPickerDidDismiss;
-(id)hostingViewController;
-(void)_doneButton:(id)arg1 ;
-(void)_updateNavigationItem;
-(void)_locationsMenu:(id)arg1 ;
@end

