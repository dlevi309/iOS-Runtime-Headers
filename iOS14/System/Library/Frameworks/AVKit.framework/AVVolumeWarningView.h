/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIViewPropertyAnimator *)animator;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isStopping;
-(void)setStopping:(BOOL)arg1 ;
-(void)stopAnimatingAndRemoveFromSuperview;
-(void)continueAnimating;
-(void)startAnimating;
@end

