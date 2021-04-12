/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/

@class NSDictionary;


@protocol PKCorePlugInProtocol
@property (copy) NSDictionary * _userInfo; 
@required
-(NSDictionary *)_userInfo;
-(void)set_userInfo:(id)arg1;
-(void)prepareUsingPlugIn:(id)arg1 hostProtocol:(id)arg2 reply:(/*^block*/id)arg3;
-(void)prepareUsing:(id)arg1 reply:(/*^block*/id)arg2;
-(void)beginUsingPlugIn:(id)arg1 ready:(/*^block*/id)arg2;
-(void)hostHasControl;
-(void)shutdownPlugIn;
-(void)prefsObjectForKey:(id)arg1 inPlugIn:(id)arg2 result:(/*^block*/id)arg3;
-(void)prefsSetObject:(id)arg1 forKey:(id)arg2 inPlugIn:(id)arg3 result:(/*^block*/id)arg4;

@end

