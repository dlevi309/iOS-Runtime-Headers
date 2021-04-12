/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotoKitActionPerformer.h>
#import <libobjc.A.dylib/PUDeletePhotosActionControllerDelegate.h>

@class NSString;

@interface PUPhotoKitDestructiveActionsPerformer : PUPhotoKitActionPerformer <PUDeletePhotosActionControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performUserInteractionTask;
-(BOOL)shouldConfirmDestructiveAction;
-(long long)destructivePhotosAction;
-(void)deletePhotosActionController:(id)arg1 dismissConfirmationViewController:(id)arg2 ;
-(void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2 ;
@end

