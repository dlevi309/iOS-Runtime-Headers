/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol CKNicknameBannerViewDelegate;
@class NSArray, UITextView, NSDictionary, UIVisualEffectView, CKAvatarView, UIView, UIImageView, UIButton, NSString;

@interface CKNicknameBannerView : UIView <UITextViewDelegate> {

	BOOL _useNamedTitles;
	BOOL _useNamedSubtitles;
	BOOL _inUpdatesMode;
	id<CKNicknameBannerViewDelegate> _delegate;
	unsigned long long _style;
	NSArray* _nicknameUpdates;
	UITextView* _titleLabel;
	UITextView* _subtitleLabel;
	NSDictionary* _contactMap;
	UIVisualEffectView* _blurView;
	CKAvatarView* _avatarView;
	CKAvatarView* _secondaryAvatarView;
	UIView* _avatarCutoutView;
	UIImageView* _contactsIconView;
	UIButton* _cancelButton;

}

@property (assign,nonatomic) unsigned long long style;                               //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSArray * nicknameUpdates;                              //@synthesize nicknameUpdates=_nicknameUpdates - In the implementation block
@property (nonatomic,retain) NSDictionary * contactMap;                              //@synthesize contactMap=_contactMap - In the implementation block
@property (assign,nonatomic) BOOL useNamedTitles;                                    //@synthesize useNamedTitles=_useNamedTitles - In the implementation block
@property (assign,nonatomic) BOOL inUpdatesMode;                                     //@synthesize inUpdatesMode=_inUpdatesMode - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                          //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) CKAvatarView * avatarView;                              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) CKAvatarView * secondaryAvatarView;                     //@synthesize secondaryAvatarView=_secondaryAvatarView - In the implementation block
@property (nonatomic,retain) UIView * avatarCutoutView;                              //@synthesize avatarCutoutView=_avatarCutoutView - In the implementation block
@property (nonatomic,retain) UIImageView * contactsIconView;                         //@synthesize contactsIconView=_contactsIconView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UITextView * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UITextView * subtitleLabel;                             //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) id<CKNicknameBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL useNamedSubtitles;                               //@synthesize useNamedSubtitles=_useNamedSubtitles - In the implementation block
@property (nonatomic,readonly) double titleLabelAlignmentX; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CKNicknameBannerViewDelegate>)delegate;
-(void)setDelegate:(id<CKNicknameBannerViewDelegate>)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)contactStore;
-(UITextView *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)layoutMargins;
-(void)setTitleLabel:(UITextView *)arg1 ;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(void)setSubtitleLabel:(UITextView *)arg1 ;
-(UITextView *)subtitleLabel;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)setupViews;
-(CKAvatarView *)avatarView;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setNicknameUpdates:(NSArray *)arg1 ;
-(void)setUseNamedTitles:(BOOL)arg1 ;
-(void)setInUpdatesMode:(BOOL)arg1 ;
-(BOOL)inUpdatesMode;
-(double)maxLabelWidthForSize:(CGSize)arg1 ;
-(void)setContactsIconView:(UIImageView *)arg1 ;
-(id)cancelGlyph;
-(void)_updateAvatarView;
-(void)_updateTitleLabel;
-(void)_updateSubtitleLabel;
-(CKAvatarView *)secondaryAvatarView;
-(UIView *)avatarCutoutView;
-(UIImageView *)contactsIconView;
-(double)titleLabelAlignmentX;
-(NSArray *)nicknameUpdates;
-(id)_avatarContactForUpdate:(id)arg1 ;
-(void)setSecondaryAvatarView:(CKAvatarView *)arg1 ;
-(void)setAvatarCutoutView:(UIView *)arg1 ;
-(id)createContactForOutgoingShare;
-(BOOL)useNamedTitles;
-(id)createContactFromNickname:(id)arg1 ;
-(id)nicknameController;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 updates:(id)arg3 useNamedTitles:(BOOL)arg4 inUpdatesMode:(BOOL)arg5 ;
-(BOOL)useNamedSubtitles;
-(NSDictionary *)contactMap;
-(void)setContactMap:(NSDictionary *)arg1 ;
@end

