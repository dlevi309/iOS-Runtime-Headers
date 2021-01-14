/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

@class NSString;


@protocol AVOutputDeviceDescription <NSObject>
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) long long deviceType; 
@property (nonatomic,readonly) long long deviceSubType; 
@property (nonatomic,readonly) BOOL isClusterLeader; 
@optional
-(BOOL)isClusterLeader;
-(long long)deviceType;
-(long long)deviceSubType;

@required
-(NSString *)deviceName;
-(NSString *)deviceID;

@end

