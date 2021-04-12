/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView;

@interface PKContentHostTableViewCell : UITableViewCell {

	UIView* _hostedContentView;

}

@property (nonatomic,retain) UIView * hostedContentView;              //@synthesize hostedContentView=_hostedContentView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHostedContentView:(UIView *)arg1 ;
-(UIView *)hostedContentView;
@end

