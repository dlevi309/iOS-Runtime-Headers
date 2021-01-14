/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UIStackView.h>

@class UIVisualEffectView, UIView, UISwitch;

@interface CPSPermissionItemView : UIStackView {

	UIVisualEffectView* _switchWithLabelVisualEffectView;
	UIView* _switchWithLabelBackgroundView;
	UISwitch* _permissionSwitch;
	BOOL _blurEffectNeedsUpdate;
	BOOL _hasBlurEffect;

}

@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (assign,nonatomic) BOOL hasBlurEffect;               //@synthesize hasBlurEffect=_hasBlurEffect - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isOn;
-(id)init;
-(void)setOn:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setUpSwitchWithLabel:(id)arg1 ;
-(id)initWithTitle:(id)arg1 label:(id)arg2 description:(id)arg3 ;
-(void)setHasBlurEffect:(BOOL)arg1 ;
-(BOOL)hasBlurEffect;
@end

