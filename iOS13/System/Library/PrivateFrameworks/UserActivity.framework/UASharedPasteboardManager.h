/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

#import <libobjc.A.dylib/UASharedPasteboardManagerResponseProtocol.h>

@protocol OS_dispatch_queue;
@class UAPasteboardGeneration, NSObject, NSXPCConnection, NSSet, NSDictionary, NSString;

@interface UASharedPasteboardManager : NSObject <UASharedPasteboardManagerResponseProtocol> {

	BOOL _remotePasteboardAvaliable;
	BOOL _currentGenerationHasUpdates;
	BOOL _updateScheduled;
	int _disableCount;
	/*^block*/id _localPasteboardWasFetched;
	UAPasteboardGeneration* _currentGeneration;
	NSObject*<OS_dispatch_queue> _serverQ;
	NSXPCConnection* _connection;
	NSXPCConnection* _controllConnection;
	id _controllSyncObject;
	NSObject*<OS_dispatch_queue> _pasteboardReadQ;
	NSSet* _disallowdTypes;
	NSSet* _bomCheckTypes;
	NSDictionary* _typeBOMs;
	NSDictionary* _typeAliases;
	/*^block*/id _completionBlock;

}

@property (retain) NSObject*<OS_dispatch_queue> serverQ;                      //@synthesize serverQ=_serverQ - In the implementation block
@property (retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (retain) NSXPCConnection * controllConnection;                      //@synthesize controllConnection=_controllConnection - In the implementation block
@property (assign) int disableCount;                                          //@synthesize disableCount=_disableCount - In the implementation block
@property (retain) id controllSyncObject;                                     //@synthesize controllSyncObject=_controllSyncObject - In the implementation block
@property (assign) BOOL remotePasteboardAvaliable;                            //@synthesize remotePasteboardAvaliable=_remotePasteboardAvaliable - In the implementation block
@property (assign) BOOL currentGenerationHasUpdates;                          //@synthesize currentGenerationHasUpdates=_currentGenerationHasUpdates - In the implementation block
@property (assign) BOOL updateScheduled;                                      //@synthesize updateScheduled=_updateScheduled - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> pasteboardReadQ;              //@synthesize pasteboardReadQ=_pasteboardReadQ - In the implementation block
@property (retain) NSSet * disallowdTypes;                                    //@synthesize disallowdTypes=_disallowdTypes - In the implementation block
@property (retain) NSSet * bomCheckTypes;                                     //@synthesize bomCheckTypes=_bomCheckTypes - In the implementation block
@property (retain) NSDictionary * typeBOMs;                                   //@synthesize typeBOMs=_typeBOMs - In the implementation block
@property (retain) NSDictionary * typeAliases;                                //@synthesize typeAliases=_typeAliases - In the implementation block
@property (assign) id completionBlock;                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (copy) id localPasteboardWasFetched;                                //@synthesize localPasteboardWasFetched=_localPasteboardWasFetched - In the implementation block
@property (retain) UAPasteboardGeneration * currentGeneration;                //@synthesize currentGeneration=_currentGeneration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedManager;
+(BOOL)dontConnectToServer;
-(id)init;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)tellClientDebuggingEnabled:(BOOL)arg1 logFileHandle:(id)arg2 ;
-(void)clearLocalPasteboardInformation;
-(void)writeLocalPasteboardToFile:(id)arg1 itemDir:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setServerQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPasteboardReadQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDisallowdTypes:(NSSet *)arg1 ;
-(void)setBomCheckTypes:(NSSet *)arg1 ;
-(void)setTypeBOMs:(NSDictionary *)arg1 ;
-(void)setTypeAliases:(NSDictionary *)arg1 ;
-(void)setControllSyncObject:(id)arg1 ;
-(void)setUpdateScheduled:(BOOL)arg1 ;
-(id)controllSyncObject;
-(int)disableCount;
-(void)setControllConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)controllConnection;
-(void)setDisableCount:(int)arg1 ;
-(UAPasteboardGeneration *)currentGeneration;
-(NSSet *)disallowdTypes;
-(void)setCurrentGeneration:(UAPasteboardGeneration *)arg1 ;
-(BOOL)currentGenerationHasUpdates;
-(void)setCurrentGenerationHasUpdates:(BOOL)arg1 ;
-(BOOL)updateScheduled;
-(void)sendUpdateToServer:(id)arg1 ;
-(NSDictionary *)typeAliases;
-(NSObject*<OS_dispatch_queue>)serverQ;
-(void)doClearLocalPasteboardInfo;
-(id)serializeItem:(id)arg1 intoInfo:(id)arg2 withFile:(id)arg3 intoDir:(id)arg4 ;
-(void)pickupLocalChanges:(id)arg1 iterNumber:(long long)arg2 cloneDir:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)localPasteboardWasFetched;
-(id)serializeFileType:(id)arg1 intoInfo:(id)arg2 withFile:(id)arg3 intoDir:(id)arg4 ;
-(id)serializeType:(id)arg1 intoInfo:(id)arg2 withFile:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)pasteboardReadQ;
-(NSSet *)bomCheckTypes;
-(NSDictionary *)typeBOMs;
-(void)fetchPasteboardStatus:(/*^block*/id)arg1 ;
-(void)fetchPasteboardTypesForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchPasteboardDataForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)startPreventingPasteboardSharing;
-(void)stopPreventingPasteboardSharing;
-(BOOL)addData:(id)arg1 toItemAtIndex:(unsigned long long)arg2 generation:(unsigned long long)arg3 ;
-(BOOL)isRemotePasteboardAvaliable;
-(void)requestRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestRemotePasteboardDataForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)requestPasteboardFetchReturnEarly;
-(void)setLocalPasteboardWasFetched:(id)arg1 ;
-(BOOL)remotePasteboardAvaliable;
-(void)setRemotePasteboardAvaliable:(BOOL)arg1 ;
@end

