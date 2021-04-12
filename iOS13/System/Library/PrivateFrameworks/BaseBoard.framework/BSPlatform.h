/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)operatingSystemName;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(BOOL)_isD22Emulator;
-(NSString *)productType;
-(NSString *)productHardwareModel;
-(NSString *)productHardwareModelName;
-(NSString *)productClass;
-(int)deviceClass;
-(long long)homeButtonType;
-(NSString *)localizedProductName;
-(NSString *)uniqueDeviceIdentifier;
-(BOOL)isInternalInstall;
-(BOOL)isDeveloperInstall;
-(BOOL)isCarrierInstall;
-(BOOL)isMultiCore;
-(BOOL)hasGasGauge;
-(BOOL)hasOrbCapability;
@end

