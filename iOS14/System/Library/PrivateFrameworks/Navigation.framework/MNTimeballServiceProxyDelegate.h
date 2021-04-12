/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNTimeballServiceProxyDelegate <NSObject>
@required
-(void)invokeHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4;
-(void)completedUpdateForHandlerID:(id)arg1;
-(void)didReceiveError:(id)arg1 forDestination:(id)arg2;
-(void)didReceiveUpdate:(id)arg1 forDestination:(id)arg2;

@end

