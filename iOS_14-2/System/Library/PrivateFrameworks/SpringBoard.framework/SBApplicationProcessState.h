/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBApplicationProcess, FBProcessState, NSString;

@interface SBApplicationProcessState : NSObject <BSDescriptionProviding> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(int)pid;
-(long long)visibility;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)taskState;
-(BOOL)isBeingDebugged;
-(BOOL)isForeground;
-(NSString *)description;
-(id)_initWithProcess:(id)arg1 stateSnapshot:(id)arg2 ;
-(unsigned long long)hash;
-(BOOL)isRunning;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
@end

