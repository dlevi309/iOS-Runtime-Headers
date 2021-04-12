/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString;

@interface TRDeviceSetupConnectAction : TRDeviceSetupAction

@property (nonatomic,copy,readonly) NSString * deviceName; 
@property (nonatomic,copy,readonly) NSString * networkSSID; 
@property (nonatomic,copy,readonly) NSString * networkPassword; 
-(id)init;
-(NSString *)deviceName;
-(NSString *)networkSSID;
-(NSString *)networkPassword;
-(id)initWithDeviceName:(id)arg1 networkSSID:(id)arg2 networkPassword:(id)arg3 ;
@end

