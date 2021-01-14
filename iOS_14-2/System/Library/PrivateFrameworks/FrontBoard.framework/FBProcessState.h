/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(int)pid;
-(long long)visibility;
-(id)init;
-(void)setTaskState:(long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)taskState;
-(void)setVisibility:(long long)arg1 ;
-(BOOL)isForeground;
-(BOOL)isDebugging;
-(NSString *)description;
-(id)initWithPid:(int)arg1 ;
-(void)setDebugging:(BOOL)arg1 ;
-(BOOL)isRunning;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setPid:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

