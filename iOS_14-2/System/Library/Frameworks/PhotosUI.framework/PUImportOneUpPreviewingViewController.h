/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class PXImportItemViewModel, PXImportMediaProvider, PUImportOneUpTransitionView;

@interface PUImportOneUpPreviewingViewController : UIViewController {

	PXImportItemViewModel* _importItemViewModel;
	PXImportMediaProvider* _mediaProvider;
	PUImportOneUpTransitionView* _previewView;

}

@property (nonatomic,retain) PXImportItemViewModel * importItemViewModel;              //@synthesize importItemViewModel=_importItemViewModel - In the implementation block
@property (nonatomic,retain) PXImportMediaProvider * mediaProvider;                    //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) PUImportOneUpTransitionView * previewView;                //@synthesize previewView=_previewView - In the implementation block
-(void)setMediaProvider:(PXImportMediaProvider *)arg1 ;
-(PXImportMediaProvider *)mediaProvider;
-(PUImportOneUpTransitionView *)previewView;
-(void)viewDidLoad;
-(void)updatePreferredContentSize;
-(CGSize)sizeForImportItemViewModel:(id)arg1 ;
-(id)initWithImportItemViewModel:(id)arg1 startingImage:(id)arg2 mediaProvider:(id)arg3 ;
-(PXImportItemViewModel *)importItemViewModel;
-(void)setImportItemViewModel:(PXImportItemViewModel *)arg1 ;
-(void)setPreviewView:(PUImportOneUpTransitionView *)arg1 ;
@end

