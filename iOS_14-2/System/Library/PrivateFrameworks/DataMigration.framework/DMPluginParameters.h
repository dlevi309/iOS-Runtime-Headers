/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@class NSDictionary, NSString;

@interface DMPluginParameters : NSObject {

	NSDictionary* _dispositionSupersetOfContext;
	NSString* _backupDeviceUUID;

}

@property (nonatomic,retain) NSDictionary * dispositionSupersetOfContext;              //@synthesize dispositionSupersetOfContext=_dispositionSupersetOfContext - In the implementation block
@property (nonatomic,copy) NSString * backupDeviceUUID;                                //@synthesize backupDeviceUUID=_backupDeviceUUID - In the implementation block
+(id)backupDeviceUUIDFromDispositionSupersetOfContext:(id)arg1 ;
-(NSString *)backupDeviceUUID;
-(NSDictionary *)dispositionSupersetOfContext;
-(void)setDispositionSupersetOfContext:(NSDictionary *)arg1 ;
-(void)setBackupDeviceUUID:(NSString *)arg1 ;
-(id)initWithDispositionSupersetOfContext:(id)arg1 backupDeviceUUID:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

