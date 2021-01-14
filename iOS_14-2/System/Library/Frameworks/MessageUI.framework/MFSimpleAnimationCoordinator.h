/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAnimated;
-(NSMutableArray *)animations;
-(void)setAnimated:(BOOL)arg1 ;
-(id)init;
-(void)animateAlongsideAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAnimations:(NSMutableArray *)arg1 ;
-(id)initCoordinatorAnimated:(BOOL)arg1 ;
-(void)playAnimations;
-(void)playCompletions:(BOOL)arg1 ;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
@end

