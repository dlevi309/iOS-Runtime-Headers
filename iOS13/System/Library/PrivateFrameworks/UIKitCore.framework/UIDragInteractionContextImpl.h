/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDragInteractionContext.h>
#import <UIKit/UIDragAnimating.h>

@class NSArray, NSMutableArray, UITouch, NSString;

@interface UIDragInteractionContextImpl : NSObject <UIDragInteractionContext, UIDragAnimating> {

	BOOL _shouldAnimateLift;
	BOOL _preparedForLift;
	BOOL _hasBegunDrag;
	BOOL _dragDidBeginInDruid;
	NSMutableArray* _animationBlocks;
	NSMutableArray* _completionBlocks;
	long long _state;
	NSArray* _items;
	/*^block*/id _animations;
	/*^block*/id _completion;
	/*^block*/id __sessionDidBegin;
	long long _invocationType;
	UITouch* _initiationTouch;
	CGPoint _initialLocation;

}

@property (assign,nonatomic) long long state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSArray * items;                                            //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateLift;                                     //@synthesize shouldAnimateLift=_shouldAnimateLift - In the implementation block
@property (nonatomic,copy) id animations;                                                //@synthesize animations=_animations - In the implementation block
@property (nonatomic,copy) id completion;                                                //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id _sessionDidBegin;                                          //@synthesize _sessionDidBegin=__sessionDidBegin - In the implementation block
@property (assign,nonatomic) CGPoint initialLocation;                                    //@synthesize initialLocation=_initialLocation - In the implementation block
@property (assign,getter=isPreparedForLift,nonatomic) BOOL preparedForLift;              //@synthesize preparedForLift=_preparedForLift - In the implementation block
@property (assign,nonatomic) long long invocationType;                                   //@synthesize invocationType=_invocationType - In the implementation block
@property (nonatomic,retain) UITouch * initiationTouch;                                  //@synthesize initiationTouch=_initiationTouch - In the implementation block
@property (assign,nonatomic) BOOL hasBegunDrag;                                          //@synthesize hasBegunDrag=_hasBegunDrag - In the implementation block
@property (assign,nonatomic) BOOL dragDidBeginInDruid;                                   //@synthesize dragDidBeginInDruid=_dragDidBeginInDruid - In the implementation block
@property (nonatomic,readonly) NSMutableArray * animationBlocks;                         //@synthesize animationBlocks=_animationBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionBlocks;                        //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)state;
-(id)animations;
-(void)setAnimations:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(CGPoint)initialLocation;
-(void)setShouldAnimateLift:(BOOL)arg1 ;
-(NSMutableArray *)animationBlocks;
-(NSMutableArray *)completionBlocks;
-(BOOL)shouldAnimateLift;
-(void)_api_addCompletion:(/*^block*/id)arg1 ;
-(id)_sessionDidBegin;
-(void)set_sessionDidBegin:(id)arg1 ;
-(void)setInitialLocation:(CGPoint)arg1 ;
-(BOOL)isPreparedForLift;
-(void)setPreparedForLift:(BOOL)arg1 ;
-(long long)invocationType;
-(void)setInvocationType:(long long)arg1 ;
-(UITouch *)initiationTouch;
-(void)setInitiationTouch:(UITouch *)arg1 ;
-(BOOL)hasBegunDrag;
-(void)setHasBegunDrag:(BOOL)arg1 ;
-(BOOL)dragDidBeginInDruid;
-(void)setDragDidBeginInDruid:(BOOL)arg1 ;
@end

