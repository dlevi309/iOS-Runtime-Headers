/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIView;

@interface HKViewTableViewCell : UITableViewCell {

	UIView* _hostedView;

}

@property (nonatomic,readonly) UIView * hostedView;              //@synthesize hostedView=_hostedView - In the implementation block
-(void)prepareForReuse;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHostedView:(UIView *)arg1 ;
-(UIView *)hostedView;
-(void)_pinViewToContent:(id)arg1 ;
@end

