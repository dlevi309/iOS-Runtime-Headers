/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didEnd;
-(void)didMove;
-(id)init;
-(BOOL)hasLifted;
-(id)description;
-(void)setHasLifted:(BOOL)arg1 ;
-(BOOL)hasBeganDroppingInto;
-(BOOL)hasBeganCancelling;
-(void)didCompleteCancelling;
-(void)willBeginCancelling;
-(void)didCompleteDropping;
-(void)didBeginCancelling;
-(void)didBeginDropping;
-(void)didCompleteLift;
-(BOOL)enrouteToOrReachedTerminalState;
-(void)didBeginLift;
-(void)didBeginDroppingInto;
-(void)setHasBeganCancelling:(BOOL)arg1 ;
-(long long)appearance;
-(void)setDragState:(int)arg1 ;
-(int)dragState;
@end

