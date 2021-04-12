/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSArray, CKTextBalloonView, CKCNSharingProfileAvatarItemProvider, CNContact, CNSharingProfileAvatarItemProviderConfiguration;

@interface CKNicknamePreviewView : UIView {

	BOOL _shouldStopAnimation;
	UILabel* _senderLabel;
	NSArray* _avatarViews;
	CKTextBalloonView* _balloonView;
	NSArray* _senderStrings;
	CKCNSharingProfileAvatarItemProvider* _avatarItemProvider;
	CNContact* _contact;

}

@property (nonatomic,retain) UILabel * senderLabel;                                                                            //@synthesize senderLabel=_senderLabel - In the implementation block
@property (nonatomic,retain) NSArray * avatarViews;                                                                            //@synthesize avatarViews=_avatarViews - In the implementation block
@property (nonatomic,retain) CKTextBalloonView * balloonView;                                                                  //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) NSArray * senderStrings;                                                                          //@synthesize senderStrings=_senderStrings - In the implementation block
@property (nonatomic,retain) CKCNSharingProfileAvatarItemProvider * avatarItemProvider;                                        //@synthesize avatarItemProvider=_avatarItemProvider - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                                              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNSharingProfileAvatarItemProviderConfiguration * avatarItemProviderConfiguration; 
@property (assign,nonatomic) BOOL shouldStopAnimation;                                                                         //@synthesize shouldStopAnimation=_shouldStopAnimation - In the implementation block
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)beginAnimation;
-(CNSharingProfileAvatarItemProviderConfiguration *)avatarItemProviderConfiguration;
-(CKTextBalloonView *)balloonView;
-(void)setBalloonView:(CKTextBalloonView *)arg1 ;
-(void)setSenderLabel:(UILabel *)arg1 ;
-(UILabel *)senderLabel;
-(id)initWithContact:(id)arg1 avatarRecord:(id)arg2 ;
-(void)setShouldStopAnimation:(BOOL)arg1 ;
-(void)setAvatarItemProvider:(CKCNSharingProfileAvatarItemProvider *)arg1 ;
-(CKCNSharingProfileAvatarItemProvider *)avatarItemProvider;
-(id)imageForAvatarType:(long long)arg1 ;
-(id)senderStringForAvatarType:(long long)arg1 ;
-(void)setAvatarViews:(NSArray *)arg1 ;
-(void)setSenderStrings:(NSArray *)arg1 ;
-(NSArray *)senderStrings;
-(void)updateBalloonTraitCollection;
-(id)balloonText;
-(NSArray *)avatarViews;
-(void)avatarDidFinishTransitionToAvatarAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldStopAnimation;
-(void)runFlipAnimationOnAvatarView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSenderLabelVisible:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)flipAnimation;
@end

