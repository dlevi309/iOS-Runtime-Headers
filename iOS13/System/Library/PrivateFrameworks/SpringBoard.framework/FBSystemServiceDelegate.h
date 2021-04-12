/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol FBSystemServiceDelegate <NSObject>
@optional
-(void)systemService:(id)arg1 prepareForShutdownWithOptions:(id)arg2 origin:(id)arg3;
-(void)systemServicePrepareForShutdown:(id)arg1 withOptions:(unsigned long long)arg2;
-(void)systemServicePrepareForShutdown:(id)arg1 andReboot:(BOOL)arg2;
-(void)systemServicePrepareForExit:(id)arg1 andRelaunch:(BOOL)arg2;
-(void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 options:(id)arg3 origin:(id)arg4 withResult:(/*^block*/id)arg5;
-(void)systemService:(id)arg1 handleOpenURLRequest:(id)arg2 application:(id)arg3 options:(id)arg4 origin:(id)arg5 withResult:(/*^block*/id)arg6;
-(void)systemService:(id)arg1 isPasscodeLockedOrBlockedWithResult:(/*^block*/id)arg2;
-(void)systemService:(id)arg1 handleActions:(id)arg2 origin:(id)arg3 withResult:(/*^block*/id)arg4;
-(void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(/*^block*/id)arg3;
-(id)systemServiceApplicationInfoProvider:(id)arg1;

@end

