/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIImageView, EKUILabeledAvatarView, UIView, NSArray, UIActivityIndicatorView;

@interface EKUIInviteesViewInviteesCell : UITableViewCell {

	BOOL _hideStatus;
	BOOL _showSpinner;
	UILabel* _nameLabel;
	UILabel* _commentLabel;
	UILabel* _optionalInviteeLabel;
	UIImageView* _statusImageView;
	EKUILabeledAvatarView* _contactAvatarView;
	UIView* _textContainerView;
	NSArray* _persistentConstraints;
	NSArray* _removableConstraints;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UILabel * nameLabel;                                    //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * commentLabel;                                 //@synthesize commentLabel=_commentLabel - In the implementation block
@property (nonatomic,retain) UILabel * optionalInviteeLabel;                         //@synthesize optionalInviteeLabel=_optionalInviteeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * statusImageView;                          //@synthesize statusImageView=_statusImageView - In the implementation block
@property (nonatomic,retain) EKUILabeledAvatarView * contactAvatarView;              //@synthesize contactAvatarView=_contactAvatarView - In the implementation block
@property (nonatomic,retain) UIView * textContainerView;                             //@synthesize textContainerView=_textContainerView - In the implementation block
@property (nonatomic,retain) NSArray * persistentConstraints;                        //@synthesize persistentConstraints=_persistentConstraints - In the implementation block
@property (nonatomic,retain) NSArray * removableConstraints;                         //@synthesize removableConstraints=_removableConstraints - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                      //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL showSpinner;                                       //@synthesize showSpinner=_showSpinner - In the implementation block
@property (assign) BOOL hideStatus;                                                  //@synthesize hideStatus=_hideStatus - In the implementation block
+(id)_nameLabelFont;
+(id)_commentLabelFont;
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setHideStatus:(BOOL)arg1 ;
-(void)updateWithParticipantForSorting:(id)arg1 ;
-(BOOL)showSpinner;
-(id)_statusImageViewSymbolConfiguration;
-(void)setStatusImageView:(UIImageView *)arg1 ;
-(void)setContactAvatarView:(EKUILabeledAvatarView *)arg1 ;
-(void)setTextContainerView:(UIView *)arg1 ;
-(UIView *)textContainerView;
-(void)setCommentLabel:(UILabel *)arg1 ;
-(void)setOptionalInviteeLabel:(UILabel *)arg1 ;
-(NSArray *)persistentConstraints;
-(EKUILabeledAvatarView *)contactAvatarView;
-(UILabel *)commentLabel;
-(UILabel *)optionalInviteeLabel;
-(void)setPersistentConstraints:(NSArray *)arg1 ;
-(NSArray *)removableConstraints;
-(void)setRemovableConstraints:(NSArray *)arg1 ;
-(void)setShowSpinner:(BOOL)arg1 ;
-(void)updateCommonElements:(id)arg1 statusImage:(id)arg2 ;
-(UIImageView *)statusImageView;
-(BOOL)hideStatus;
-(void)updateWithParticipantForSorting:(id)arg1 availabilityType:(long long)arg2 showSpinner:(BOOL)arg3 animated:(BOOL)arg4 ;
@end

