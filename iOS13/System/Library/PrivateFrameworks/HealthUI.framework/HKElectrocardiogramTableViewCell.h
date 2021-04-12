/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)prepareForReuse;
-(void)setSample:(HKElectrocardiogram *)arg1 ;
-(HKElectrocardiogram *)sample;
-(HKElectrocardiogramCardView *)cardView;
-(void)setCardView:(HKElectrocardiogramCardView *)arg1 ;
-(void)_setupConstraints;
-(id)initWithSample:(id)arg1 dateCache:(id)arg2 onboarding:(BOOL)arg3 ;
-(void)setBottomPaddingDisabled:(BOOL)arg1 ;
-(void)_setupUIWithSample:(id)arg1 dateCache:(id)arg2 onboarding:(BOOL)arg3 ;
-(NSLayoutConstraint *)bottomPaddingConstraint;
-(void)setBottomPaddingConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)bottomPaddingDisabled;
@end

