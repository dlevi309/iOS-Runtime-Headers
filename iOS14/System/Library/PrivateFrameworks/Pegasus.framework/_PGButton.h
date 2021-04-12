/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIButton.h>

@class PGButtonView;

@interface _PGButton : UIButton {

	PGButtonView* _buttonView;

}

@property (assign,nonatomic,__weak) PGButtonView * buttonView;              //@synthesize buttonView=_buttonView - In the implementation block
-(void)tintColorDidChange;
-(CGRect)hitRect;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setButtonView:(PGButtonView *)arg1 ;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(PGButtonView *)buttonView;
@end

