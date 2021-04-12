/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_prototypingSettingDidChange;
-(_UIPrototypingValue *)prototypingSetting;
-(void)setPrototypingSetting:(_UIPrototypingValue *)arg1 ;
@end

