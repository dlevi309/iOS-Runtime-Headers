/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@protocol HUToggleSectionHeaderDelegate;
@class UIButton;

@interface HUToggleSectionHeader : UITableViewHeaderFooterView {

	unsigned long long _toggleState;
	id<HUToggleSectionHeaderDelegate> _delegate;
	UIButton* _toggleButton;

}

@property (nonatomic,retain) UIButton * toggleButton;                                        //@synthesize toggleButton=_toggleButton - In the implementation block
@property (assign,nonatomic) unsigned long long toggleState;                                 //@synthesize toggleState=_toggleState - In the implementation block
@property (assign,nonatomic,__weak) id<HUToggleSectionHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL toggleButtonHidden; 
-(id<HUToggleSectionHeaderDelegate>)delegate;
-(void)setDelegate:(id<HUToggleSectionHeaderDelegate>)arg1 ;
-(void)prepareForReuse;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(unsigned long long)toggleState;
-(void)setToggleState:(unsigned long long)arg1 ;
-(UIButton *)toggleButton;
-(void)setToggleButton:(UIButton *)arg1 ;
-(void)_toggle:(id)arg1 ;
-(BOOL)toggleButtonHidden;
-(void)setToggleButtonHidden:(BOOL)arg1 ;
@end

