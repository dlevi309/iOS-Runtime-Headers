/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CNAvatarView, CNContact, NSString, UILabel;

@interface PKAvatarHeaderView : UIView {

	CNAvatarView* _avatarView;
	CNContact* _contact;
	NSString* _counterpartHandle;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;

}

@property (nonatomic,copy) CNContact * contact;                       //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy) NSString * counterpartHandle;              //@synthesize counterpartHandle=_counterpartHandle - In the implementation block
@property (nonatomic,copy) UILabel * primaryLabel;                    //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,copy) UILabel * secondaryLabel;                  //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setCounterpartHandle:(NSString *)arg1 ;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(id)initWithContact:(id)arg1 counterpartHandle:(id)arg2 ;
-(UILabel *)primaryLabel;
-(void)configureForContact;
-(NSString *)counterpartHandle;
-(void)layoutSubviews;
-(CGSize)_layoutWithBounds:(CGRect)arg1 applyLayout:(BOOL)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(UILabel *)secondaryLabel;
@end

