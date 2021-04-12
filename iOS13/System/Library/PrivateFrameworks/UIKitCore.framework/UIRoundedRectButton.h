/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIBezierPath, UIColor;

@interface UIRoundedRectButton : UIButton {

	UIBezierPath* _fillPath;
	UIColor* _fillColor;

}
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(long long)buttonType;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)_canDrawContent;
-(id)initWithFrame:(CGRect)arg1 fillColor:(id)arg2 ;
-(void)_invalidatePaths;
-(void)_updateState;
-(id)_contentBackgroundColor;
@end

