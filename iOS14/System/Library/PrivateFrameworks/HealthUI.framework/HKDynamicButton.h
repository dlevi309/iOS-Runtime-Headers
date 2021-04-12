/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSLayoutConstraint;

@interface HKDynamicButton : UIButton {

	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
-(CGSize)intrinsicContentSize;
-(NSLayoutConstraint *)heightConstraint;
-(void)_updateForCurrentSizeCategory;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(double)_buttonLabelHeight;
@end

