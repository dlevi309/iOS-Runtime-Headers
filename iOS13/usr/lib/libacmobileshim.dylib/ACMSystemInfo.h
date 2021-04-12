/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)version;
-(NSString *)uniqueDeviceIdentifier;
-(NSString *)deviceModel;
-(NSString *)MACAddress;
-(NSString *)IPAddress;
-(id)previousVersionUUID;
-(BOOL)isTouchIDAvailable;
-(BOOL)isRetailDevice;
-(BOOL)isPreRelease;
-(BOOL)isRunningOnModernMobileSystem;
@end

