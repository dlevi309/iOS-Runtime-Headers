/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface PGHitTestExtendableView : UIView {

	UIView* _hitTestExtenderView;

}

@property (assign,nonatomic,__weak) UIView * hitTestExtenderView;              //@synthesize hitTestExtenderView=_hitTestExtenderView - In the implementation block
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)hitTestExtenderView;
-(void)setHitTestExtenderView:(UIView *)arg1 ;
@end

