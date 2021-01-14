/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@protocol PFLoggerBackend <NSObject>
@property (nonatomic,readonly) BOOL allowsConcurrentAccess; 
@property (nonatomic,readonly) BOOL formatsMessage; 
@property (nonatomic,readonly) BOOL outputsToDebuggerConsole; 
@required
-(void)flushWithCompletionHandler:(/*^block*/id)arg1;
-(BOOL)allowsConcurrentAccess;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char*)arg7;
-(BOOL)formatsMessage;
-(BOOL)outputsToDebuggerConsole;

@end

