/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
*/

#import <VoiceShortcutsUI/VoiceShortcutsUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol VCActionDonation;
@class UIView;

@interface VCUIActionDonationCell : UITableViewCell {

	BOOL _showAppName;
	BOOL _dimmingIneligibleForPrediction;
	id<VCActionDonation> _donation;
	UIView* _cardView;

}

@property (assign,nonatomic,__weak) id<VCActionDonation> donation;              //@synthesize donation=_donation - In the implementation block
@property (assign,nonatomic) BOOL showAppName;                                  //@synthesize showAppName=_showAppName - In the implementation block
@property (assign,nonatomic) BOOL dimmingIneligibleForPrediction;               //@synthesize dimmingIneligibleForPrediction=_dimmingIneligibleForPrediction - In the implementation block
@property (assign,nonatomic,__weak) UIView * cardView;                          //@synthesize cardView=_cardView - In the implementation block
+(id)preferredReuseIdentifier;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)cardView;
-(void)setCardView:(UIView *)arg1 ;
-(id<VCActionDonation>)donation;
-(void)updateCardView;
-(void)configureWithDonation:(id)arg1 showingAppName:(BOOL)arg2 ;
-(void)configureWithDonation:(id)arg1 showingAppName:(BOOL)arg2 dimmingIneligibleForPrediction:(BOOL)arg3 ;
-(BOOL)_donationHasSubtitle:(id)arg1 ;
-(void)setDonation:(id<VCActionDonation>)arg1 ;
-(BOOL)showAppName;
-(void)setShowAppName:(BOOL)arg1 ;
-(BOOL)dimmingIneligibleForPrediction;
-(void)setDimmingIneligibleForPrediction:(BOOL)arg1 ;
@end

