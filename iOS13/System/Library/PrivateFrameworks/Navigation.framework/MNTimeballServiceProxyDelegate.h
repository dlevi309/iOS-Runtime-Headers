/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNTimeballServiceProxyDelegate <NSObject>
@required
-(void)invokeHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4;
-(void)completedUpdateForHandlerID:(id)arg1;
-(void)didReceiveError:(id)arg1 forDestination:(id)arg2;
-(void)didReceiveUpdate:(id)arg1 forDestination:(id)arg2;

@end

