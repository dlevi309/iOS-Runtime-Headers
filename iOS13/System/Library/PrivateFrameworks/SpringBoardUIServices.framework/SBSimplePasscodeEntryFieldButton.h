/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIView;

@interface SBSimplePasscodeEntryFieldButton : UIView {

	BOOL _useLightStyle;
	BOOL _revealed;
	UIEdgeInsets _paddingOutsideRing;
	UIColor* _color;
	UIView* _ringView;

}
-(void)layoutSubviews;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 delay:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 paddingOutsideRing:(UIEdgeInsets)arg2 useLightStyle:(BOOL)arg3 ;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

