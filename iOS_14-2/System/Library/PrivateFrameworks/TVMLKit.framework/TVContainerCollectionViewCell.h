/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@interface TVContainerCollectionViewCell : UICollectionViewCell {

	BOOL _pressIsAnimating;
	BOOL _unpressOnEndAnimating;
	BOOL _allowsFocus;
	BOOL _selectSubviews;

}

@property (assign,nonatomic) BOOL allowsFocus;                 //@synthesize allowsFocus=_allowsFocus - In the implementation block
@property (assign,nonatomic) BOOL selectSubviews;              //@synthesize selectSubviews=_selectSubviews - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)allowsFocus;
-(void)setAllowsFocus:(BOOL)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)_clearPressState;
-(void)_showPressState;
-(void)setSelectSubviews:(BOOL)arg1 ;
-(void)setFocused:(BOOL)arg1 animated:(BOOL)arg2 context:(id)arg3 coordinator:(id)arg4 ;
-(BOOL)selectSubviews;
@end

