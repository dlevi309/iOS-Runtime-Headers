/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUEditableTextCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@protocol HUNameAndIconEditorCellDelegate;
@class HFItem, HUIconButton, UIView, UITextField, NSLayoutConstraint, UIFont, NSString;

@interface HUNameAndIconEditorCell : UITableViewCell <HUCellProtocol, HUEditableTextCellProtocol, HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _fullWidth;
	HFItem* _item;
	id<HUNameAndIconEditorCellDelegate> _delegate;
	HUIconButton* _iconButton;
	UIView* _containerView;
	UITextField* _textField;
	NSLayoutConstraint* _leftConstraint;
	NSLayoutConstraint* _rightConstraint;

}

@property (nonatomic,retain) UIView * containerView;                                           //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) HUIconButton * iconButton;                                        //@synthesize iconButton=_iconButton - In the implementation block
@property (nonatomic,retain) UITextField * textField;                                          //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftConstraint;                              //@synthesize leftConstraint=_leftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * rightConstraint;                             //@synthesize rightConstraint=_rightConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<HUNameAndIconEditorCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIFont * textFieldFont; 
@property (assign,nonatomic) BOOL fullWidth;                                                   //@synthesize fullWidth=_fullWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
-(id<HUNameAndIconEditorCellDelegate>)delegate;
-(void)setDelegate:(id<HUNameAndIconEditorCellDelegate>)arg1 ;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)prepareForReuse;
-(BOOL)isDisabled;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(UITextField *)textField;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setFullWidth:(BOOL)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
-(void)_setupConstraints;
-(HUIconButton *)iconButton;
-(void)setIconButton:(HUIconButton *)arg1 ;
-(UIFont *)textFieldFont;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(NSLayoutConstraint *)leftConstraint;
-(NSLayoutConstraint *)rightConstraint;
-(void)setLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextFieldFont:(UIFont *)arg1 ;
-(void)_handleIconButtonTap:(id)arg1 ;
-(void)_updateFullWidthAppearance;
-(BOOL)fullWidth;
-(void)_updateBackgroundColorsBasedOnTraitCollection;
@end

