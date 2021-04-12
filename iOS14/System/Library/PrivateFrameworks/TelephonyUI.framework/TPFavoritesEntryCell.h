/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UILabel, UIImage, NSString, CNAvatarViewController, UIImageView, UIVisualEffectView, NSLayoutConstraint;

@interface TPFavoritesEntryCell : UICollectionViewCell {

	BOOL _contentViewLoaded;
	BOOL _contentViewLayoutConstraintsLoaded;
	UIView* _avatarContentView;
	UILabel* _contactNameLabel;
	UIImage* _transportImage;
	UILabel* _transportNameLabel;
	NSString* _actionType;
	CNAvatarViewController* _avatarViewController;
	UIImageView* _transportImageView;
	UIView* _transportView;
	UIVisualEffectView* _primaryVisualEffectView;
	UIVisualEffectView* _secondaryVisualEffectView;
	NSLayoutConstraint* _avatarContentViewHeightLayoutConstraint;
	NSLayoutConstraint* _contactNameLabelBaselineLayoutConstraint;
	NSLayoutConstraint* _transportNameLabelBaselineLayoutConstraint;
	NSLayoutConstraint* _transportNameLabelLeadingLayoutConstraint;

}

@property (nonatomic,retain) UILabel * contactNameLabel;                                                                       //@synthesize contactNameLabel=_contactNameLabel - In the implementation block
@property (nonatomic,retain) UIImageView * transportImageView;                                                                 //@synthesize transportImageView=_transportImageView - In the implementation block
@property (nonatomic,retain) UILabel * transportNameLabel;                                                                     //@synthesize transportNameLabel=_transportNameLabel - In the implementation block
@property (nonatomic,retain) UIView * transportView;                                                                           //@synthesize transportView=_transportView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * primaryVisualEffectView;                                                     //@synthesize primaryVisualEffectView=_primaryVisualEffectView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * secondaryVisualEffectView;                                                   //@synthesize secondaryVisualEffectView=_secondaryVisualEffectView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * avatarContentViewHeightLayoutConstraint;                                     //@synthesize avatarContentViewHeightLayoutConstraint=_avatarContentViewHeightLayoutConstraint - In the implementation block
@property (nonatomic,readonly) double avatarContentViewHeightLayoutConstraintConstant; 
@property (nonatomic,readonly) double contactNameLabelBaselineLayoutConstraintConstant; 
@property (nonatomic,retain) NSLayoutConstraint * contactNameLabelBaselineLayoutConstraint;                                    //@synthesize contactNameLabelBaselineLayoutConstraint=_contactNameLabelBaselineLayoutConstraint - In the implementation block
@property (nonatomic,readonly) double transportNameLabelBaselineLayoutConstraintConstant; 
@property (nonatomic,retain) NSLayoutConstraint * transportNameLabelBaselineLayoutConstraint;                                  //@synthesize transportNameLabelBaselineLayoutConstraint=_transportNameLabelBaselineLayoutConstraint - In the implementation block
@property (nonatomic,readonly) double transportNameLabelLeadingLayoutConstraintConstant; 
@property (nonatomic,retain) NSLayoutConstraint * transportNameLabelLeadingLayoutConstraint;                                   //@synthesize transportNameLabelLeadingLayoutConstraint=_transportNameLabelLeadingLayoutConstraint - In the implementation block
@property (assign,getter=isContentViewLoaded,nonatomic) BOOL contentViewLoaded;                                                //@synthesize contentViewLoaded=_contentViewLoaded - In the implementation block
@property (assign,getter=isContentViewLayoutConstraintsLoaded,nonatomic) BOOL contentViewLayoutConstraintsLoaded;              //@synthesize contentViewLayoutConstraintsLoaded=_contentViewLayoutConstraintsLoaded - In the implementation block
@property (nonatomic,readonly) UIView * avatarContentView;                                                                     //@synthesize avatarContentView=_avatarContentView - In the implementation block
@property (nonatomic,retain) UIImage * transportImage;                                                                         //@synthesize transportImage=_transportImage - In the implementation block
@property (nonatomic,copy) NSString * actionType;                                                                              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) CNAvatarViewController * avatarViewController;                                                    //@synthesize avatarViewController=_avatarViewController - In the implementation block
+(id)imageForActionType:(id)arg1 ;
+(id)reuseIdentifier;
+(BOOL)requiresConstraintBasedLayout;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(CNAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNAvatarViewController *)arg1 ;
-(void)loadContentView;
-(void)updateConstraintsConstants;
-(void)commonInit;
-(void)updateConstraints;
-(BOOL)isContentViewLoaded;
-(void)updateFonts;
-(void)setPrimaryVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)primaryVisualEffectView;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTransportImage:(UIImage *)arg1 ;
-(UIView *)avatarContentView;
-(UIImageView *)transportImageView;
-(BOOL)isContentViewLayoutConstraintsLoaded;
-(void)loadContentViewLayoutConstraints;
-(double)avatarContentViewHeightLayoutConstraintConstant;
-(NSLayoutConstraint *)avatarContentViewHeightLayoutConstraint;
-(double)contactNameLabelBaselineLayoutConstraintConstant;
-(NSLayoutConstraint *)contactNameLabelBaselineLayoutConstraint;
-(double)transportNameLabelBaselineLayoutConstraintConstant;
-(NSLayoutConstraint *)transportNameLabelBaselineLayoutConstraint;
-(double)transportNameLabelLeadingLayoutConstraintConstant;
-(NSLayoutConstraint *)transportNameLabelLeadingLayoutConstraint;
-(UILabel *)contactNameLabel;
-(UILabel *)transportNameLabel;
-(void)handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setContactNameLabel:(UILabel *)arg1 ;
-(UIImage *)transportImage;
-(void)setTransportNameLabel:(UILabel *)arg1 ;
-(void)setTransportImageView:(UIImageView *)arg1 ;
-(UIView *)transportView;
-(void)setTransportView:(UIView *)arg1 ;
-(UIVisualEffectView *)secondaryVisualEffectView;
-(void)setSecondaryVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setAvatarContentViewHeightLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContactNameLabelBaselineLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTransportNameLabelBaselineLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTransportNameLabelLeadingLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewLoaded:(BOOL)arg1 ;
-(void)setContentViewLayoutConstraintsLoaded:(BOOL)arg1 ;
@end

