/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)avatarViews;
-(void)setAvatarViews:(NSArray *)arg1 ;
-(void)beginAnimation;
-(void)setShouldStopAnimation:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CKTextBalloonView *)balloonView;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBalloonView:(CKTextBalloonView *)arg1 ;
-(id)balloonText;
-(CNSharingProfileAvatarItemProviderConfiguration *)avatarItemProviderConfiguration;
-(NSArray *)senderStrings;
-(void)setAvatarItemProvider:(CKCNSharingProfileAvatarItemProvider *)arg1 ;
-(CKCNSharingProfileAvatarItemProvider *)avatarItemProvider;
-(id)imageForAvatarType:(long long)arg1 ;
-(id)senderStringForAvatarType:(long long)arg1 ;
-(void)setSenderStrings:(NSArray *)arg1 ;
-(void)updateBalloonTraitCollection;
-(void)avatarDidFinishTransitionToAvatarAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldStopAnimation;
-(id)flipAnimation;
-(void)runFlipAnimationOnAvatarView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSenderLabelVisible:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithContact:(id)arg1 avatarRecord:(id)arg2 ;
-(void)setSenderLabel:(UILabel *)arg1 ;
-(UILabel *)senderLabel;
@end

