/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


#import <WorkflowUI/WorkflowUI-Structs.h>
@class POPAnimation, NSMutableArray, NSArray;

@interface POPAnimationTracer : NSObject {

	POPAnimation* _animation;
	POPAnimationState* _animationState;
	NSMutableArray* _events;
	BOOL _animationHasVelocity;
	BOOL _shouldLogAndResetOnCompletion;

}

@property (nonatomic,readonly) NSArray * allEvents; 
@property (nonatomic,readonly) NSArray * writeEvents; 
@property (assign,nonatomic) BOOL shouldLogAndResetOnCompletion;              //@synthesize shouldLogAndResetOnCompletion=_shouldLogAndResetOnCompletion - In the implementation block
-(void)stop;
-(void)start;
-(void)reset;
-(NSArray *)allEvents;
-(void)didStart;
-(id)initWithAnimation:(id)arg1 ;
-(void)updateFromValue:(id)arg1 ;
-(void)updateToValue:(id)arg1 ;
-(void)readPropertyValue:(id)arg1 ;
-(void)didReachToValue:(id)arg1 ;
-(void)updateVelocity:(id)arg1 ;
-(void)updateSpeed:(float)arg1 ;
-(void)updateBounciness:(float)arg1 ;
-(void)updateTension:(float)arg1 ;
-(void)updateFriction:(float)arg1 ;
-(void)updateMass:(float)arg1 ;
-(void)autoreversed;
-(void)writePropertyValue:(id)arg1 ;
-(void)didStop:(BOOL)arg1 ;
-(id)eventsWithType:(unsigned long long)arg1 ;
-(NSArray *)writeEvents;
-(BOOL)shouldLogAndResetOnCompletion;
-(void)setShouldLogAndResetOnCompletion:(BOOL)arg1 ;
@end

