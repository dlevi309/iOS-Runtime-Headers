/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/MTSingleton.h>
#import <libobjc.A.dylib/NSManagedObjectContextProvider.h>

@class MTCoreDataContainer, MTDBConfig, NSString;

@interface MTDB : MTSingleton <NSManagedObjectContextProvider> {

	MTCoreDataContainer* _coreDataContainer;
	MTDBConfig* _config;

}

@property (nonatomic,retain) MTCoreDataContainer * coreDataContainer;              //@synthesize coreDataContainer=_coreDataContainer - In the implementation block
@property (nonatomic,retain) MTDBConfig * config;                                  //@synthesize config=_config - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)libraryPath;
+(BOOL)isCorrupt;
+(id)fetchManagedObjectModelFromDisk;
+(long long)libraryDataVersion;
+(BOOL)canExtensionOpenDatabase;
+(void)setLibraryDataVersion:(long long)arg1 ;
+(void)setCoreDataVersion:(long long)arg1 ;
+(BOOL)createDatabaseIfNeeded;
+(id)libraryShmPath;
+(id)libraryWalPath;
+(long long)coreDataVersion;
-(id)init;
-(MTDBConfig *)config;
-(void)setConfig:(MTDBConfig *)arg1 ;
-(id)managedObjectModel;
-(id)importContext;
-(id)mainQueueContext;
-(id)privateQueueContext;
-(id)mainOrPrivateContext;
-(id)carPlayContext;
-(id)storeContext;
-(id)resetableImportContext;
-(id)persistentStoreUuid;
-(void)addChangeNotifier:(id)arg1 ;
-(void)removeChangeNotifier:(id)arg1 ;
-(void)setCoreDataContainer:(MTCoreDataContainer *)arg1 ;
-(MTCoreDataContainer *)coreDataContainer;
@end

