/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSURL;

@interface PLJournalManagerCore : NSObject {

	NSURL* _baseURL;
	NSURL* _historyTokenURL;

}
+(id)payloadClasses;
+(void)validatePayloadClassesForManagedObjectModel:(id)arg1 ;
+(BOOL)createSnapshotWithJournal:(id)arg1 usingManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)appendSnapshotWithJournal:(id)arg1 usingManagedObjectContext:(id)arg2 changedKeys:(id)arg3 error:(id*)arg4 ;
+(id)_objectEnumeratorForJournal:(id)arg1 usingManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)initWithBaseURL:(id)arg1 ;
-(BOOL)saveHistoryToken:(id)arg1 error:(id*)arg2 ;
@end

