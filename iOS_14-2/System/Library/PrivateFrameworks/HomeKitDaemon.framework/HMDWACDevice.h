/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)deviceID;
-(BOOL)isConfigured;
-(NSString *)ssid;
-(NSString *)name;
-(void)startConfigurationWithCompletionHandler:(/*^block*/id)arg1;
-(BOOL)supportsAirPlay2;
-(NSUUID *)identifier;
-(void)cancelConfigurationWithCompletionHandler:(/*^block*/id)arg1;
-(id)underlyingDevice;

@end

