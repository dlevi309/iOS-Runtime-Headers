/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXPhotosGridActionPerformer.h>
#import <libobjc.A.dylib/PXAlbumStreamingOptionsViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class PXAlbumStreamingOptionsViewController, NSString;

@interface PXPhotosGridSharedAlbumOptionsActionPerformer : PXPhotosGridActionPerformer <PXAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	PXAlbumStreamingOptionsViewController* _presentedOptionsController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canPerformActionType:(id)arg1 withViewModel:(id)arg2 ;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3 ;
-(id)activityType;
-(void)performUserInteractionTask;
-(BOOL)_shouldDismissOptionsForReason:(int)arg1 ;
-(BOOL)_shouldRequestGridDismissalForReason:(int)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(id)localizedTitleForUseCase:(unsigned long long)arg1 ;
-(void)albumStreamingOptionsViewController:(id)arg1 didCompleteWithReason:(int)arg2 ;
-(id)activitySystemImageName;
@end

