/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@protocol OS_dispatch_queue;
@class NSError, NSObject, EKEventStore, NSArray, EKCalendar, NSMutableDictionary, NSMutableArray, NSMapTable, NSMutableSet;

@interface EKICSImporter : NSObject {

	BOOL _asynchronous;
	NSError* _importError;
	NSObject*<OS_dispatch_queue> _async_queue;
	/*^block*/id _selectCalendar;
	/*^block*/id _importFoundBackupFile;
	/*^block*/id _importDroppedReminders;
	/*^block*/id _shouldImportContinueGivenDecision;
	/*^block*/id _importSetProgressValue;
	/*^block*/id _importSetProgressAsIndeterminate;
	unsigned long long _numInvalidEvents;
	EKEventStore* _eventStore;
	NSArray* _importFilePaths;
	EKCalendar* _calendar;
	unsigned long long _options;
	NSArray* _allCalendarUIDs;
	NSArray* _allSourceUIDs;
	NSMutableDictionary* _iCalFilesToImport;
	NSMutableArray* _vCalFilesToImport;
	NSMapTable* _calendarToICalFiles;
	NSMapTable* _calendarToITIPFiles;
	NSMapTable* _calendarToVCalFiles;
	NSMutableSet* _existingEventIDs;
	NSMutableDictionary* _iTIPFiles;
	NSMutableDictionary* _nonITIPFiles;
	NSMutableArray* _filesWithReminders;
	unsigned long long _droppedReminderCount;
	NSMutableArray* _importedItems;
	/*^block*/id _completionCallback;

}

