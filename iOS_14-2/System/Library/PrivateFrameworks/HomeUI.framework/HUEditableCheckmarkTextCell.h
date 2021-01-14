/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>
#import <libobjc.A.dylib/HUEditableTextCellProtocol.h>

@protocol HUEditableCheckmarkDelegate;
@class UITextField, UIView, HFItem, HUCheckmarkAccessoryView, NSArray, UITapGestureRecognizer, NSString;

@interface HUEditableCheckmarkTextCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUEditableTextCellProtocol> {

	BOOL _disabled;
	BOOL _disableCheckmark;
	BOOL _isChecked;
	BOOL _allowCheckmarkSelectionWhileDisabled;
	UIView* _accessoryView;
	UITextField* _textField;
	HFItem* _item;
	HUCheckmarkAccessoryView* _checkmarkView;
	id<HUEditableCheckmarkDelegate> _delegate;
	NSArray* _staticConstraints;
	NSArray* _dynamicConstraints;
	UITapGestureRecognizer* _checkmarkTapRecognizer;

}

@property (nonatomic,retain) HUCheckmarkAccessoryView * checkmarkView;                         //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,retain) NSArray * staticConstraints;                                      //@synthesize staticConstraints=_staticConstraints - In the implementation block
@property (nonatomic,retain) NSArray * dynamicConstraints;                                     //@synthesize dynamicConstraints=_dynamicConstraints - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * checkmarkTapRecognizer;                  //@synthesize checkmarkTapRecognizer=_checkmarkTapRecognizer - In the implementation block
@property (assign,nonatomic) BOOL disableCheckmark;                                            //@synthesize disableCheckmark=_disableCheckmark - In the implementation block
@property (assign,setter=setChecked:,nonatomic) BOOL isChecked;                                //@synthesize isChecked=_isChecked - In the implementation block
@property (assign,nonatomic) BOOL allowCheckmarkSelectionWhileDisabled;                        //@synthesize allowCheckmarkSelectionWhileDisabled=_allowCheckmarkSelectionWhileDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<HUEditableCheckmarkDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                                        //@synthesize textField=_textField - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDisabled:(BOOL)arg1 ;
-(HUCheckmarkAccessoryView *)checkmarkView;
-(void)setCheckmarkView:(HUCheckmarkAccessoryView *)arg1 ;
-(id<HUEditableCheckmarkDelegate>)delegate;
-(id)accessoryView;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setAccessoryView:(id)arg1 ;
-(BOOL)isDisabled;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(void)setDelegate:(id<HUEditableCheckmarkDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(UITextField *)textField;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_checkmarkTapped:(id)arg1 ;
-(void)setDisableCheckmark:(BOOL)arg1 ;
-(void)setAllowCheckmarkSelectionWhileDisabled:(BOOL)arg1 ;
-(void)setDynamicConstraints:(NSArray *)arg1 ;
-(UITapGestureRecognizer *)checkmarkTapRecognizer;
-(BOOL)allowCheckmarkSelectionWhileDisabled;
-(BOOL)disableCheckmark;
-(NSArray *)staticConstraints;
-(void)setStaticConstraints:(NSArray *)arg1 ;
-(NSArray *)dynamicConstraints;
-(void)setCheckmarkTapRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

