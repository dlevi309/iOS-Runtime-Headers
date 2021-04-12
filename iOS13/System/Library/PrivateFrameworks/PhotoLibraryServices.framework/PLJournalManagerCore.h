/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSURL;

@interface PLJournalManagerCore : NSObject {

	NSURL* _baseURL;
	NSURL* _historyTokenURL;

}
+(id)payloadClasses;
+(void)validatePayloadClassesForManagedObjectModel:(id)arg1 ;
+(id)_populateRelationshipKeyPathsForPrefetching:(id)arg1 currentKeyPath:(id)arg2 usingModelProperties:(id)arg3 ;
+(id)populateRelationshipKeyPathsForPrefetching:(id)arg1 forPayloadClass:(Class)arg2 ;
+(BOOL)createSnapshotWithJournal:(id)arg1 usingManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)initWithBaseURL:(id)arg1 ;
-(BOOL)saveHistoryToken:(id)arg1 error:(id*)arg2 ;
@end

