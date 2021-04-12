/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PXPeopleMeViewControllerDataSource, PXPerson;
@class UIButton, UILabel, PXPeopleScalableAvatarView;

@interface PXPeopleMeViewController : UIViewController {

	id<PXPeopleMeViewControllerDataSource> _dataSource;
	/*^block*/id _dismissHandler;
	id<PXPerson> _suggestedPerson;
	UIButton* _confirmButton;
	UIButton* _denyButton;
	UILabel* _descriptionLabel;
	PXPeopleScalableAvatarView* _avatarView;

}

@property (retain) id<PXPerson> suggestedPerson;                                               //@synthesize suggestedPerson=_suggestedPerson - In the implementation block
@property (nonatomic,retain) UIButton * confirmButton;                                         //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,retain) UIButton * denyButton;                                            //@synthesize denyButton=_denyButton - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) PXPeopleScalableAvatarView * avatarView;                          //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) id<PXPeopleMeViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) id dismissHandler;                                                  //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (nonatomic,readonly) double preferredHeight; 
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)setDismissHandler:(id)arg1 ;
-(UIButton *)confirmButton;
-(void)setConfirmButton:(UIButton *)arg1 ;
-(id<PXPeopleMeViewControllerDataSource>)dataSource;
-(void)_rejectMe:(id)arg1 ;
-(UIButton *)denyButton;
-(PXPeopleScalableAvatarView *)avatarView;
-(id)initWithDataSource:(id)arg1 dismissHandler:(/*^block*/id)arg2 ;
-(void)_confirmMe:(id)arg1 ;
-(void)setDenyButton:(UIButton *)arg1 ;
-(id)_buttonWithTitle:(id)arg1 action:(SEL)arg2 destructive:(BOOL)arg3 ;
-(void)_dismissViewControllerAsConfirmed:(BOOL)arg1 ;
-(id<PXPerson>)suggestedPerson;
-(void)setSuggestedPerson:(id<PXPerson>)arg1 ;
-(id)dismissHandler;
-(double)preferredHeight;
-(void)viewDidLoad;
-(void)setAvatarView:(PXPeopleScalableAvatarView *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)descriptionLabel;
-(void)dealloc;
@end

