/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/WFDraggableActionView.h>

@protocol VCActionDonation;
@class NSString, WFDragGestureRecognizer, WFDragController, UIViewController, WFCircularImageView, WFActionDrawerImage, WFActionDrawerImageLoadTask, UILabel, NSArray;

@interface WFActionDrawerSiriSuggestionsCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, WFDraggableActionView> {

	NSString* _title;
	long long _cellType;
	id<VCActionDonation> _donation;
	WFDragGestureRecognizer* _dragRecognizer;
	WFDragController* _dragController;
	UIViewController* _containingViewController;
	WFCircularImageView* _imageView;
	WFActionDrawerImage* _image;
	WFActionDrawerImageLoadTask* _imageLoadTask;
	UILabel* _titleLabel;
	NSArray* _verticalStackConstraints;
	NSArray* _horizontalStackConstraints;

}

@property (assign,nonatomic,__weak) WFCircularImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) WFActionDrawerImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) WFActionDrawerImageLoadTask * imageLoadTask;                     //@synthesize imageLoadTask=_imageLoadTask - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * verticalStackConstraints;                              //@synthesize verticalStackConstraints=_verticalStackConstraints - In the implementation block
@property (nonatomic,retain) NSArray * horizontalStackConstraints;                            //@synthesize horizontalStackConstraints=_horizontalStackConstraints - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long cellType;                                            //@synthesize cellType=_cellType - In the implementation block
@property (nonatomic,readonly) id<VCActionDonation> donation;                                 //@synthesize donation=_donation - In the implementation block
@property (assign,nonatomic,__weak) WFDragGestureRecognizer * dragRecognizer;                 //@synthesize dragRecognizer=_dragRecognizer - In the implementation block
@property (nonatomic,readonly) WFDragController * dragController;                             //@synthesize dragController=_dragController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * containingViewController;              //@synthesize containingViewController=_containingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldStackVerticallyForTraitCollection:(id)arg1 ;
+(CGSize)preferredSizeForType:(long long)arg1 forTraitCollection:(id)arg2 ;
+(CGSize)sizeForCellUsingVerticalStacking:(BOOL)arg1 ;
+(double)spacingForType:(long long)arg1 ;
-(UILabel *)titleLabel;
-(void)setImageView:(WFCircularImageView *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(long long)cellType;
-(void)setImage:(WFActionDrawerImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(WFCircularImageView *)imageView;
-(void)prepareForReuse;
-(WFActionDrawerImage *)image;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(WFDragController *)dragController;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(WFDragGestureRecognizer *)dragRecognizer;
-(void)setDragRecognizer:(WFDragGestureRecognizer *)arg1 ;
-(NSString *)title;
-(UIViewController *)containingViewController;
-(void)setContainingViewController:(UIViewController *)arg1 ;
-(CGSize)initialSizeForBeginningDragController:(id)arg1 ;
-(void)setUpLayoutConstraints;
-(void)adjustStackingStyle;
-(void)configureWithCellType:(long long)arg1 title:(id)arg2 donation:(id)arg3 genericAction:(id)arg4 forDailyRoutines:(BOOL)arg5 ;
-(void)loadImageForInteractionDonation:(id)arg1 ;
-(BOOL)shouldStackVerticallyForTraitCollection:(id)arg1 ;
-(id<VCActionDonation>)donation;
-(WFActionDrawerImageLoadTask *)imageLoadTask;
-(void)setImageLoadTask:(WFActionDrawerImageLoadTask *)arg1 ;
-(NSArray *)verticalStackConstraints;
-(void)setVerticalStackConstraints:(NSArray *)arg1 ;
-(NSArray *)horizontalStackConstraints;
-(void)setHorizontalStackConstraints:(NSArray *)arg1 ;
@end

