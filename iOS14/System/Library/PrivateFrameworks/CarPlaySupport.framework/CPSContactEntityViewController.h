/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSBaseEntityContentViewController.h>
#import <libobjc.A.dylib/CPSActionButtonLayoutDelegate.h>

@class CPSAvatarViewController, CPSNameViewController, CPSActionsViewController, NSArray, UILayoutGuide, NSString;

@interface CPSContactEntityViewController : CPSBaseEntityContentViewController <CPSActionButtonLayoutDelegate> {

	CPSAvatarViewController* _avatarViewController;
	CPSNameViewController* _nameViewController;
	CPSActionsViewController* _actionsController;
	NSArray* _layoutConstraints;
	UILayoutGuide* _centeringLayoutGuide;
	UILayoutGuide* _avatarAndDetailsLayoutGuide;

}

@property (nonatomic,readonly) CPSAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,readonly) CPSNameViewController * nameViewController;                  //@synthesize nameViewController=_nameViewController - In the implementation block
@property (nonatomic,readonly) CPSActionsViewController * actionsController;                //@synthesize actionsController=_actionsController - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                   //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (nonatomic,retain) UILayoutGuide * centeringLayoutGuide;                          //@synthesize centeringLayoutGuide=_centeringLayoutGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * avatarAndDetailsLayoutGuide;                   //@synthesize avatarAndDetailsLayoutGuide=_avatarAndDetailsLayoutGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateViewConstraints;
-(CPSAvatarViewController *)avatarViewController;
-(void)setupViewControllers;
-(void)setupLayoutGuides;
-(CPSActionsViewController *)actionsController;
-(void)resetLayoutConstraints;
-(void)setupLayoutConstraints;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(UILayoutGuide *)centeringLayoutGuide;
-(void)setCenteringLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)avatarAndDetailsLayoutGuide;
-(void)setAvatarAndDetailsLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithEntity:(id)arg1 resourceProvider:(id)arg2 ;
-(void)didUpdateEntity:(id)arg1 ;
-(BOOL)buttonsShouldFill;
-(void)configureButton:(id)arg1 ;
-(CPSNameViewController *)nameViewController;
-(id)personEntity;
@end

