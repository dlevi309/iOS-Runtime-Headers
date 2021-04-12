/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSRemoteAlertHandleServiceServerInterface
@required
-(id)remoteAlertHandleContextsForDefinition:(id)arg1 allowsCreationValue:(id)arg2 configurationContext:(id)arg3;
-(id)createRemoteAlertHandleContextWithDefinition:(id)arg1 configurationContext:(id)arg2;
-(oneway void)activateRemoteAlertHandleWithID:(id)arg1 activationContext:(id)arg2;
-(oneway void)invalidateRemoteAlertHandleWithID:(id)arg1;

@end

