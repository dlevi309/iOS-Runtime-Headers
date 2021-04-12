/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <UIKitCore/UITableViewCell.h>

@class WGWidgetPinningTeachingAnimationView, UISwitch;

@interface WGWidgetListEditViewPinTableViewCell : UITableViewCell {

	WGWidgetPinningTeachingAnimationView* _pinImageView;
	UISwitch* _pinSwitch;

}

@property (nonatomic,readonly) UISwitch * pinSwitch;              //@synthesize pinSwitch=_pinSwitch - In the implementation block
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)startAnimating;
-(void)stopAnimating;
-(UISwitch *)pinSwitch;
@end

