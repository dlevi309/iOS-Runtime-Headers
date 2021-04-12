/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface GameCenterUI.EmptyStateView : UIView {

	 imageView;
	 primaryLabel;
	 secondaryLabel;
	 button;
	 disabled;
	 imageType;
	 addFriendsHandler;

}

@property (copy,nonatomic) id addFriendsHandler; 
+(id)addAdditionalFriendsEmptyStateView;
+(id)addFriendsEmptyStateView;
-(id)initWithFrame:(CGRect)arg1 ;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(void)setAddFriendsHandler:(id)arg1 ;
-(id)addFriendsHandler;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)didTapButton:(id)arg1 ;
@end

