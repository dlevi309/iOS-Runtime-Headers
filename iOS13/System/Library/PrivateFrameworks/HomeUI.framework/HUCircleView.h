/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface HUCircleView : UIView {

	BOOL _backgroundColorFollowsTintColor;
	BOOL _borderColorFollowsTintColor;

}

@property (assign,nonatomic) BOOL backgroundColorFollowsTintColor;              //@synthesize backgroundColorFollowsTintColor=_backgroundColorFollowsTintColor - In the implementation block
@property (assign,nonatomic) BOOL borderColorFollowsTintColor;                  //@synthesize borderColorFollowsTintColor=_borderColorFollowsTintColor - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(BOOL)backgroundColorFollowsTintColor;
-(void)setBackgroundColorFollowsTintColor:(BOOL)arg1 ;
-(BOOL)borderColorFollowsTintColor;
-(void)setBorderColorFollowsTintColor:(BOOL)arg1 ;
@end

