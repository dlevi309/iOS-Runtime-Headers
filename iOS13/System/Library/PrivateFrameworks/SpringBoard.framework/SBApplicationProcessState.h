/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class FBApplicationProcess, FBProcessState;

@interface SBApplicationProcessState : NSObject {

	FBApplicationProcess* _process;
	FBProcessState* _processState;
	BOOL _isBeingDebugged;

}

@property (nonatomic,readonly) int pid; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
@property (nonatomic,readonly) long long taskState; 
@property (nonatomic,readonly) long long visibility; 
@property (nonatomic,readonly) BOOL isBeingDebugged; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isRunning;
-(long long)visibility;
-(int)pid;
-(long long)taskState;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isForeground;
-(BOOL)isBeingDebugged;
-(id)_initWithProcess:(id)arg1 stateSnapshot:(id)arg2 ;
@end

