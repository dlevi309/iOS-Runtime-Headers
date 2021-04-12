/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSUUID, NSString;


@protocol HMDWACDevice
@property (nonatomic,readonly) NSUUID * identifier; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSString * ssid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL isConfigured; 
@property (nonatomic,readonly) BOOL supportsAirPlay2; 
@property (nonatomic,readonly) id underlyingDevice; 
@required
-(NSString *)name;
-(NSUUID *)identifier;
-(NSString *)deviceID;
-(NSString *)ssid;
-(void)startConfigurationWithCompletionHandler:(/*^block*/id)arg1;
-(BOOL)isConfigured;
-(void)cancelConfigurationWithCompletionHandler:(/*^block*/id)arg1;
-(BOOL)supportsAirPlay2;
-(id)underlyingDevice;

@end

