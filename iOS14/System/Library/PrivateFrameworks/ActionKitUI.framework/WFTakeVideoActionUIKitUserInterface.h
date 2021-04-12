/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/WFTakeVideoActionUserInterface.h>

@class NSString;

@interface WFTakeVideoActionUIKitUserInterface : WFActionUserInterface <UIImagePickerControllerDelegate, UINavigationControllerDelegate, WFTakeVideoActionUserInterface> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)cameraDeviceFromString:(id)arg1 ;
+(long long)qualityFromString:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id)completionHandler;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithQuality:(id)arg1 device:(id)arg2 startImmediately:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)finishWithOutput:(id)arg1 error:(id)arg2 ;
@end

