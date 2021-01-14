/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
-(void)_setupConstraints;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(id<HUNameAndIconEditorCellDelegate>)delegate;
-(void)setTextField:(UITextField *)arg1 ;
-(HFItem *)item;
-(void)setFullWidth:(BOOL)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(void)setDelegate:(id<HUNameAndIconEditorCellDelegate>)arg1 ;
-(UIView *)containerView;
-(BOOL)fullWidth;
-(UITextField *)textField;
-(void)setTextFieldFont:(UIFont *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(HUIconButton *)iconButton;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setIconButton:(HUIconButton *)arg1 ;
-(void)_handleIconButtonTap:(id)arg1 ;
-(void)_updateFullWidthAppearance;
-(NSLayoutConstraint *)leftConstraint;
-(NSLayoutConstraint *)rightConstraint;
-(UIFont *)textFieldFont;
-(void)setLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRightConstraint:(NSLayoutConstraint *)arg1 ;
@end

