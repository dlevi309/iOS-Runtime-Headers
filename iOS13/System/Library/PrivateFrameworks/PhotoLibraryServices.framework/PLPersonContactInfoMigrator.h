/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class CNContactStore, NSArray;

@interface PLPersonContactInfoMigrator : NSObject {

	CNContactStore* _contactStore;
	NSArray* _keysToFetch;
	int _updateNameCount;
	int _populateMatchingDictionaryCount;

}
+(void)migratePersonContactInfoInPhotoLibrary:(id)arg1 ;
+(id)migrationQueue;
-(id)init;
-(void)migratePersonContactInfoInPhotoLibrary:(id)arg1 ;
-(void)migratePersonContactInfoInContext:(id)arg1 ;
-(id)enumerateResultsWithIncrementalSaveUsingFetchRequest:(id)arg1 inContext:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)migratePerson:(id)arg1 ;
-(void)updateNameOfPerson:(id)arg1 withContact:(id)arg2 ;
-(void)populateMatchingDictionaryOfPerson:(id)arg1 withContact:(id)arg2 ;
@end

