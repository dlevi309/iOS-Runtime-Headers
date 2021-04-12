/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSRemoteAlertHandleClient <NSObject>
@required
-(id)remoteAlertHandlesForDefinition:(id)arg1 allowsCreation:(BOOL)arg2 configurationContext:(id)arg3;
-(id)createRemoteAlertHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;
-(void)activateRemoteAlertHandle:(id)arg1 withContext:(id)arg2;
-(void)invalidateRemoteAlertHandle:(id)arg1;

@end

