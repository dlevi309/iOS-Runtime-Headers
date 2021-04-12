/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSMutableArray, NSMutableOrderedSet, NSMutableDictionary, BRCLocalItem, NSString, BRCServerZone;

@interface BRCSyncUpOperation : _BRCOperation <BRCOperationSubclass> {

	unsigned long long _requestID;
	BOOL _encounteredErrorOnPCSChainedItem;
	float _cost;
	NSMutableArray* _recordsToSave;
	NSMutableArray* _packagesInFlight;
	NSMutableArray* _createdAppLibraryNames;
	NSMutableOrderedSet* _deletedRecordIDs;
	NSMutableArray* _iworkUnsharedShareIDs;
	NSMutableDictionary* _renamedShareIDsToNames;
	NSMutableArray* _recordsNeedingNewSharingProtectionInfo;
	NSMutableArray* _recordsNeedingUpdatedSharingProtectionInfo;
	NSMutableDictionary* _recordIDsToDeleteToEtags;
	NSMutableDictionary* _pluginFieldsForRecordDeletesByID;
	BRCLocalItem* _itemNeedingPCSChaining;
	NSMutableDictionary* _conflictLosersToResolveByRecordID;
	NSString* _stageID;
	/*^block*/id _syncUpCompletionBlock;
	BRCServerZone* _serverZone;

}

@property (nonatomic,retain) BRCServerZone * serverZone;                                               //@synthesize serverZone=_serverZone - In the implementation block
@property (nonatomic,retain) NSMutableArray * packagesInFlight;                                        //@synthesize packagesInFlight=_packagesInFlight - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordsToSave;                                           //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * deletedRecordIDs;                                   //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * iworkUnsharedShareIDs;                                   //@synthesize iworkUnsharedShareIDs=_iworkUnsharedShareIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * renamedShareIDsToNames;                             //@synthesize renamedShareIDsToNames=_renamedShareIDsToNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordsNeedingNewSharingProtectionInfo;                  //@synthesize recordsNeedingNewSharingProtectionInfo=_recordsNeedingNewSharingProtectionInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordsNeedingUpdatedSharingProtectionInfo;              //@synthesize recordsNeedingUpdatedSharingProtectionInfo=_recordsNeedingUpdatedSharingProtectionInfo - In the implementation block
@property (nonatomic,retain) BRCLocalItem * itemNeedingPCSChaining;                                    //@synthesize itemNeedingPCSChaining=_itemNeedingPCSChaining - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDsToDeleteToEtags;                           //@synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pluginFieldsForRecordDeletesByID;                   //@synthesize pluginFieldsForRecordDeletesByID=_pluginFieldsForRecordDeletesByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * conflictLosersToResolveByRecordID;                  //@synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID - In the implementation block
@property (nonatomic,retain) NSString * stageID;                                                       //@synthesize stageID=_stageID - In the implementation block
@property (nonatomic,readonly) float cost;                                                             //@synthesize cost=_cost - In the implementation block
@property (nonatomic,readonly) NSMutableArray * createdAppLibraryNames;                                //@synthesize createdAppLibraryNames=_createdAppLibraryNames - In the implementation block
@property (nonatomic,copy) id syncUpCompletionBlock;                                                   //@synthesize syncUpCompletionBlock=_syncUpCompletionBlock - In the implementation block
@property (nonatomic,readonly) BOOL encounteredErrorOnPCSChainedItem;                                  //@synthesize encounteredErrorOnPCSChainedItem=_encounteredErrorOnPCSChainedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)syncUpOperationForZone:(id)arg1 maxCost:(float)arg2 retryAfter:(unsigned long long*)arg3 ;
-(NSMutableOrderedSet *)deletedRecordIDs;
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)setDeletedRecordIDs:(NSMutableOrderedSet *)arg1 ;
-(void)setRecordsToSave:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)recordIDsToDeleteToEtags;
-(void)setRecordIDsToDeleteToEtags:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)conflictLosersToResolveByRecordID;
-(void)setConflictLosersToResolveByRecordID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)pluginFieldsForRecordDeletesByID;
-(void)setPluginFieldsForRecordDeletesByID:(NSMutableDictionary *)arg1 ;
-(void)main;
-(NSMutableArray *)recordsToSave;
-(BRCServerZone *)serverZone;
-(NSString *)stageID;
-(float)cost;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(id)initWithZone:(id)arg1 ;
-(BRCLocalItem *)itemNeedingPCSChaining;
-(BOOL)prepareWithMaxCost:(float)arg1 retryAfter:(unsigned long long*)arg2 ;
-(BOOL)_performPCSChainOperationIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_performModifyRecordsOrPCSChainOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)performShareUpdate:(/*^block*/id)arg1 ;
-(void)_scheduleShareUpdateAndModifyRecordsAndZoneCreationOperation;
-(void)_performShareUpdateAndModifyRecordsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_recordIsIWorkShareable:(id)arg1 ;
-(void)_setSharingFieldsOnContentRecord:(id)arg1 withProtectionData:(id)arg2 baseToken:(id)arg3 routingKey:(id)arg4 forceOverwrite:(BOOL)arg5 ;
-(void)_performUpdateSharingProtectionDataIfNecessary:(/*^block*/id)arg1 ;
-(NSMutableArray *)packagesInFlight;
-(void)setPackagesInFlight:(NSMutableArray *)arg1 ;
-(NSMutableArray *)createdAppLibraryNames;
-(NSMutableArray *)iworkUnsharedShareIDs;
-(void)setIworkUnsharedShareIDs:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)renamedShareIDsToNames;
-(void)setRenamedShareIDsToNames:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)recordsNeedingNewSharingProtectionInfo;
-(void)setRecordsNeedingNewSharingProtectionInfo:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recordsNeedingUpdatedSharingProtectionInfo;
-(void)setRecordsNeedingUpdatedSharingProtectionInfo:(NSMutableArray *)arg1 ;
-(void)setItemNeedingPCSChaining:(BRCLocalItem *)arg1 ;
-(void)setStageID:(NSString *)arg1 ;
-(id)syncUpCompletionBlock;
-(void)setSyncUpCompletionBlock:(id)arg1 ;
-(void)setServerZone:(BRCServerZone *)arg1 ;
-(BOOL)encounteredErrorOnPCSChainedItem;
@end

