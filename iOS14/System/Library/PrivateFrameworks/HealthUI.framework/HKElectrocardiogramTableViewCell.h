/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class HKElectrocardiogramCardView, NSLayoutConstraint, HKElectrocardiogram;

@interface HKElectrocardiogramTableViewCell : UITableViewCell {

	BOOL _bottomPaddingDisabled;
	HKElectrocardiogramCardView* _cardView;
	NSLayoutConstraint* _bottomPaddingConstraint;

}

@property (nonatomic,retain) HKElectrocardiogramCardView * cardView;                    //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomPaddingConstraint;              //@synthesize bottomPaddingConstraint=_bottomPaddingConstraint - In the implementation block
@property (nonatomic,retain) HKElectrocardiogram * sample; 
@property (assign,nonatomic) BOOL bottomPaddingDisabled;                                //@synthesize bottomPaddingDisabled=_bottomPaddingDisabled - In the implementation block
+(double)estimatedHeight;
+(id)defaultReuseIdentifier;
-(void)_setupConstraints;
-(HKElectrocardiogram *)sample;
-(void)prepareForReuse;
-(HKElectrocardiogramCardView *)cardView;
-(void)setSample:(HKElectrocardiogram *)arg1 ;
-(void)setCardView:(HKElectrocardiogramCardView *)arg1 ;
-(void)_setupUIWithSample:(id)arg1 dateCache:(id)arg2 onboarding:(BOOL)arg3 activeAlgorithmVersion:(long long)arg4 ;
-(void)setActiveAlgorithmVersion:(long long)arg1 ;
-(NSLayoutConstraint *)bottomPaddingConstraint;
-(void)setBottomPaddingConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithSample:(id)arg1 dateCache:(id)arg2 onboarding:(BOOL)arg3 activeAlgorithmVersion:(long long)arg4 ;
-(void)setBottomPaddingDisabled:(BOOL)arg1 ;
-(BOOL)bottomPaddingDisabled;
@end

