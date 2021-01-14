/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNPhotoPickerActionsDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol CNPhotoPickerActionsViewControllerDelegate, CNPhotoPickerActionsViewControllerLayout;
@class CNPhotoPickerActionsModel, UIStackView, UIView, CAShapeLayer, CNPhotoPickerActionButton, NSString;

@interface CNPhotoPickerActionsViewController : UIViewController <CNPhotoPickerActionsDelegate, UIAdaptivePresentationControllerDelegate> {

	id<CNPhotoPickerActionsViewControllerDelegate> _delegate;
	CNPhotoPickerActionsModel* _actionsModel;
	UIStackView* _buttonsView;
	UIView* _imageContainerView;
	UIView* _transitionContainerView;
	CAShapeLayer* _clippingLayer;
	CNPhotoPickerActionButton* _editButton;
	CNPhotoPickerActionButton* _duplicateButton;
	CNPhotoPickerActionButton* _deleteButton;
	id<CNPhotoPickerActionsViewControllerLayout> _currentLayout;

}

@property (nonatomic,retain) UIStackView * buttonsView;                                                   //@synthesize buttonsView=_buttonsView - In the implementation block
@property (nonatomic,retain) UIView * imageContainerView;                                                 //@synthesize imageContainerView=_imageContainerView - In the implementation block
@property (nonatomic,retain) UIView * transitionContainerView;                                            //@synthesize transitionContainerView=_transitionContainerView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * clippingLayer;                                                //@synthesize clippingLayer=_clippingLayer - In the implementation block
@property (nonatomic,retain) CNPhotoPickerActionButton * editButton;                                      //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) CNPhotoPickerActionButton * duplicateButton;                                 //@synthesize duplicateButton=_duplicateButton - In the implementation block
@property (nonatomic,retain) CNPhotoPickerActionButton * deleteButton;                                    //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) CNPhotoPickerActionsModel * actionsModel;                                    //@synthesize actionsModel=_actionsModel - In the implementation block
@property (nonatomic,retain) id<CNPhotoPickerActionsViewControllerLayout> currentLayout;                  //@synthesize currentLayout=_currentLayout - In the implementation block
@property (assign,nonatomic,__weak) id<CNPhotoPickerActionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(CNPhotoPickerActionButton *)editButton;
-(id<CNPhotoPickerActionsViewControllerDelegate>)delegate;
-(id<CNPhotoPickerActionsViewControllerLayout>)currentLayout;
-(void)setDeleteButton:(CNPhotoPickerActionButton *)arg1 ;
-(void)setCurrentLayout:(id<CNPhotoPickerActionsViewControllerLayout>)arg1 ;
-(void)didTapDone;
-(UIView *)imageContainerView;
-(void)setImageContainerView:(UIView *)arg1 ;
-(void)setEditButton:(CNPhotoPickerActionButton *)arg1 ;
-(void)setDelegate:(id<CNPhotoPickerActionsViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(UIStackView *)buttonsView;
-(id)initWithActionsModel:(id)arg1 ;
-(UIView *)transitionContainerView;
-(void)actionsModel:(id)arg1 didAssignToContact:(id)arg2 atIndexPath:(id)arg3 ;
-(void)actionsModel:(id)arg1 didEdit:(id)arg2 atIndexPath:(id)arg3 ;
-(void)actionsModel:(id)arg1 didDelete:(id)arg2 atIndexPath:(id)arg3 ;
-(void)applyLayout:(id)arg1 ;
-(void)actionsModel:(id)arg1 didDuplicate:(id)arg2 atIndexPath:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)layoutViewFromModel:(id)arg1 ;
-(void)updateButtonsFromModel:(id)arg1 ;
-(void)presentDeleteConfirmationWithCompletion:(/*^block*/id)arg1 ;
-(double)deleteMoveInDelay;
-(void)updateActionsModelWithProviderItem:(id)arg1 ;
-(double)duplicateScaleDuration;
-(double)duplicateScaleDelay;
-(double)deleteMoveInDuration;
-(void)performDeleteTransitionToItem:(id)arg1 ;
-(void)setActionsModel:(CNPhotoPickerActionsModel *)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)performDuplicateTransitionToItem:(id)arg1 fromView:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(CNPhotoPickerActionsModel *)actionsModel;
-(void)setButtonsView:(UIStackView *)arg1 ;
-(CNPhotoPickerActionButton *)duplicateButton;
-(void)setDuplicateButton:(CNPhotoPickerActionButton *)arg1 ;
-(CNPhotoPickerActionButton *)deleteButton;
-(CAShapeLayer *)clippingLayer;
-(void)setClippingLayer:(CAShapeLayer *)arg1 ;
-(void)setTransitionContainerView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
@end

