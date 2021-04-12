/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, NSArray;

@interface HDMockIDSDevice : NSObject <NSCopying> {

	BOOL _isActive;
	BOOL _supportsCinnamonHW;
	BOOL _supportsCinnamonAntimonyGloryF;
	NSUUID* _nanoRegistryPairingID;
	NSUUID* _nsuuid;
	NSString* _uniqueIDOverride;
	NSString* _service;
	NSString* _name;
	NSString* _productBuildVersion;
	NSString* _buildType;
	NSString* _productType;
	NSString* _modelNumber;
	NSString* _systemVersion;
	NSString* _regionCode;
	NSArray* _identities;
	NSString* _electrocardiogramVersion;
	NSString* _backgroundAtrialFibrillationVersion;

}

@property (nonatomic,retain) NSUUID * nanoRegistryPairingID;                            //@synthesize nanoRegistryPairingID=_nanoRegistryPairingID - In the implementation block
@property (nonatomic,retain) NSUUID * nsuuid;                                           //@synthesize nsuuid=_nsuuid - In the implementation block
@property (nonatomic,copy) NSString * uniqueIDOverride;                                 //@synthesize uniqueIDOverride=_uniqueIDOverride - In the implementation block
@property (nonatomic,copy) NSString * service;                                          //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * productBuildVersion;                              //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (nonatomic,copy) NSString * buildType;                                        //@synthesize buildType=_buildType - In the implementation block
@property (nonatomic,copy) NSString * productType;                                      //@synthesize productType=_productType - In the implementation block
@property (nonatomic,copy) NSString * modelNumber;                                      //@synthesize modelNumber=_modelNumber - In the implementation block
@property (nonatomic,copy) NSString * systemVersion;                                    //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,copy) NSString * regionCode;                                       //@synthesize regionCode=_regionCode - In the implementation block
@property (nonatomic,copy) NSArray * identities;                                        //@synthesize identities=_identities - In the implementation block
@property (nonatomic,copy) NSString * electrocardiogramVersion;                         //@synthesize electrocardiogramVersion=_electrocardiogramVersion - In the implementation block
@property (nonatomic,copy) NSString * backgroundAtrialFibrillationVersion;              //@synthesize backgroundAtrialFibrillationVersion=_backgroundAtrialFibrillationVersion - In the implementation block
@property (nonatomic,readonly) BOOL isLocallyPaired; 
@property (nonatomic,readonly) BOOL isDefaultPairedDevice; 
@property (assign,nonatomic) BOOL isActive;                                             //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) BOOL supportsCinnamonHW;                                   //@synthesize supportsCinnamonHW=_supportsCinnamonHW - In the implementation block
@property (assign,nonatomic) BOOL supportsCinnamonAntimonyGloryF;                       //@synthesize supportsCinnamonAntimonyGloryF=_supportsCinnamonAntimonyGloryF - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isActive;
-(NSString *)systemVersion;
-(NSArray *)identities;
-(unsigned long long)relationship;
-(NSString *)service;
-(NSString *)productBuildVersion;
-(NSString *)productType;
-(void)setRegionCode:(NSString *)arg1 ;
-(NSString *)regionCode;
-(void)setIsActive:(BOOL)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(void)setModelNumber:(NSString *)arg1 ;
-(NSString *)modelNumber;
-(void)setProductType:(NSString *)arg1 ;
-(BOOL)isDefaultPairedDevice;
-(NSString *)uniqueIDOverride;
-(NSUUID *)nsuuid;
-(BOOL)isLocallyPaired;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(void)setSystemVersion:(NSString *)arg1 ;
-(void)setIdentities:(NSArray *)arg1 ;
-(void)setBuildType:(NSString *)arg1 ;
-(NSString *)buildType;
-(id)hd_deviceIdentifier;
-(id)hd_destinationIdentifier;
-(BOOL)hd_isEquivalentToDevice:(id)arg1 ;
-(id)hd_shortDescription;
-(void)setUniqueIDOverride:(NSString *)arg1 ;
-(void)setNsuuid:(NSUUID *)arg1 ;
-(void)setElectrocardiogramVersion:(NSString *)arg1 ;
-(void)setBackgroundAtrialFibrillationVersion:(NSString *)arg1 ;
-(void)setSupportsCinnamonHW:(BOOL)arg1 ;
-(void)setSupportsCinnamonAntimonyGloryF:(BOOL)arg1 ;
-(NSUUID *)nanoRegistryPairingID;
-(void)setNanoRegistryPairingID:(NSUUID *)arg1 ;
-(NSString *)electrocardiogramVersion;
-(NSString *)backgroundAtrialFibrillationVersion;
-(BOOL)supportsCinnamonHW;
-(BOOL)supportsCinnamonAntimonyGloryF;
@end

