/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewCell.h>

@class UIStackView, UILabel, _UIPrototypingValue;

@interface _UIPrototypingMenuCell : UITableViewCell {

	UIStackView* _stackView;
	UILabel* _titleLabel;
	_UIPrototypingValue* _prototypingSetting;

}

@property (nonatomic,readonly) UIStackView * stackView;                             //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) _UIPrototypingValue * prototypingSetting;              //@synthesize prototypingSetting=_prototypingSetting - In the implementation block
+(long long)_layoutAxis;
-(UILabel *)titleLabel;
-(UIStackView *)stackView;
-(void)_prototypingSettingDidChange;
-(_UIPrototypingValue *)prototypingSetting;
-(void)setPrototypingSetting:(_UIPrototypingValue *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

