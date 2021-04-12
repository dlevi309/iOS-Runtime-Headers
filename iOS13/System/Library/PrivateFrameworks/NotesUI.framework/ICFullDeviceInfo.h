/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICMigrationDeviceInfo.h>

@class NSString;

@interface ICFullDeviceInfo : ICMigrationDeviceInfo {

	NSString* _model;
	NSString* _modelDisplayName;
	NSString* _softwareVersion;
	ICDeviceHardwareInfo _hardwareInfo;

}

@property (nonatomic,readonly) ICDeviceHardwareInfo hardwareInfo;              //@synthesize hardwareInfo=_hardwareInfo - In the implementation block
@property (nonatomic,readonly) NSString * model;                               //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSString * modelDisplayName;                    //@synthesize modelDisplayName=_modelDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * softwareVersion;                     //@synthesize softwareVersion=_softwareVersion - In the implementation block
-(id)init;
-(id)description;
-(NSString *)model;
-(NSString *)modelDisplayName;
-(NSString *)softwareVersion;
-(ICDeviceHardwareInfo)hardwareInfo;
-(id)loggableDescription;
-(BOOL)upgradableToIOS13;
-(BOOL)upgradedToIOS13;
-(BOOL)isIOSDevice;
-(BOOL)upgraded;
-(BOOL)upgradable;
-(BOOL)isOSXDevice;
-(id)initWithName:(id)arg1 model:(id)arg2 modelDisplayName:(id)arg3 softwareVersion:(id)arg4 ;
-(BOOL)shouldBeHidden;
-(ICDeviceHardwareInfo)hardwareInfoFromModelId:(id)arg1 ;
-(BOOL)isHardwareInfoUpgradable:(ICDeviceHardwareInfo)arg1 ;
-(BOOL)isHardwareInfoUpgradableToIOS13:(ICDeviceHardwareInfo)arg1 ;
-(BOOL)upgradedToMajor:(int)arg1 minor:(int)arg2 ;
-(unsigned long long)hardwareInfoNameFromString:(id)arg1 ;
@end

