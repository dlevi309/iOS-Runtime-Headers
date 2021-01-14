/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class NSString;

@interface BSPlatform : NSObject

@property (nonatomic,copy,readonly) NSString * productType; 
@property (nonatomic,copy,readonly) NSString * productHardwareModel; 
@property (nonatomic,copy,readonly) NSString * productHardwareModelName; 
@property (nonatomic,copy,readonly) NSString * productClass; 
@property (nonatomic,copy,readonly) NSString * localizedProductName; 
@property (nonatomic,copy,readonly) NSString * operatingSystemName; 
@property (nonatomic,copy,readonly) NSString * uniqueDeviceIdentifier; 
@property (nonatomic,readonly) int deviceClass; 
@property (nonatomic,readonly) long long homeButtonType; 
@property (nonatomic,copy,readonly) NSString * productVersion; 
@property (nonatomic,copy,readonly) NSString * productBuildVersion; 
@property (getter=isInternalInstall,nonatomic,readonly) BOOL internalInstall; 
@property (getter=isDeveloperInstall,nonatomic,readonly) BOOL developerInstall; 
@property (getter=isCarrierInstall,nonatomic,readonly) BOOL carrierInstall; 
@property (getter=isMultiCore,nonatomic,readonly) BOOL multiCore; 
@property (nonatomic,readonly) BOOL hasGasGauge; 
@property (nonatomic,readonly) BOOL hasOrbCapability; 
+(id)sharedInstance;
-(long long)homeButtonType;
-(NSString *)localizedProductName;
-(BOOL)hasOrbCapability;
-(NSString *)productVersion;
-(NSString *)uniqueDeviceIdentifier;
-(NSString *)productClass;
-(NSString *)productBuildVersion;
-(NSString *)productType;
-(int)deviceClass;
-(NSString *)productHardwareModel;
-(BOOL)isDeveloperInstall;
-(BOOL)isCarrierInstall;
-(BOOL)isInternalInstall;
-(BOOL)isMultiCore;
-(NSString *)productHardwareModelName;
-(BOOL)hasGasGauge;
-(NSString *)operatingSystemName;
@end

