/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(UIStatusBarLockItemView *)owner;
-(UIImageView *)bodyView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setOwner:(UIStatusBarLockItemView *)arg1 ;
-(void)reset;
-(UIImageView *)shackleView;
-(void)setBodyView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 owner:(id)arg2 ;
-(void)animateUnlockCompletionBlock:(/*^block*/id)arg1 ;
-(void)setShackleView:(UIImageView *)arg1 ;
-(void)jiggleCompletionBlock:(/*^block*/id)arg1 ;
@end

