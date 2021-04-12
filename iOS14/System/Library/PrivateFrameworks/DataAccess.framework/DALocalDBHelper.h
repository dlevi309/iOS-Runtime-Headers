/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@protocol OS_dispatch_queue;
#import <DataAccess/DataAccess-Structs.h>
@class NSObject, NSString, NSMutableArray, CNContactStore, NoteContext;

@interface DALocalDBHelper : NSObject {

	NSObject*<OS_dispatch_queue> _abDBQueue;
	NSObject*<OS_dispatch_queue> _calDBQueue;
	NSObject*<OS_dispatch_queue> _noteDBQueue;
	int _abConnectionCount;
	int _calConnectionCount;
	int _noteConnectionCount;
	void* _abDB;
	NSString* _familyDelegateAltDSID;
	NSString* _familyDelegateACAccountID;
	NSMutableArray* _saveRequests;
	CNContactStore* _contactStore;
	CalDatabase* _calDB;
	NSString* _clientIdentifier;
	NoteContext* _noteDB;
	/*^block*/id _calUnitTestCallbackBlock;

}

@property (assign,nonatomic) void* abDB;                                        //@synthesize abDB=_abDB - In the implementation block
@property (nonatomic,retain) NSString * familyDelegateAltDSID;                  //@synthesize familyDelegateAltDSID=_familyDelegateAltDSID - In the implementation block
@property (nonatomic,retain) NSString * familyDelegateACAccountID;              //@synthesize familyDelegateACAccountID=_familyDelegateACAccountID - In the implementation block
@property (nonatomic,retain) NSMutableArray * saveRequests;                     //@synthesize saveRequests=_saveRequests - In the implementation block
@property (assign,nonatomic) int abConnectionCount;                             //@synthesize abConnectionCount=_abConnectionCount - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                     //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic) CalDatabase* calDB;                                //@synthesize calDB=_calDB - In the implementation block
@property (assign,nonatomic) int calConnectionCount;                            //@synthesize calConnectionCount=_calConnectionCount - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                       //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NoteContext * noteDB;                              //@synthesize noteDB=_noteDB - In the implementation block
@property (assign,nonatomic) int noteConnectionCount;                           //@synthesize noteConnectionCount=_noteConnectionCount - In the implementation block
@property (nonatomic,copy) id calUnitTestCallbackBlock;                         //@synthesize calUnitTestCallbackBlock=_calUnitTestCallbackBlock - In the implementation block
+(id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2 ;
+(id)os_log;
+(void)abSetTestABDBDir:(id)arg1 ;
+(id)abTestABDBDir;
+(void)calSetTestCalDBDir:(id)arg1 ;
+(id)calTestCalDBDir;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void*)abDB;
-(void)_registerForCalendarYieldNotifications;
-(CNContactStore *)contactStore;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NoteContext *)noteDB;
-(id)init;
-(void)abProcessAddedImages;
-(void)setSaveRequests:(NSMutableArray *)arg1 ;
-(int)calConnectionCount;
-(void)calUnitTestsSetCallbackBlockForSave:(/*^block*/id)arg1 ;
-(void)abOpenDBWithClientIdentifier:(id)arg1 ;
-(BOOL)calSaveDB;
-(void)setAbConnectionCount:(int)arg1 ;
-(void)setNoteDB:(NoteContext *)arg1 ;
-(int)abConnectionCount;
-(void)setAbDB:(void*)arg1 ;
-(NSMutableArray *)saveRequests;
-(void)calClearSuperfluousChanges;
-(void)abProcessAddedRecords;
-(void)addSaveRequest:(id)arg1 ;
-(void)executeAllSaveRequests;
-(BOOL)calSaveDBAndFlushCaches;
-(void)setCalDB:(CalDatabase*)arg1 ;
-(BOOL)abCloseDBAndSave:(BOOL)arg1 ;
-(void)noteOpenDB;
-(void)abOpenDBAsGenericClient;
-(BOOL)_abOpenDBWithClientIdentifier:(id)arg1 ;
-(int)noteConnectionCount;
-(id)changeTrackingID;
-(BOOL)abSaveDB;
-(void)setNoteConnectionCount:(int)arg1 ;
-(BOOL)_calOpenDBWithClientIdentifier:(id)arg1 ;
-(void)calOpenDBWithClientIdentifier:(id)arg1 ;
-(void)_registerForAddressBookYieldNotifications;
-(NSString *)clientIdentifier;
-(id)calUnitTestCallbackBlock;
-(void)setCalUnitTestCallbackBlock:(id)arg1 ;
-(BOOL)noteSaveDB;
-(void*)abDBThrowOnNil:(BOOL)arg1 ;
-(void)abValidateDefaultSource;
-(CalDatabase*)calDB;
-(id)initWithContactsFamilyDelegateAltDSID:(id)arg1 familyDelegateACAccountID:(id)arg2 ;
-(void)removeDelegateDatabasesNotMatchingAltDSIDs:(id)arg1 ;
-(id)abDefaultAccountInfoSuitableForLogging;
-(NSString *)familyDelegateAltDSID;
-(void)setFamilyDelegateAltDSID:(NSString *)arg1 ;
-(NSString *)familyDelegateACAccountID;
-(void)setFamilyDelegateACAccountID:(NSString *)arg1 ;
-(BOOL)useContacts;
-(void)setCalConnectionCount:(int)arg1 ;
-(BOOL)noteCloseDBAndSave:(BOOL)arg1 ;
-(void)calOpenDBAsGenericClient;
-(void)dealloc;
-(id)abConstraintPlistPath;
-(BOOL)calCloseDBAndSave:(BOOL)arg1 ;
@end

