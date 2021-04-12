/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class NSString;


@protocol ACMSystemInfoProtocol
@property (nonatomic,readonly) NSString * MACAddress; 
@property (nonatomic,readonly) NSString * IPAddress; 
@property (nonatomic,readonly) NSString * uniqueDeviceIdentifier; 
@property (nonatomic,readonly) NSString * deviceModel; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) BOOL isRunningOnModernMobileSystem; 
@property (nonatomic,readonly) BOOL isTouchIDAvailable; 
@property (nonatomic,readonly) BOOL isRetailDevice; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) BOOL isPreRelease; 
@required
-(NSString *)systemVersion;
-(NSString *)deviceModel;
-(NSString *)MACAddress;
-(NSString *)uniqueDeviceIdentifier;
-(NSString *)version;
-(NSString *)IPAddress;
-(BOOL)isTouchIDAvailable;
-(BOOL)isRetailDevice;
-(BOOL)isPreRelease;
-(BOOL)isRunningOnModernMobileSystem;

@end

