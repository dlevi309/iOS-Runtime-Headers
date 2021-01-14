/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCMMShowMessageComposeActionPerformer.h>
#import <libobjc.A.dylib/MFMessageComposeViewControllerDelegate.h>

@class MFMessageComposeViewController, NSString;

@interface PXCMMPhotoKitMessageComposeActionPerformer : PXCMMShowMessageComposeActionPerformer <MFMessageComposeViewControllerDelegate> {

	MFMessageComposeViewController* _messageComposeViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performUserInteractionTask;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
@end

