/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UIButton;

@interface WGWidgetListEditViewTableViewCell : UITableViewCell {

	UIImageView* _dotImageView;
	BOOL _widgetEnabled;
	BOOL _showsDot;
	UIButton* _insertWidgetAccessoryButton;

}

@property (assign,getter=isWidgetEnabled,nonatomic) BOOL widgetEnabled;                    //@synthesize widgetEnabled=_widgetEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsDot;                                                //@synthesize showsDot=_showsDot - In the implementation block
@property (nonatomic,__weak,readonly) UIButton * insertWidgetAccessoryButton;              //@synthesize insertWidgetAccessoryButton=_insertWidgetAccessoryButton - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setWidgetEnabled:(BOOL)arg1 ;
-(void)setShowsDot:(BOOL)arg1 ;
-(BOOL)showsDot;
-(BOOL)isWidgetEnabled;
-(UIButton *)insertWidgetAccessoryButton;
@end

