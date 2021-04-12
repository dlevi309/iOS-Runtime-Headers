/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UICollectionViewCellAppearanceState : NSObject {

	BOOL _hasLifted;
	BOOL _hasBeganCancelling;
	int _dragState;

}

@property (assign,nonatomic) int dragState;                                       //@synthesize dragState=_dragState - In the implementation block
@property (assign,nonatomic) BOOL hasLifted;                                      //@synthesize hasLifted=_hasLifted - In the implementation block
@property (assign,nonatomic) BOOL hasBeganCancelling;                             //@synthesize hasBeganCancelling=_hasBeganCancelling - In the implementation block
@property (nonatomic,readonly) long long appearance; 
@property (nonatomic,readonly) BOOL hasBeganDroppingInto; 
@property (nonatomic,readonly) BOOL enrouteToOrReachedTerminalState; 
-(id)init;
-(id)description;
-(void)didEnd;
-(long long)appearance;
-(BOOL)hasLifted;
-(void)didBeginLift;
-(void)didCompleteLift;
-(BOOL)enrouteToOrReachedTerminalState;
-(void)willBeginCancelling;
-(BOOL)hasBeganCancelling;
-(void)didCompleteCancelling;
-(void)didBeginCancelling;
-(BOOL)hasBeganDroppingInto;
-(void)didBeginDropping;
-(void)didCompleteDropping;
-(void)didBeginDroppingInto;
-(void)setDragState:(int)arg1 ;
-(void)setHasLifted:(BOOL)arg1 ;
-(void)setHasBeganCancelling:(BOOL)arg1 ;
-(int)dragState;
-(void)didMove;
@end

