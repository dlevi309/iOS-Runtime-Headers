/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface GameCenterUI.OverlappingPlayersView : UIView {

	 overlapPercentage;
	 playerViews;
	 playerSize;

}

@property (assign,nonatomic) double overlapPercentage; 
-(id)initWithFrame:(CGRect)arg1 ;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(void)prepareForReuse;
-(void)setOverlapPercentage:(double)arg1 ;
-(double)overlapPercentage;
-(void)layoutSubviews;
-(void)applyWithPlayerAvatars:(id)arg1 playerSize:(CGSize)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

