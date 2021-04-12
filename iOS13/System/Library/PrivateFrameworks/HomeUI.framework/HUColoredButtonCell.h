/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@protocol HUColoredButtonCellDelegate;
@class HFItem, UIColor, HUColoredButton, NSString;

@interface HUColoredButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _buttonColorFollowsTintColor;
	HFItem* _item;
	id<HUColoredButtonCellDelegate> _delegate;
	UIColor* _buttonBackgroundColor;
	HUColoredButton* _button;

}

@property (nonatomic,retain) HUColoredButton * button;                                         //@synthesize button=_button - In the implementation block
@property (assign,nonatomic,__weak) id<HUColoredButtonCellDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL buttonColorFollowsTintColor;                                 //@synthesize buttonColorFollowsTintColor=_buttonColorFollowsTintColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonBackgroundColor;                                  //@synthesize buttonBackgroundColor=_buttonBackgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
-(id<HUColoredButtonCellDelegate>)delegate;
-(void)setDelegate:(id<HUColoredButtonCellDelegate>)arg1 ;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)prepareForReuse;
-(BOOL)isDisabled;
-(HUColoredButton *)button;
-(void)tintColorDidChange;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)buttonPressed:(id)arg1 ;
-(void)setButton:(HUColoredButton *)arg1 ;
-(void)setButtonBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)buttonBackgroundColor;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)updateButtonColor;
-(void)setButtonColorFollowsTintColor:(BOOL)arg1 ;
-(BOOL)buttonColorFollowsTintColor;
@end

