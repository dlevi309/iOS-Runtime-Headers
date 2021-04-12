/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIViewPropertyAnimator;

@interface AVVolumeWarningView : UIView {

	BOOL _stopping;
	UIViewPropertyAnimator* _animator;

}

@property (nonatomic,retain) UIViewPropertyAnimator * animator;              //@synthesize animator=_animator - In the implementation block
@property (assign,getter=isStopping,nonatomic) BOOL stopping;                //@synthesize stopping=_stopping - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)animator;
-(void)startAnimating;
-(BOOL)isStopping;
-(void)stopAnimatingAndRemoveFromSuperview;
-(void)continueAnimating;
-(void)setStopping:(BOOL)arg1 ;
@end

