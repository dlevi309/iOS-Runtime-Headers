/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>
#import <libobjc.A.dylib/PXContentFilterControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class PXUIContentFilterController, NSString;

@interface PXCuratedLibraryFilterActionPerformer : PXCuratedLibraryActionPerformer <PXContentFilterControllerDelegate, UIPopoverPresentationControllerDelegate> {

	PXUIContentFilterController* _contentFilterController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityType;
-(void)contentFilterControllerDidComplete:(id)arg1 ;
-(void)performUserInteractionTask;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 ;
-(id)activitySystemImageName;
-(BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2 ;
-(BOOL)performerResetsAfterCompletion;
-(void)contentFilterController:(id)arg1 filterStateChanged:(id)arg2 ;
@end

