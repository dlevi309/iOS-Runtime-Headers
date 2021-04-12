/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIView;

@interface HKViewTableViewCell : UITableViewCell {

	UIView* _hostedView;

}

@property (nonatomic,readonly) UIView * hostedView;              //@synthesize hostedView=_hostedView - In the implementation block
-(void)prepareForReuse;
-(void)setHostedView:(UIView *)arg1 ;
-(UIView *)hostedView;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_pinViewToContent:(id)arg1 ;
@end

