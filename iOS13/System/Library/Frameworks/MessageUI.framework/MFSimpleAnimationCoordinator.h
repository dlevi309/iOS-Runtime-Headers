/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSMutableArray;

@interface MFSimpleAnimationCoordinator : NSObject {

	BOOL _animated;
	NSMutableArray* _animations;
	NSMutableArray* _completions;

}

@property (nonatomic,retain) NSMutableArray * animations;                  //@synthesize animations=_animations - In the implementation block
@property (nonatomic,retain) NSMutableArray * completions;                 //@synthesize completions=_completions - In the implementation block
@property (assign,getter=isAnimated,nonatomic) BOOL animated;              //@synthesize animated=_animated - In the implementation block
-(id)init;
-(NSMutableArray *)animations;
-(void)setAnimations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
-(BOOL)isAnimated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)animateAlongsideAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initCoordinatorAnimated:(BOOL)arg1 ;
-(void)playAnimations;
-(void)playCompletions:(BOOL)arg1 ;
@end

