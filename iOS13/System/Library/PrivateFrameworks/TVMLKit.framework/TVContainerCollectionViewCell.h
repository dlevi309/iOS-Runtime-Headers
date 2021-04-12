/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)allowsFocus;
-(void)setAllowsFocus:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)_clearPressState;
-(void)_showPressState;
-(void)setSelectSubviews:(BOOL)arg1 ;
-(void)setFocused:(BOOL)arg1 animated:(BOOL)arg2 context:(id)arg3 coordinator:(id)arg4 ;
-(BOOL)selectSubviews;
@end

