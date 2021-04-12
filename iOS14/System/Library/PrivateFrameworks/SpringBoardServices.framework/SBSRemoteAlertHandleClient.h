/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/


@protocol SBSRemoteAlertHandleClient <NSObject>
@required
-(void)invalidateRemoteAlertHandle:(id)arg1;
-(id)remoteAlertHandlesForDefinition:(id)arg1 allowsCreation:(BOOL)arg2 configurationContext:(id)arg3;
-(void)activateRemoteAlertHandle:(id)arg1 withContext:(id)arg2;
-(id)createRemoteAlertHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;

@end

