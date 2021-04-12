/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIBezierPath, UIColor;

@interface UIRoundedRectButton : UIButton {

	UIBezierPath* _fillPath;
	UIColor* _fillColor;

}
-(void)setTintColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_canDrawContent;
-(void)setBounds:(CGRect)arg1 ;
-(void)_updateState;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 fillColor:(id)arg2 ;
-(id)_contentBackgroundColor;
-(long long)buttonType;
-(void)_invalidatePaths;
-(void)setHighlighted:(BOOL)arg1 ;
@end

