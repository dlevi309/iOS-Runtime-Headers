/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PULivePhotoKeyFrameSelectionViewControllerDelegate;
@class NSString, UIButton;

@interface PULivePhotoKeyFrameSelectionViewController : UIViewController {

	id<PULivePhotoKeyFrameSelectionViewControllerDelegate> _delegate;
	NSString* _selectionTitle;
	UIButton* _makeKeyPhotoBtn;

}

@property (nonatomic,retain) UIButton * makeKeyPhotoBtn;                                                          //@synthesize makeKeyPhotoBtn=_makeKeyPhotoBtn - In the implementation block
@property (assign,nonatomic,__weak) id<PULivePhotoKeyFrameSelectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * selectionTitle;                                                             //@synthesize selectionTitle=_selectionTitle - In the implementation block
-(id<PULivePhotoKeyFrameSelectionViewControllerDelegate>)delegate;
-(NSString *)selectionTitle;
-(void)setDelegate:(id<PULivePhotoKeyFrameSelectionViewControllerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)tapMakeKeyPhoto:(id)arg1 ;
-(void)_updateButtonTitle;
-(UIButton *)makeKeyPhotoBtn;
-(void)setMakeKeyPhotoBtn:(UIButton *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSelectionTitle:(NSString *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

