/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface HKHostingAreaLayoutView : UIView {

	UIView* _hostedView;

}

@property (nonatomic,retain) UIView * hostedView;              //@synthesize hostedView=_hostedView - In the implementation block
+(id)viewHostingView:(id)arg1 ;
+(id)colorBackgroundViewHostingView:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)translatesAutoresizingMaskIntoConstraints;
-(void)setHostedView:(UIView *)arg1 ;
-(UIView *)hostedView;
@end

