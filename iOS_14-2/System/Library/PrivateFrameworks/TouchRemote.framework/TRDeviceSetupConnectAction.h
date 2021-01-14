/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString;

@interface TRDeviceSetupConnectAction : TRDeviceSetupAction

@property (nonatomic,copy,readonly) NSString * deviceName; 
@property (nonatomic,copy,readonly) NSString * networkSSID; 
@property (nonatomic,copy,readonly) NSString * networkPassword; 
-(NSString *)deviceName;
-(id)init;
-(NSString *)networkSSID;
-(NSString *)networkPassword;
-(id)initWithDeviceName:(id)arg1 networkSSID:(id)arg2 networkPassword:(id)arg3 ;
@end

