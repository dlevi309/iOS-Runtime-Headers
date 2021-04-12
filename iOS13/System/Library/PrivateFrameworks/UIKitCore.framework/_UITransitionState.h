/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSDate;

@interface _UITransitionState : NSObject {

	long long _transitionDirection;
	/*^block*/id _completion;
	NSDate* _beginDate;

}

@property (nonatomic,readonly) long long transitionDirection;                       //@synthesize transitionDirection=_transitionDirection - In the implementation block
@property (nonatomic,readonly) long long effectiveTransitionDirection; 
@property (nonatomic,readonly) NSDate * beginDate;                                  //@synthesize beginDate=_beginDate - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
-(id)description;
-(BOOL)isActive;
-(id)initWithTransitionDirection:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)transitionDirection;
-(void)cleanupWithFinishedState:(BOOL)arg1 completedState:(BOOL)arg2 ;
-(BOOL)isCompatibleWithTransitionInDirection:(long long)arg1 ;
-(long long)effectiveTransitionDirection;
-(NSDate *)beginDate;
-(void)markBeginDate;
@end

