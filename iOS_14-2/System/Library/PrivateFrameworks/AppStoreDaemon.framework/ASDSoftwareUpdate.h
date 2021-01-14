/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate, NSDictionary, NSString, NSNumber;

@interface ASDSoftwareUpdate : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _blockedBy;
	NSDate* _installDate;
	NSDictionary* _metrics;
	BOOL _perDevice;
	BOOL _profileValidated;
	NSDictionary* _rawUpdateDictionary;
	long long _rawUpdateState;
	NSDate* _timestamp;
	long long _updateState;
	BOOL _iOSBinaryMacOSCompatible;
	BOOL _downloaded;
	BOOL _requiresRosetta;
	BOOL _runsOnIntel;
	BOOL _runsOnAppleSilicon;
	long long _deviceFamilies;

}

@property (assign,nonatomic) long long deviceFamilies;                                                     //@synthesize deviceFamilies=_deviceFamilies - In the implementation block
@property (assign,getter=isIOSBinaryMacOSCompatible,nonatomic) BOOL iOSBinaryMacOSCompatible;              //@synthesize iOSBinaryMacOSCompatible=_iOSBinaryMacOSCompatible - In the implementation block
@property (nonatomic,copy) NSArray * blockedBy;                                                            //@synthesize blockedBy=_blockedBy - In the implementation block
@property (nonatomic,copy) NSDate * installDate;                                                           //@synthesize installDate=_installDate - In the implementation block
@property (nonatomic,copy) NSDictionary * metrics;                                                         //@synthesize metrics=_metrics - In the implementation block
@property (assign,getter=isDownloaded,nonatomic) BOOL downloaded;                                          //@synthesize downloaded=_downloaded - In the implementation block
@property (assign,getter=isPerDevice,nonatomic) BOOL perDevice;                                            //@synthesize perDevice=_perDevice - In the implementation block
@property (assign,getter=isProfileValidated,nonatomic) BOOL profileValidated;                              //@synthesize profileValidated=_profileValidated - In the implementation block
@property (assign,nonatomic) long long rawUpdateState;                                                     //@synthesize rawUpdateState=_rawUpdateState - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long updateState;                                                        //@synthesize updateState=_updateState - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * buyParams; 
@property (nonatomic,readonly) NSNumber * externalVersionIdentifier; 
@property (nonatomic,readonly) long long parentalControlsRank; 
@property (nonatomic,readonly) NSDictionary * rawUpdateDictionary;                                         //@synthesize rawUpdateDictionary=_rawUpdateDictionary - In the implementation block
@property (nonatomic,readonly) BOOL requiresRosetta;                                                       //@synthesize requiresRosetta=_requiresRosetta - In the implementation block
@property (nonatomic,readonly) BOOL runsOnIntel;                                                           //@synthesize runsOnIntel=_runsOnIntel - In the implementation block
@property (nonatomic,readonly) BOOL runsOnAppleSilicon;                                                    //@synthesize runsOnAppleSilicon=_runsOnAppleSilicon - In the implementation block
@property (nonatomic,readonly) long long storeItemIdentifier; 
@property (nonatomic,readonly) NSDictionary * updateDictionary; 
+(BOOL)supportsSecureCoding;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(NSDictionary *)metrics;
-(id)releaseDate;
-(BOOL)isProfileValidated;
-(NSNumber *)externalVersionIdentifier;
-(void)setDownloaded:(BOOL)arg1 ;
-(BOOL)isDownloaded;
-(BOOL)isIOSBinaryMacOSCompatible;
-(NSDictionary *)rawUpdateDictionary;
-(long long)rawUpdateState;
-(BOOL)_boolValueForProperty:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(void)setBlockedBy:(NSArray *)arg1 ;
-(void)setIOSBinaryMacOSCompatible:(BOOL)arg1 ;
-(void)setPerDevice:(BOOL)arg1 ;
-(BOOL)requiresRosetta;
-(BOOL)runsOnAppleSilicon;
-(void)setRawUpdateState:(long long)arg1 ;
-(long long)deviceFamilies;
-(id)initWithUpdateDictionary:(id)arg1 ;
-(long long)parentalControlsRank;
-(NSDictionary *)updateDictionary;
-(void)setUpdateState:(long long)arg1 ;
-(NSDate *)timestamp;
-(NSArray *)blockedBy;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSDate *)installDate;
-(long long)updateState;
-(BOOL)isPerDevice;
-(long long)storeItemIdentifier;
-(void)setProfileValidated:(BOOL)arg1 ;
-(void)setInstallDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDeviceFamilies:(long long)arg1 ;
-(NSString *)buyParams;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(BOOL)runsOnIntel;
@end

