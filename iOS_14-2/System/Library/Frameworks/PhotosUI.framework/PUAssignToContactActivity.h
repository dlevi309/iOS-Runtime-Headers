/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <ShareSheet/UIAssignToContactActivity.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/PXActivity.h>

@protocol PXActivityItemSourceController;
@class NSString;

@interface PUAssignToContactActivity : UIAssignToContactActivity <UINavigationControllerDelegate, PXActivity> {

	id<PXActivityItemSourceController> _itemSourceController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXActivityItemSourceController> itemSourceController;              //@synthesize itemSourceController=_itemSourceController - In the implementation block
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(id)_systemImageName;
-(id)_embeddedActivityViewController;
-(id<PXActivityItemSourceController>)itemSourceController;
-(void)setItemSourceController:(id<PXActivityItemSourceController>)arg1 ;
-(id)activityViewController;
@end

