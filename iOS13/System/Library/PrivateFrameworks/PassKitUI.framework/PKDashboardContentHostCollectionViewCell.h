/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UIView;

@interface PKDashboardContentHostCollectionViewCell : PKDashboardCollectionViewCell {

	UIView* _hostedContentView;

}

@property (nonatomic,retain) UIView * hostedContentView;              //@synthesize hostedContentView=_hostedContentView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHostedContentView:(UIView *)arg1 ;
-(UIView *)hostedContentView;
@end

