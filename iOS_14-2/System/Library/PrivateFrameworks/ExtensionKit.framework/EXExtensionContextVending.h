/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/ExtensionKit
*/


@protocol EXExtensionContextVending <NSObject>
@required
-(void)_beginRequestWithExtensionItems:(id)arg1 listenerEndpoint:(id)arg2 withContextUUID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)_hostDidEnterBackgroundForContextUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)_hostWillResignActiveForContextUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)_hostDidBecomeActiveForContextUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)_hostWillEnterForegroundForContextUUID:(id)arg1 completion:(/*^block*/id)arg2;

@end

