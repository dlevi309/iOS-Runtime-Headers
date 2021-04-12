/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPCloudContainerObserver.h>

@class MSPJournal, NSArray, NSOrderedSet, NSString;

@interface MSPCloudMigrator : NSObject <MSPCloudContainerObserver> {

	MSPJournal* _journal;
	NSArray* _containers;
	NSOrderedSet* _migratedFavoriteIdentifiers;

}

@property (nonatomic,retain) MSPJournal * journal;                                    //@synthesize journal=_journal - In the implementation block
@property (nonatomic,retain) NSArray * containers;                                    //@synthesize containers=_containers - In the implementation block
@property (nonatomic,retain) NSOrderedSet * migratedFavoriteIdentifiers;              //@synthesize migratedFavoriteIdentifiers=_migratedFavoriteIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)containers;
-(void)setContainers:(NSArray *)arg1 ;
-(MSPJournal *)journal;
-(void)setJournal:(MSPJournal *)arg1 ;
-(void)cloudContainerDidChange:(id)arg1 ;
-(void)cloudContainer:(id)arg1 didFetchChanges:(id)arg2 ;
-(id)initWithContainers:(id)arg1 ;
-(id)initWithCloudContainers:(id)arg1 ;
-(void)performPreSyncMigrationsWithCompletion:(/*^block*/id)arg1 ;
-(void)performMigrationsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performPreSyncMigrationsForCollectionsContainerWithCompletion:(/*^block*/id)arg1 ;
-(void)_performMigrationsForPinnedPlacesContainerWithCompletion:(/*^block*/id)arg1 ;
-(void)_performMigrationsForCollectionsContainerWithCompletion:(/*^block*/id)arg1 ;
-(void)_performMigrationsForFavoritesContainerWithCompletion:(/*^block*/id)arg1 ;
-(NSOrderedSet *)migratedFavoriteIdentifiers;
-(void)setMigratedFavoriteIdentifiers:(NSOrderedSet *)arg1 ;
-(void)_performPreSyncMigrationsForFavoritesContainerWithCompletion:(/*^block*/id)arg1 ;
-(void)_performPreSyncMigrationsForHistoryContainerWithCompletion:(/*^block*/id)arg1 ;
-(void)_performMigrationsForHistoryContainerWithCompletion:(/*^block*/id)arg1 ;
@end
