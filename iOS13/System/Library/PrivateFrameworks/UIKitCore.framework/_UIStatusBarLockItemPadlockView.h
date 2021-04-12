/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIImageView, UIStatusBarLockItemView, NSString;

@interface _UIStatusBarLockItemPadlockView : UIView <CAAnimationDelegate> {

	UIImageView* _bodyView;
	UIImageView* _shackleView;
	/*^block*/id _completionBlock;
	UIStatusBarLockItemView* _owner;

}

@property (nonatomic,retain) UIImageView * bodyView;                              //@synthesize bodyView=_bodyView - In the implementation block
@property (nonatomic,retain) UIImageView * shackleView;                           //@synthesize shackleView=_shackleView - In the implementation block
@property (nonatomic,copy) id completionBlock;                                    //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic,__weak) UIStatusBarLockItemView * owner;              //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOwner:(UIStatusBarLockItemView *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)reset;
-(UIStatusBarLockItemView *)owner;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 owner:(id)arg2 ;
-(void)animateUnlockCompletionBlock:(/*^block*/id)arg1 ;
-(void)jiggleCompletionBlock:(/*^block*/id)arg1 ;
-(UIImageView *)bodyView;
-(void)setBodyView:(UIImageView *)arg1 ;
-(UIImageView *)shackleView;
-(void)setShackleView:(UIImageView *)arg1 ;
@end

