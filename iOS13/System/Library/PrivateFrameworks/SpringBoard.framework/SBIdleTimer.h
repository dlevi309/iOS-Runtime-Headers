/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBIdleTimer <NSObject,NSCopying,BSDescriptionProviding>
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled; 
@required
-(void)reset;
-(BOOL)isDisabled;
-(void)addIdleTimerObserver:(id)arg1;
-(void)removeIdleTimerObserver:(id)arg1;
-(void)removeAllIdleTimerObservers;

@end

