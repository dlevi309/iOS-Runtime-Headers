/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface FIUIHostingAreaLayoutView : UIView {

	UIView* _hostedView;

}

@property (nonatomic,retain) UIView * hostedView;              //@synthesize hostedView=_hostedView - In the implementation block
+(id)viewHostingView:(id)arg1 ;
+(id)blackBackgroundViewHostingView:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)translatesAutoresizingMaskIntoConstraints;
-(void)setHostedView:(UIView *)arg1 ;
-(UIView *)hostedView;
@end

