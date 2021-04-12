/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBProcessState : NSObject <BSDescriptionProviding, NSCopying> {

	BOOL _running;
	BOOL _foreground;
	BOOL _debugging;
	int _pid;
	long long _taskState;
	long long _visibility;

}

@property (assign,nonatomic) int pid;                                            //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) long long taskState;                                //@synthesize taskState=_taskState - In the implementation block
@property (assign,nonatomic) long long visibility;                               //@synthesize visibility=_visibility - In the implementation block
@property (assign,getter=isDebugging,nonatomic) BOOL debugging;                  //@synthesize debugging=_debugging - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running;                    //@synthesize running=_running - In the implementation block
@property (getter=isForeground,nonatomic,readonly) BOOL foreground;              //@synthesize foreground=_foreground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVisibility:(long long)arg1 ;
-(BOOL)isRunning;
-(long long)visibility;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(long long)taskState;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithPid:(int)arg1 ;
-(BOOL)isDebugging;
-(void)setTaskState:(long long)arg1 ;
-(BOOL)isForeground;
-(void)setDebugging:(BOOL)arg1 ;
@end

