/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)_setTintColor:(id)arg1 ;
-(id)hostingViewController;
-(void)_doneButton:(id)arg1 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setPickableTypes:(id)arg1 ;
-(void)_setUploadURLWrapper:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_documentPickerDidDismiss;
-(void)_locationsMenu:(id)arg1 ;
-(void)_updateNavigationItem;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)_setPickerMode:(unsigned long long)arg1 ;
@end

