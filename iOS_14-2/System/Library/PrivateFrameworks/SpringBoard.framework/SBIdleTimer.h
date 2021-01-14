/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBIdleTimer <NSObject,NSCopying,BSDescriptionProviding>
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled; 
@required
-(BOOL)isDisabled;
-(void)removeAllIdleTimerObservers;
-(void)addIdleTimerObserver:(id)arg1;
-(void)removeIdleTimerObserver:(id)arg1;
-(void)reset;

@end

