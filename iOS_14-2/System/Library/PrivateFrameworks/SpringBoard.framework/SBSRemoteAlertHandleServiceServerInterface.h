/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSRemoteAlertHandleServiceServerInterface
@required
-(oneway void)activateRemoteAlertHandleWithID:(id)arg1 activationContext:(id)arg2;
-(id)remoteAlertHandleContextsForDefinition:(id)arg1 allowsCreationValue:(id)arg2 configurationContext:(id)arg3;
-(id)createRemoteAlertHandleContextWithDefinition:(id)arg1 configurationContext:(id)arg2;
-(oneway void)invalidateRemoteAlertHandleWithID:(id)arg1;

@end

