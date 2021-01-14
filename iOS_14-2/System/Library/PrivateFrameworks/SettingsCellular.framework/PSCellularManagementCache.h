/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
*/


@class NSSet, NSString;

@interface PSCellularManagementCache : NSObject {

	NSSet* _managedCellDataAppCache;

}

@property (retain) NSSet * managedCellDataAppCache;                                  //@synthesize managedCellDataAppCache=_managedCellDataAppCache - In the implementation block
@property (nonatomic,readonly) BOOL isGlobalDataModificationRestricted; 
@property (nonatomic,readonly) BOOL hasManagedCellularData; 
@property (nonatomic,readonly) NSString * mdmName; 
+(id)sharedInstance;
-(id)initPrivate;
-(id)init;
-(id)managedAppBundleIDs;
-(void)willEnterForeground;
-(void)clearCache;
-(BOOL)isManaged:(id)arg1 ;
-(NSString *)mdmName;
-(BOOL)isGlobalDataModificationRestricted;
-(BOOL)hasManagedCellularData;
-(void)managedConfigurationSettingsDidChange;
-(void)managedConfigurationProfileListDidChange;
-(void)setManagedCellDataAppCache:(NSSet *)arg1 ;
-(NSSet *)managedCellDataAppCache;
-(id)managedCellDataAppBundleIDs;
@end

