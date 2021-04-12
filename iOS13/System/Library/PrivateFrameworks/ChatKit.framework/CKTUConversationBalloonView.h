/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>

@class NSUUID, UIImageView, UILabel, UIButton, NSString;

@interface CKTUConversationBalloonView : CKColoredBalloonView {

	BOOL _animating;
	NSUUID* _tuConversationUUID;
	unsigned long long _state;
	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _statusLabel;
	UILabel* _durationLabel;
	UIButton* _joinButton;
	NSString* _joinButtonText_TestingOverride;

}

@property (assign,nonatomic) unsigned long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                          //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UILabel * durationLabel;                              //@synthesize durationLabel=_durationLabel - In the implementation block
@property (nonatomic,retain) UIButton * joinButton;                                //@synthesize joinButton=_joinButton - In the implementation block
@property (assign,nonatomic) BOOL animating;                                       //@synthesize animating=_animating - In the implementation block
@property (nonatomic,readonly) BOOL shouldRenderJoinButtonAsIcon; 
@property (nonatomic,copy) NSString * joinButtonText_TestingOverride;              //@synthesize joinButtonText_TestingOverride=_joinButtonText_TestingOverride - In the implementation block
@property (nonatomic,retain) NSUUID * tuConversationUUID;                          //@synthesize tuConversationUUID=_tuConversationUUID - In the implementation block
+(CGSize)facetimeIconSize;
+(id)facetimeImageForSize:(CGSize)arg1 ;
-(unsigned long long)state;
-(void)prepareForReuse;
-(void)setState:(unsigned long long)arg1 ;
-(char)color;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)prepareForDisplay;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)animating;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(void)_joinButtonTapped:(id)arg1 ;
-(void)setJoinButton:(UIButton *)arg1 ;
-(void)setDurationLabel:(UILabel *)arg1 ;
-(BOOL)shouldRenderJoinButtonAsIcon;
-(UILabel *)statusLabel;
-(UILabel *)durationLabel;
-(id)_joinButtonText;
-(UIButton *)joinButton;
-(void)_updateStatusLabelForDuration;
-(id)tuConversation;
-(void)configureForCurrentState;
-(NSUUID *)tuConversationUUID;
-(id)_joinStateStatusString;
-(id)_currentCall;
-(NSString *)joinButtonText_TestingOverride;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(BOOL)wantsGradient;
-(BOOL)joinButtonIsShowingImageContent;
-(BOOL)joinButtonIsShowingTextContent;
-(void)setTuConversationUUID:(NSUUID *)arg1 ;
-(void)setJoinButtonText_TestingOverride:(NSString *)arg1 ;
-(void)configureForTUConversationChatItem:(id)arg1 ;
@end

