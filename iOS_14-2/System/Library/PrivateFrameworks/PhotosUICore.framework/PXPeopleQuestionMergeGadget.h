/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, PHPerson, PXPeopleScalableAvatarView, UILabel, UIButton, NSString;

@interface PXPeopleQuestionMergeGadget : UIViewController <PXGadget> {

	id<PXGadgetDelegate> _delegate;
	PXGadgetSpec* _gadgetSpec;
	unsigned long long _gadgetType;
	PHPerson* _person;
	PXPeopleScalableAvatarView* _keyFaceView;
	UILabel* _titleLabel;
	UIButton* _reviewButton;

}

@property (nonatomic,retain) PHPerson * person;                                     //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) PXPeopleScalableAvatarView * keyFaceView;              //@synthesize keyFaceView=_keyFaceView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * reviewButton;                               //@synthesize reviewButton=_reviewButton - In the implementation block
@property (nonatomic,readonly) unsigned long long gadgetType;                       //@synthesize gadgetType=_gadgetType - In the implementation block
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                             //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHPerson *)person;
-(UILabel *)titleLabel;
-(PXGadgetSpec *)gadgetSpec;
-(unsigned long long)gadgetCapabilities;
-(unsigned long long)gadgetType;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id<PXGadgetDelegate>)delegate;
-(UIButton *)reviewButton;
-(id)contentViewController;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(void)reviewButtonTapped:(id)arg1 ;
-(void)setReviewButton:(UIButton *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(PXPeopleScalableAvatarView *)keyFaceView;
-(void)setKeyFaceView:(PXPeopleScalableAvatarView *)arg1 ;
-(void)setPerson:(PHPerson *)arg1 ;
-(id)initWithPerson:(id)arg1 ;
@end

