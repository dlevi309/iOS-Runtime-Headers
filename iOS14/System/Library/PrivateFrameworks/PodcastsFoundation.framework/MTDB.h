/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <libobjc.A.dylib/NSManagedObjectContextProvider.h>

@protocol MTCoreDataContainerConfigProvider;
@class MTCoreDataContainer, NSString;

@interface MTDB : NSObject <NSManagedObjectContextProvider> {

	MTCoreDataContainer* _coreDataContainer;
	id<MTCoreDataContainerConfigProvider> _config;

}

@property (nonatomic,retain) MTCoreDataContainer * coreDataContainer;                   //@synthesize coreDataContainer=_coreDataContainer - In the implementation block
@property (nonatomic,retain) id<MTCoreDataContainerConfigProvider> config;              //@synthesize config=_config - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isCorrupt;
+(void)setSharedInstance:(id)arg1 ;
+(void)setCorrupt:(BOOL)arg1 ;
+(id)libraryPath;
+(long long)coreDataVersion;
+(long long)libraryDataVersion;
+(id)fetchManagedObjectModelFromDisk;
+(BOOL)canExtensionOpenDatabase;
+(void)isPodcastsAppCheck;
+(BOOL)createDatabaseIfNeeded;
+(id)libraryShmPath;
+(id)libraryWalPath;
+(BOOL)quickCheckForNeedsContainerMigration;
+(void)setLibraryDataVersion:(long long)arg1 ;
+(void)setCoreDataVersion:(long long)arg1 ;
+(void)setQuickCheckForNeedsContainerMigration:(BOOL)arg1 ;
-(id<MTCoreDataContainerConfigProvider>)config;
-(id)init;
-(id)importContext;
-(void)setConfig:(id<MTCoreDataContainerConfigProvider>)arg1 ;
-(id)managedObjectModel;
-(id)mainQueueContext;
-(id)privateQueueContext;
-(id)mainOrPrivateContext;
-(id)carPlayContext;
-(id)storeContext;
-(id)resetableImportContext;
-(id)persistentStoreUuid;
-(void)addChangeNotifier:(id)arg1 ;
-(void)removeChangeNotifier:(id)arg1 ;
-(id)initWithCoreDataContainer:(id)arg1 config:(id)arg2 ;
-(void)setCoreDataContainer:(MTCoreDataContainer *)arg1 ;
-(MTCoreDataContainer *)coreDataContainer;
@end

