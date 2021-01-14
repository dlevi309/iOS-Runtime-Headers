/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <ShareSheet/UIActivityViewController.h>

@protocol PUEditExtensionActivityViewControllerDelegate;
@interface PUEditExtensionActivityViewController : UIActivityViewController {

	id<PUEditExtensionActivityViewControllerDelegate> _editExtensionActivityViewControllerDelegate;

}

@property (assign,nonatomic,__weak) id<PUEditExtensionActivityViewControllerDelegate> editExtensionActivityViewControllerDelegate;              //@synthesize editExtensionActivityViewControllerDelegate=_editExtensionActivityViewControllerDelegate - In the implementation block
-(void)_performActivity:(id)arg1 ;
-(BOOL)_shouldUseModernDesign;
-(BOOL)isPhotosOrCamera;
-(BOOL)appWantsLargePreview;
-(id<PUEditExtensionActivityViewControllerDelegate>)editExtensionActivityViewControllerDelegate;
-(void)setEditExtensionActivityViewControllerDelegate:(id<PUEditExtensionActivityViewControllerDelegate>)arg1 ;
@end

