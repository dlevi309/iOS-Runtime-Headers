/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@class NSMutableDictionary, NSDictionary;

@interface ATUserDefaults : NSObject {

	NSMutableDictionary* _defaults;

}

@property (assign,nonatomic) BOOL hasCompletedDataMigration; 
@property (nonatomic,retain) NSDictionary * diskUsageInfo; 
+(id)sharedInstance;
+(void)synchronize;
+(id)readOnlyDefaults;
-(id)init;
-(void)setHasCompletedDataMigration:(BOOL)arg1 ;
-(BOOL)hasCompletedDataMigration;
-(void)setDiskUsageInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)diskUsageInfo;
-(void)_updateDefaults;
-(id)allHosts;
-(void)updateHostInfo:(id)arg1 disabledAssetTypes:(id)arg2 ;
-(void)updateLastSyncWithHostLibrary:(id)arg1 ;
-(void)removeHost:(id)arg1 ;
-(id)hostInfoForIdentifier:(id)arg1 ;
@end

