/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/ExchangeSync
*/


@protocol OS_dispatch_queue;
#import <ExchangeSync/ExchangeSync-Structs.h>
@class NSObject, CNContactStore, NSMutableArray, NSString, NoteContext;

@interface ESLocalDBHelper : NSObject {

	NSObject*<OS_dispatch_queue> _abDBQueue;
	NSObject*<OS_dispatch_queue> _calDBQueue;
	NSObject*<OS_dispatch_queue> _noteDBQueue;
	int _abConnectionCount;
	int _calConnectionCount;
	int _noteConnectionCount;
	void* _abDB;
	CNContactStore* _contactStore;
	NSMutableArray* _saveRequests;
	CalDatabase* _calDB;
	NSString* _clientIdentifier;
	NoteContext* _noteDB;
	/*^block*/id _calUnitTestCallbackBlock;

}

@property (assign,nonatomic) void* abDB;                                 //@synthesize abDB=_abDB - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSMutableArray * saveRequests;              //@synthesize saveRequests=_saveRequests - In the implementation block
@property (assign,nonatomic) int abConnectionCount;                      //@synthesize abConnectionCount=_abConnectionCount - In the implementation block
@property (assign,nonatomic) CalDatabase* calDB;                         //@synthesize calDB=_calDB - In the implementation block
@property (assign,nonatomic) int calConnectionCount;                     //@synthesize calConnectionCount=_calConnectionCount - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NoteContext * noteDB;                       //@synthesize noteDB=_noteDB - In the implementation block
@property (assign,nonatomic) int noteConnectionCount;                    //@synthesize noteConnectionCount=_noteConnectionCount - In the implementation block
@property (nonatomic,copy) id calUnitTestCallbackBlock;                  //@synthesize calUnitTestCallbackBlock=_calUnitTestCallbackBlock - In the implementation block
+(id)os_log;
+(id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2 ;
+(void)abSetTestABDBDir:(id)arg1 ;
+(id)abTestABDBDir;
+(void)calSetTestCalDBDir:(id)arg1 ;
+(id)calTestCalDBDir;
-(id)init;
-(void)dealloc;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(id)changeTrackingID;
-(void*)abDB;
-(void)abOpenDBWithClientIdentifier:(id)arg1 ;
-(void)addSaveRequest:(id)arg1 ;
-(void)executeAllSaveRequests;
-(BOOL)abCloseDBAndSave:(BOOL)arg1 ;
-(void)calOpenDBWithClientIdentifier:(id)arg1 ;
-(CalDatabase*)calDB;
-(BOOL)calCloseDBAndSave:(BOOL)arg1 ;
-(void*)abDBThrowOnNil:(BOOL)arg1 ;
-(BOOL)useContacts;
-(void)_registerForAddressBookYieldNotifications;
-(BOOL)_abOpenDBWithClientIdentifier:(id)arg1 ;
-(BOOL)abSaveDB;
-(void)_registerForCalendarYieldNotifications;
-(BOOL)_calOpenDBWithClientIdentifier:(id)arg1 ;
-(BOOL)calSaveDB;
-(id)calUnitTestCallbackBlock;
-(BOOL)noteSaveDB;
-(void)setCalUnitTestCallbackBlock:(id)arg1 ;
-(void)abOpenDBAsGenericClient;
-(void)abProcessAddedRecords;
-(void)abProcessAddedImages;
-(id)abConstraintPlistPath;
-(void)calOpenDBAsGenericClient;
-(void)calClearSuperfluousChanges;
-(BOOL)calSaveDBAndFlushCaches;
-(NoteContext *)noteDB;
-(void)noteOpenDB;
-(BOOL)noteCloseDBAndSave:(BOOL)arg1 ;
-(int)noteConnectionCount;
-(void)calUnitTestsSetCallbackBlockForSave:(/*^block*/id)arg1 ;
-(void)setAbDB:(void*)arg1 ;
-(NSMutableArray *)saveRequests;
-(void)setSaveRequests:(NSMutableArray *)arg1 ;
-(int)abConnectionCount;
-(void)setAbConnectionCount:(int)arg1 ;
-(void)setCalDB:(CalDatabase*)arg1 ;
-(int)calConnectionCount;
-(void)setCalConnectionCount:(int)arg1 ;
-(void)setNoteDB:(NoteContext *)arg1 ;
-(void)setNoteConnectionCount:(int)arg1 ;
@end

