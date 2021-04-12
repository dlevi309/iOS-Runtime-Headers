/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/

@class NSDictionary;


@protocol PKCorePlugInProtocol
@property (copy) NSDictionary * _userInfo; 
@required
-(void)prefsSetObject:(id)arg1 forKey:(id)arg2 inPlugIn:(id)arg3 result:(/*^block*/id)arg4;
-(void)prepareUsingPlugIn:(id)arg1 hostProtocol:(id)arg2 reply:(/*^block*/id)arg3;
-(void)prefsObjectForKey:(id)arg1 inPlugIn:(id)arg2 result:(/*^block*/id)arg3;
-(void)hostHasControl;
-(NSDictionary *)_userInfo;
-(void)shutdownPlugIn;
-(void)set_userInfo:(id)arg1;
-(void)beginUsingPlugIn:(id)arg1 ready:(/*^block*/id)arg2;
-(void)prepareUsing:(id)arg1 reply:(/*^block*/id)arg2;

@end

