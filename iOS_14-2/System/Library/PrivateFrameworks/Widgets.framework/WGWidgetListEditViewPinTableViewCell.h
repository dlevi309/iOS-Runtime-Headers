/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)startAnimating;
-(void)stopAnimating;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISwitch *)pinSwitch;
@end

