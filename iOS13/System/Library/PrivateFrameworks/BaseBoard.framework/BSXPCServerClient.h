/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol BSXPCServerClient <NSObject>
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection; 
@required
-(void)invalidate;
-(void)resume;
-(void)suspend;
-(NSObject*<OS_xpc_object>)connection;

@end

