/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXPhotosGridActionPerformer.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PXContentFilterControllerDelegate.h>

@class PXUIContentFilterController, NSString;

@interface PXPhotosGridFilterContentActionPerformer : PXPhotosGridActionPerformer <UIPopoverPresentationControllerDelegate, PXContentFilterControllerDelegate> {

	PXUIContentFilterController* _contentFilterController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canPerformActionType:(id)arg1 withViewModel:(id)arg2 ;
-(id)activityType;
-(void)contentFilterControllerDidComplete:(id)arg1 ;
-(void)performUserInteractionTask;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(id)localizedTitleForUseCase:(unsigned long long)arg1 ;
-(id)initWithViewModel:(id)arg1 actionType:(id)arg2 ;
-(id)activitySystemImageName;
-(id)contentFilterHiddenTypes;
-(void)contentFilterController:(id)arg1 filterStateChanged:(id)arg2 ;
@end

