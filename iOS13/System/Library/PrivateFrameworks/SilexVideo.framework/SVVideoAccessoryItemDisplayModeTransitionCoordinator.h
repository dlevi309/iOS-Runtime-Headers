/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoAccessoryItemDisplayModeTransitioning.h>

@class NSMutableArray, UIViewPropertyAnimator, NSString;

@interface SVVideoAccessoryItemDisplayModeTransitionCoordinator : NSObject <SVVideoAccessoryItemDisplayModeTransitioning> {

	BOOL _animated;
	NSMutableArray* _alongsideBlocks;
	NSMutableArray* _completionBlocks;
	UIViewPropertyAnimator* _animator;

}

@property (nonatomic,readonly) BOOL animated;                                  //@synthesize animated=_animated - In the implementation block
@property (nonatomic,readonly) NSMutableArray * alongsideBlocks;               //@synthesize alongsideBlocks=_alongsideBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * animator;                //@synthesize animator=_animator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)animator;
-(BOOL)animated;
-(NSMutableArray *)completionBlocks;
-(void)cancelTransition;
-(void)animateWithContext:(id)arg1 ;
-(NSMutableArray *)alongsideBlocks;
-(void)animateAlongsideTransition:(/*^block*/id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)initWithAnimated:(BOOL)arg1 ;
@end

