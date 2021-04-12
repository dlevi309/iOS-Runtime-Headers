/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgeReporting.framework/BridgeReporting
*/


@class NSString, NSNumber;

@interface BRRTCMigrationMetricDeviceDetails : NSObject {

	NSString* _gizmoBuild;
	NSString* _gizmoHardware;
	NSString* _gizmoBuildType;
	NSNumber* _pairedDeviceCount;
	NSNumber* _gizmoMaxPairingVersion;
	NSNumber* _gizmoEnclosureMaterial;
	NSNumber* _switchCounter;

}

@property (nonatomic,retain) NSString * gizmoBuild;                          //@synthesize gizmoBuild=_gizmoBuild - In the implementation block
@property (nonatomic,retain) NSString * gizmoHardware;                       //@synthesize gizmoHardware=_gizmoHardware - In the implementation block
@property (nonatomic,retain) NSString * gizmoBuildType;                      //@synthesize gizmoBuildType=_gizmoBuildType - In the implementation block
@property (nonatomic,retain) NSNumber * pairedDeviceCount;                   //@synthesize pairedDeviceCount=_pairedDeviceCount - In the implementation block
@property (nonatomic,retain) NSNumber * gizmoMaxPairingVersion;              //@synthesize gizmoMaxPairingVersion=_gizmoMaxPairingVersion - In the implementation block
@property (nonatomic,retain) NSNumber * gizmoEnclosureMaterial;              //@synthesize gizmoEnclosureMaterial=_gizmoEnclosureMaterial - In the implementation block
@property (nonatomic,retain) NSNumber * switchCounter;                       //@synthesize switchCounter=_switchCounter - In the implementation block
-(NSNumber *)pairedDeviceCount;
-(NSString *)gizmoBuild;
-(NSString *)gizmoHardware;
-(NSString *)gizmoBuildType;
-(NSNumber *)gizmoMaxPairingVersion;
-(NSNumber *)gizmoEnclosureMaterial;
-(NSNumber *)switchCounter;
-(id)dictionaryOfMetricKeysWithRecordedValues;
-(void)setGizmoBuild:(NSString *)arg1 ;
-(void)setGizmoHardware:(NSString *)arg1 ;
-(void)setGizmoBuildType:(NSString *)arg1 ;
-(void)setPairedDeviceCount:(NSNumber *)arg1 ;
-(void)setGizmoMaxPairingVersion:(NSNumber *)arg1 ;
-(void)setGizmoEnclosureMaterial:(NSNumber *)arg1 ;
-(void)setSwitchCounter:(NSNumber *)arg1 ;
@end

