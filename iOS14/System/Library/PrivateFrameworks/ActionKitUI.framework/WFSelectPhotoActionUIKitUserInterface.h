/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/PHPickerViewControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <libobjc.A.dylib/WFSelectPhotoActionUserInterface.h>

@class NSString;

@interface WFSelectPhotoActionUIKitUserInterface : WFActionUserInterface <PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, WFSelectPhotoActionUserInterface> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)picker:(id)arg1 didFinishPicking:(id)arg2 ;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithPhotoPickerTypes:(id)arg1 selectMultiple:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)finishWithOutput:(id)arg1 error:(id)arg2 ;
@end

