/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(EKUILabeledAvatarView *)contactAvatarView;
-(UIActivityIndicatorView *)spinner;
-(void)setHideStatus:(BOOL)arg1 ;
-(void)updateWithParticipantForSorting:(id)arg1 ;
-(void)updateConstraints;
-(void)setTextContainerView:(UIView *)arg1 ;
-(id)_statusImageViewSymbolConfiguration;
-(UIView *)textContainerView;
-(void)setCommentLabel:(UILabel *)arg1 ;
-(void)setOptionalInviteeLabel:(UILabel *)arg1 ;
-(NSArray *)persistentConstraints;
-(UILabel *)commentLabel;
-(UILabel *)optionalInviteeLabel;
-(void)setPersistentConstraints:(NSArray *)arg1 ;
-(NSArray *)removableConstraints;
-(void)setRemovableConstraints:(NSArray *)arg1 ;
-(void)setShowSpinner:(BOOL)arg1 ;
-(void)updateCommonElements:(id)arg1 statusImage:(id)arg2 ;
-(UIImageView *)statusImageView;
-(void)setStatusImageView:(UIImageView *)arg1 ;
-(BOOL)hideStatus;
-(void)updateWithParticipantForSorting:(id)arg1 availabilityType:(long long)arg2 showSpinner:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)setContactAvatarView:(EKUILabeledAvatarView *)arg1 ;
-(UILabel *)nameLabel;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(BOOL)showSpinner;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

