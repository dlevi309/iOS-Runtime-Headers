/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)toggleState;
-(void)prepareForReuse;
-(void)setToggleButton:(UIButton *)arg1 ;
-(void)setDelegate:(id<HUToggleSectionHeaderDelegate>)arg1 ;
-(UIButton *)toggleButton;
-(void)_toggle:(id)arg1 ;
-(void)setToggleState:(unsigned long long)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)toggleButtonHidden;
-(void)setToggleButtonHidden:(BOOL)arg1 ;
@end

