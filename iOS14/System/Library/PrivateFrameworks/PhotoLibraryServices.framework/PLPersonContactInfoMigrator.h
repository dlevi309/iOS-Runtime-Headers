/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class CNContactStore, NSArray;

@interface PLPersonContactInfoMigrator : NSObject {

	CNContactStore* _contactStore;
	NSArray* _keysToFetch;
	int _updateNameCount;
	int _populateMatchingDictionaryCount;

}
+(id)migrationQueue;
+(void)migratePersonContactInfoInPhotoLibrary:(id)arg1 ;
-(id)init;
-(void)migratePersonContactInfoInContext:(id)arg1 ;
-(id)enumerateResultsWithIncrementalSaveUsingFetchRequest:(id)arg1 inContext:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)migratePerson:(id)arg1 ;
-(void)updateNameOfPerson:(id)arg1 withContact:(id)arg2 ;
-(void)populateMatchingDictionaryOfPerson:(id)arg1 withContact:(id)arg2 ;
-(void)migratePersonContactInfoInPhotoLibrary:(id)arg1 ;
@end

