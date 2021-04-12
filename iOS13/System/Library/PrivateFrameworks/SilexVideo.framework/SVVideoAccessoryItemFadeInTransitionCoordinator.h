/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoAccessoryItemTransitioning.h>

@class UIViewPropertyAnimator, NSString;

@interface SVVideoAccessoryItemFadeInTransitionCoordinator : NSObject <SVVideoAccessoryItemTransitioning> {

	UIViewPropertyAnimator* _animator;

}

@property (nonatomic,retain) UIViewPropertyAnimator * animator;              //@synthesize animator=_animator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL animated; 
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)animator;
-(BOOL)animated;
-(void)cancelTransition;
-(void)animateWithContext:(id)arg1 ;
@end

