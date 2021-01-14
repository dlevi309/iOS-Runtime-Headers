/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIViewController.h>

@class PUPhotosPickerViewController, PUPhotosPickerViewControllerSpec, PHPhotosPickerOptions;

@interface PHPhotosPickerViewController : UIViewController {

	PUPhotosPickerViewController* _photosPickerViewController;
	PUPhotosPickerViewControllerSpec* _spec;
	PHPhotosPickerOptions* _options;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) PHPhotosPickerOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(PHPhotosPickerOptions *)options;
-(id)completionHandler;
-(void)_handlePickerViewControllerDidFinish:(id)arg1 ;
-(void)_commonPHPhotosPickerViewControllerInitializer;
-(BOOL)_updateSpecIfNeeded;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

