/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libobjc.A.dylib/ACMSystemInfoProtocol.h>

@class NSString;

@interface ACMSystemInfo : NSObject <ACMSystemInfoProtocol>

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
-(NSString *)systemVersion;
-(NSString *)deviceModel;
-(NSString *)MACAddress;
-(NSString *)uniqueDeviceIdentifier;
-(NSString *)version;
-(NSString *)IPAddress;
-(id)previousVersionUUID;
-(BOOL)isTouchIDAvailable;
-(BOOL)isRetailDevice;
-(BOOL)isPreRelease;
-(BOOL)isRunningOnModernMobileSystem;
@end

