/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, PHPerson, PXPeopleScalableAvatarView, UILabel, UIButton, NSString;

@interface PXPeopleQuestionAutoNamingGadget : UIViewController <PXGadget> {

	id<PXGadgetDelegate> _delegate;
	PXGadgetSpec* _gadgetSpec;
	unsigned long long _gadgetType;
	PHPerson* _person;
	PXPeopleScalableAvatarView* _keyFaceView;
	UILabel* _titleLabel;
	UIButton* _yesButton;
	UIButton* _noButton;
	UIButton* _undoButton;
	NSString* _possibleName;

}

@property (nonatomic,retain) PHPerson * person;                                     //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) PXPeopleScalableAvatarView * keyFaceView;              //@synthesize keyFaceView=_keyFaceView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * yesButton;                                  //@synthesize yesButton=_yesButton - In the implementation block
@property (nonatomic,retain) UIButton * noButton;                                   //@synthesize noButton=_noButton - In the implementation block
@property (nonatomic,retain) UIButton * undoButton;                                 //@synthesize undoButton=_undoButton - In the implementation block
@property (nonatomic,copy) NSString * possibleName;                                 //@synthesize possibleName=_possibleName - In the implementation block
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
-(UIButton *)noButton;
-(id)contentViewController;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(id)initWithPerson:(id)arg1 possibleName:(id)arg2 ;
-(void)yesButtonTapped:(id)arg1 ;
-(void)noButtonTapped:(id)arg1 ;
-(void)undoButtonTapped:(id)arg1 ;
-(PXPeopleScalableAvatarView *)keyFaceView;
-(UIButton *)undoButton;
-(void)setKeyFaceView:(PXPeopleScalableAvatarView *)arg1 ;
-(void)setYesButton:(UIButton *)arg1 ;
-(void)setNoButton:(UIButton *)arg1 ;
-(void)setUndoButton:(UIButton *)arg1 ;
-(NSString *)possibleName;
-(void)setPossibleName:(NSString *)arg1 ;
-(void)setPerson:(PHPerson *)arg1 ;
-(UIButton *)yesButton;
@end

