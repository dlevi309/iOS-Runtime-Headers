/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKTableViewCell.h>

@class UILabel, PKSuperscriptedCurrencyAmountLabel, UIImageView, PKActivityEventPeerPaymentTransaction, CNAvatarViewController, NSString;

@interface PKPeerPaymentActivitySummaryCell : PKTableViewCell {

	UILabel* _titleView;
	UILabel* _subtitleView;
	UILabel* _timeView;
	PKSuperscriptedCurrencyAmountLabel* _amountLabel;
	UIImageView* _unreadIndicatorView;
	PKActivityEventPeerPaymentTransaction* _event;
	CNAvatarViewController* _avatarViewController;
	NSString* _contactName;

}

@property (nonatomic,retain) PKActivityEventPeerPaymentTransaction * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) CNAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) NSString * contactName;                                     //@synthesize contactName=_contactName - In the implementation block
+(double)height;
+(id)unreadIndicatorImage;
+(double)separatorLeadingInset;
-(CNAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNAvatarViewController *)arg1 ;
-(NSString *)contactName;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(PKActivityEventPeerPaymentTransaction *)event;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEvent:(PKActivityEventPeerPaymentTransaction *)arg1 ;
-(void)_updateViews;
-(void)setContactName:(NSString *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

