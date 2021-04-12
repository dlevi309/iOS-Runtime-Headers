/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitHomeCameraConfigurations : PBCodable <NSCopying> {

	unsigned _enabledResidentsDeviceCapabilities;
	NSMutableArray* _homeKitCameraSettings;
	NSMutableArray* _homeKitCameraUserSettings;
	BOOL _isFaceClassificationEnabled;
	BOOL _isOwner;
	SCD_Struct_AW2 _has;

}

@property (nonatomic,retain) NSMutableArray * homeKitCameraUserSettings;               //@synthesize homeKitCameraUserSettings=_homeKitCameraUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableArray * homeKitCameraSettings;                   //@synthesize homeKitCameraSettings=_homeKitCameraSettings - In the implementation block
@property (assign,nonatomic) BOOL hasEnabledResidentsDeviceCapabilities; 
@property (assign,nonatomic) unsigned enabledResidentsDeviceCapabilities;              //@synthesize enabledResidentsDeviceCapabilities=_enabledResidentsDeviceCapabilities - In the implementation block
@property (assign,nonatomic) BOOL hasIsFaceClassificationEnabled; 
@property (assign,nonatomic) BOOL isFaceClassificationEnabled;                         //@synthesize isFaceClassificationEnabled=_isFaceClassificationEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsOwner; 
@property (assign,nonatomic) BOOL isOwner;                                             //@synthesize isOwner=_isOwner - In the implementation block
+(Class)homeKitCameraUserSettingsType;
+(Class)homeKitCameraSettingsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isOwner;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isFaceClassificationEnabled;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsOwner:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasIsOwner:(BOOL)arg1 ;
-(BOOL)hasIsOwner;
-(unsigned)enabledResidentsDeviceCapabilities;
-(void)setEnabledResidentsDeviceCapabilities:(unsigned)arg1 ;
-(void)setHasEnabledResidentsDeviceCapabilities:(BOOL)arg1 ;
-(BOOL)hasEnabledResidentsDeviceCapabilities;
-(void)addHomeKitCameraUserSettings:(id)arg1 ;
-(void)addHomeKitCameraSettings:(id)arg1 ;
-(unsigned long long)homeKitCameraUserSettingsCount;
-(void)clearHomeKitCameraUserSettings;
-(id)homeKitCameraUserSettingsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)homeKitCameraSettingsCount;
-(void)clearHomeKitCameraSettings;
-(id)homeKitCameraSettingsAtIndex:(unsigned long long)arg1 ;
-(void)setIsFaceClassificationEnabled:(BOOL)arg1 ;
-(void)setHasIsFaceClassificationEnabled:(BOOL)arg1 ;
-(BOOL)hasIsFaceClassificationEnabled;
-(NSMutableArray *)homeKitCameraUserSettings;
-(void)setHomeKitCameraUserSettings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)homeKitCameraSettings;
-(void)setHomeKitCameraSettings:(NSMutableArray *)arg1 ;
@end

