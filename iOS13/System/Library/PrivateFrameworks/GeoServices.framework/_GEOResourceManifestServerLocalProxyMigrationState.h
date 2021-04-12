/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol NSObject;
@class NSString, NSArray;

@interface _GEOResourceManifestServerLocalProxyMigrationState : NSObject {

	NSString* _loadingTileGroupUniqueIdentifier;
	NSArray* _pendingTileGroupMigrationTasks;
	id<NSObject> _transaction;

}

@property (nonatomic,readonly) NSString * loadingTileGroupUniqueIdentifier;              //@synthesize loadingTileGroupUniqueIdentifier=_loadingTileGroupUniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * pendingTileGroupMigrationTasks;                     //@synthesize pendingTileGroupMigrationTasks=_pendingTileGroupMigrationTasks - In the implementation block
-(id)init;
-(id)initWithTileGroupUniqueIdentifier:(id)arg1 transactionName:(id)arg2 ;
-(NSString *)loadingTileGroupUniqueIdentifier;
-(NSArray *)pendingTileGroupMigrationTasks;
-(void)setPendingTileGroupMigrationTasks:(NSArray *)arg1 ;
@end