@property (assign,nonatomic) BOOL asynchronous;                                     //@synthesize asynchronous=_asynchronous - In the implementation block
@property (assign,nonatomic) unsigned long long numInvalidEvents;                   //@synthesize numInvalidEvents=_numInvalidEvents - In the implementation block
@property (nonatomic,retain) EKEventStore * eventStore;                             //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,readonly) NSArray * importFilePaths;                           //@synthesize importFilePaths=_importFilePaths - In the implementation block
@property (nonatomic,retain) EKCalendar * calendar;                                 //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic) unsigned long long options;                            //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSArray * allCalendarUIDs;                             //@synthesize allCalendarUIDs=_allCalendarUIDs - In the implementation block
@property (nonatomic,retain) NSArray * allSourceUIDs;                               //@synthesize allSourceUIDs=_allSourceUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * iCalFilesToImport;               //@synthesize iCalFilesToImport=_iCalFilesToImport - In the implementation block
@property (nonatomic,retain) NSMutableArray * vCalFilesToImport;                    //@synthesize vCalFilesToImport=_vCalFilesToImport - In the implementation block
@property (nonatomic,retain) NSMapTable * calendarToICalFiles;                      //@synthesize calendarToICalFiles=_calendarToICalFiles - In the implementation block
@property (nonatomic,retain) NSMapTable * calendarToITIPFiles;                      //@synthesize calendarToITIPFiles=_calendarToITIPFiles - In the implementation block
@property (nonatomic,retain) NSMapTable * calendarToVCalFiles;                      //@synthesize calendarToVCalFiles=_calendarToVCalFiles - In the implementation block
@property (nonatomic,retain) NSMutableSet * existingEventIDs;                       //@synthesize existingEventIDs=_existingEventIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * iTIPFiles;                       //@synthesize iTIPFiles=_iTIPFiles - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nonITIPFiles;                    //@synthesize nonITIPFiles=_nonITIPFiles - In the implementation block
@property (nonatomic,retain) NSMutableArray * filesWithReminders;                   //@synthesize filesWithReminders=_filesWithReminders - In the implementation block
@property (assign,nonatomic) unsigned long long droppedReminderCount;               //@synthesize droppedReminderCount=_droppedReminderCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * importedItems;                        //@synthesize importedItems=_importedItems - In the implementation block
@property (nonatomic,copy) id completionCallback;                                   //@synthesize completionCallback=_completionCallback - In the implementation block
@property (nonatomic,retain) NSError * importError;                                 //@synthesize importError=_importError - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> async_queue;              //@synthesize async_queue=_async_queue - In the implementation block
@property (nonatomic,copy) id selectCalendar;                                       //@synthesize selectCalendar=_selectCalendar - In the implementation block
@property (nonatomic,copy) id importFoundBackupFile;                                //@synthesize importFoundBackupFile=_importFoundBackupFile - In the implementation block
@property (nonatomic,copy) id importDroppedReminders;                               //@synthesize importDroppedReminders=_importDroppedReminders - In the implementation block
@property (nonatomic,copy) id shouldImportContinueGivenDecision;                    //@synthesize shouldImportContinueGivenDecision=_shouldImportContinueGivenDecision - In the implementation block
@property (nonatomic,copy) id importSetProgressValue;                               //@synthesize importSetProgressValue=_importSetProgressValue - In the implementation block
@property (nonatomic,copy) id importSetProgressAsIndeterminate;                     //@synthesize importSetProgressAsIndeterminate=_importSetProgressAsIndeterminate - In the implementation block
+(id)allowedImportFileTypes;
-(EKEventStore *)eventStore;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(EKCalendar *)calendar;
-(unsigned long long)options;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)completionCallback;
-(void)setAsynchronous:(BOOL)arg1 ;
-(void)setCompletionCallback:(id)arg1 ;
-(id)callbackQueue;
-(NSMutableDictionary *)iTIPFiles;
-(void)_importWithCompletion:(/*^block*/id)arg1 ;
-(id)_initWithFilePaths:(id)arg1 orderedCalendarUIDs:(id)arg2 orderedSourceUIDs:(id)arg3 eventStore:(id)arg4 calendar:(id)arg5 options:(unsigned long long)arg6 ;
-(void)_createImportHandle;
-(void)setImportProgressAsIndeterminate;
-(NSArray *)importFilePaths;
-(unsigned long long)_separateFilesForImport:(id)arg1 ;
-(void)callCompletionWithSuccess:(BOOL)arg1 ;
-(NSError *)importError;
-(BOOL)importICalFiles;
-(NSMutableDictionary *)iCalFilesToImport;
-(NSMutableArray *)vCalFilesToImport;
-(BOOL)_separateICalFilesForITIP;
-(BOOL)_sortFilesByImportCalendar;
-(BOOL)_doImportFiles;
-(void)callImportDroppedRemindersCallbackIfThereWereReminders;
-(NSMutableDictionary *)nonITIPFiles;
-(id)_findCalendarForExistingEvent:(id)arg1 ;
-(id)_findPreferredSourceForDocument:(id)arg1 ;
-(id)_defaultImportCalendarRequiringSource:(id)arg1 ;
-(void)setImportError:(NSError *)arg1 ;
-(id)selectCalendar;
-(id)infoForNewCalendarForFiles:(id)arg1 forITIPFiles:(id)arg2 nonITIPFiles:(id)arg3 ;
-(id)selectCalendarWithTitle:(id)arg1 color:(id)arg2 description:(id)arg3 error:(id*)arg4 ;
-(id)importFoundBackupFile;
-(void)importFoundBackupFile:(id)arg1 ;
-(int)countReminders:(id)arg1 ;
-(id)shouldImportContinueGivenDecision;
-(BOOL)shouldImportContinueGivenDecision:(int)arg1 eventsAffected:(unsigned long long)arg2 ;
-(BOOL)asynchronous;
-(unsigned long long)numInvalidEvents;
-(void)setNumInvalidEvents:(unsigned long long)arg1 ;
-(NSMapTable *)calendarToICalFiles;
-(NSMutableSet *)existingEventIDs;
-(id)eventFromDocument:(id)arg1 ;
-(NSArray *)allSourceUIDs;
-(BOOL)_isAnyAttendeeAddressFrom:(id)arg1 organizer:(id)arg2 equivalentTo:(id)arg3 ;
-(id)_matchingAttendeeAddressesFrom:(id)arg1 organizer:(id)arg2 inSource:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)async_queue;
-(BOOL)_organizer:(id)arg1 matchesDomainForURL:(id)arg2 ;
-(NSArray *)allCalendarUIDs;
-(id)_getImportedCalendarItems;
-(id)importSetProgressAsIndeterminate;
-(id)importDroppedReminders;
-(id)initWithFilePaths:(id)arg1 orderedCalendarUIDs:(id)arg2 orderedSourceUIDs:(id)arg3 eventStore:(id)arg4 options:(unsigned long long)arg5 ;
-(id)initWithFilePaths:(id)arg1 calendar:(id)arg2 options:(unsigned long long)arg3 ;
-(void)asyncImportWithCompletion:(/*^block*/id)arg1 ;
-(void)syncImportWithCompletion:(/*^block*/id)arg1 ;
-(void)setAsync_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSelectCalendar:(id)arg1 ;
-(id)importSetProgressValue;
-(void)setImportFoundBackupFile:(id)arg1 ;
-(void)setImportDroppedReminders:(id)arg1 ;
-(void)setShouldImportContinueGivenDecision:(id)arg1 ;
-(void)setAllCalendarUIDs:(NSArray *)arg1 ;
-(void)setImportSetProgressValue:(id)arg1 ;
-(void)setImportSetProgressAsIndeterminate:(id)arg1 ;
-(void)setAllSourceUIDs:(NSArray *)arg1 ;
-(void)setICalFilesToImport:(NSMutableDictionary *)arg1 ;
-(void)setVCalFilesToImport:(NSMutableArray *)arg1 ;
-(void)setCalendarToICalFiles:(NSMapTable *)arg1 ;
-(NSMapTable *)calendarToITIPFiles;
-(void)setCalendarToITIPFiles:(NSMapTable *)arg1 ;
-(NSMapTable *)calendarToVCalFiles;
-(void)setCalendarToVCalFiles:(NSMapTable *)arg1 ;
-(void)setExistingEventIDs:(NSMutableSet *)arg1 ;
-(void)setITIPFiles:(NSMutableDictionary *)arg1 ;
-(void)setNonITIPFiles:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)filesWithReminders;
-(NSMutableArray *)importedItems;
-(void)setFilesWithReminders:(NSMutableArray *)arg1 ;
-(unsigned long long)droppedReminderCount;
-(void)setDroppedReminderCount:(unsigned long long)arg1 ;
-(void)setImportedItems:(NSMutableArray *)arg1 ;
@end

