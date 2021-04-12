/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)managedAppBundleIDs;
-(void)willEnterForeground;
-(id)initPrivate;
-(BOOL)isManaged:(id)arg1 ;
-(BOOL)hasManagedCellularData;
-(NSString *)mdmName;
-(BOOL)isGlobalDataModificationRestricted;
-(void)setManagedCellDataAppCache:(NSSet *)arg1 ;
-(NSSet *)managedCellDataAppCache;
-(id)managedCellDataAppBundleIDs;
@end

