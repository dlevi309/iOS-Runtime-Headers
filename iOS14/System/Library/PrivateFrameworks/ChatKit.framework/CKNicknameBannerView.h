/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKUpdateBannerView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol CKNicknameBannerViewDelegate;
@class NSArray, UIButton, NSString;

@interface CKNicknameBannerView : CKUpdateBannerView <UITextViewDelegate> {

	id<CKNicknameBannerViewDelegate> _delegate;
	NSArray* _nicknameUpdates;
	UIButton* _updateButton;

}

@property (nonatomic,retain) NSArray * nicknameUpdates;                              //@synthesize nicknameUpdates=_nicknameUpdates - In the implementation block
@property (assign,nonatomic) id<CKNicknameBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * updateButton;                                //@synthesize updateButton=_updateButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contactStore;
-(id<CKNicknameBannerViewDelegate>)delegate;
-(UIEdgeInsets)layoutMargins;
-(void)setDelegate:(id<CKNicknameBannerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_updateAvatarView;
-(id)cancelGlyph;
-(void)setNicknameUpdates:(NSArray *)arg1 ;
-(NSArray *)nicknameUpdates;
-(UIButton *)updateButton;
-(id)_avatarContactForUpdate:(id)arg1 ;
-(id)createContactForOutgoingShare;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setUpdateButton:(UIButton *)arg1 ;
-(void)_updateSubtitleLabel;
-(void)overlayUpdateButtonOnSubtitleLinkAttribute;
-(void)updateButtonTapped:(id)arg1 ;
-(double)maxLabelWidthForSize:(CGSize)arg1 ;
-(double)titleLabelAlignmentX;
-(id)createContactFromNickname:(id)arg1 ;
-(id)setCatalystAttributedSubtitleTextBasedOnBannerStyle:(unsigned long long)arg1 ;
-(double)avatarViewAlignmentX;
-(id)setAttributedSubtitleTextBasedOnBannerStyle:(unsigned long long)arg1 withActionButtonString:(id)arg2 ;
-(id)nicknameController;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 updates:(id)arg3 useNamedTitles:(BOOL)arg4 inUpdatesMode:(BOOL)arg5 ;
-(void)_updateTitleLabel;
-(void)setupViews;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
@end

