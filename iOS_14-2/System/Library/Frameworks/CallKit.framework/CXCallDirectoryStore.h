/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@class CXDatabase, NSString, NSURL;

@interface CXCallDirectoryStore : NSObject {

	BOOL _temporary;
	CXDatabase* _database;
	long long _lastAddBlockingEntriesCount;
	NSString* _addBlockingEntriesInsertPhoneNumberBlockingEntrySQL;
	long long _lastRemoveBlockingEntriesCount;
	NSString* _removeBlockingEntriesSQL;
	long long _lastAddIdentificationEntriesCount;
	NSString* _addIdentificationEntriesInsertLabelsSQL;
	NSString* _addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL;
	long long _lastAddPhoneNumbersCount;
	NSString* _addPhoneNumbersSQL;
	long long _lastRemoveIdentificationEntriesCount;
	NSString* _removeIdentificationEntriesSQL;

}

@property (nonatomic,retain) CXDatabase * database;                                                                 //@synthesize database=_database - In the implementation block
@property (assign,getter=isTemporary,nonatomic) BOOL temporary;                                                     //@synthesize temporary=_temporary - In the implementation block
@property (assign,nonatomic) long long lastAddBlockingEntriesCount;                                                 //@synthesize lastAddBlockingEntriesCount=_lastAddBlockingEntriesCount - In the implementation block
@property (nonatomic,copy) NSString * addBlockingEntriesInsertPhoneNumberBlockingEntrySQL;                          //@synthesize addBlockingEntriesInsertPhoneNumberBlockingEntrySQL=_addBlockingEntriesInsertPhoneNumberBlockingEntrySQL - In the implementation block
@property (assign,nonatomic) long long lastRemoveBlockingEntriesCount;                                              //@synthesize lastRemoveBlockingEntriesCount=_lastRemoveBlockingEntriesCount - In the implementation block
@property (nonatomic,copy) NSString * removeBlockingEntriesSQL;                                                     //@synthesize removeBlockingEntriesSQL=_removeBlockingEntriesSQL - In the implementation block
@property (assign,nonatomic) long long lastAddIdentificationEntriesCount;                                           //@synthesize lastAddIdentificationEntriesCount=_lastAddIdentificationEntriesCount - In the implementation block
@property (nonatomic,copy) NSString * addIdentificationEntriesInsertLabelsSQL;                                      //@synthesize addIdentificationEntriesInsertLabelsSQL=_addIdentificationEntriesInsertLabelsSQL - In the implementation block
@property (nonatomic,copy) NSString * addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL;              //@synthesize addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL=_addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL - In the implementation block
@property (assign,nonatomic) long long lastAddPhoneNumbersCount;                                                    //@synthesize lastAddPhoneNumbersCount=_lastAddPhoneNumbersCount - In the implementation block
@property (nonatomic,copy) NSString * addPhoneNumbersSQL;                                                           //@synthesize addPhoneNumbersSQL=_addPhoneNumbersSQL - In the implementation block
@property (assign,nonatomic) long long lastRemoveIdentificationEntriesCount;                                        //@synthesize lastRemoveIdentificationEntriesCount=_lastRemoveIdentificationEntriesCount - In the implementation block
@property (nonatomic,copy) NSString * removeIdentificationEntriesSQL;                                               //@synthesize removeIdentificationEntriesSQL=_removeIdentificationEntriesSQL - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) long long schemaVersion; 
@property (getter=isCorrupt,nonatomic,readonly) BOOL corrupt; 
+(id)databaseURLUsingTemporaryDirectory:(BOOL)arg1 error:(id*)arg2 ;
+(BOOL)initializeDatabaseIfNecessaryAtURL:(id)arg1 usingTemplateAtURL:(id)arg2 error:(id*)arg3 ;
+(id)databaseTemplateURL;
-(long long)schemaVersion;
-(BOOL)isTemporary;
-(void)setAddBlockingEntriesInsertPhoneNumberBlockingEntrySQL:(NSString *)arg1 ;
-(id)firstIdentificationEntriesForPhoneNumbers:(id)arg1 error:(id*)arg2 ;
-(void)setLastRemoveIdentificationEntriesCount:(long long)arg1 ;
-(void)setDatabase:(CXDatabase *)arg1 ;
-(NSString *)addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL;
-(BOOL)_parseIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 handler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)init;
-(long long)lastAddBlockingEntriesCount;
-(void)setTemporary:(BOOL)arg1 ;
-(id)initWithTemplateURL:(id)arg1 readOnly:(BOOL)arg2 temporary:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)removeUnreferencedRecordsWithError:(id*)arg1 ;
-(long long)lastRemoveBlockingEntriesCount;
-(void)setAddIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL:(NSString *)arg1 ;
-(long long)idForExtensionWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)_addBlockingEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id*)arg5 ;
-(void)setAddIdentificationEntriesInsertLabelsSQL:(NSString *)arg1 ;
-(void)setRemoveBlockingEntriesSQL:(NSString *)arg1 ;
-(BOOL)_addPhoneNumbersWithEntryData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)containsBlockingEntryWithPhoneNumber:(id)arg1 error:(id*)arg2 ;
-(BOOL)setState:(long long)arg1 forExtensionWithID:(long long)arg2 error:(id*)arg3 ;
-(id)extensionWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeBlockingEntriesForExtensionWithID:(long long)arg1 error:(id*)arg2 ;
-(BOOL)isCorrupt;
-(BOOL)setStateLastModifiedDate:(id)arg1 forExtensionWithID:(long long)arg2 error:(id*)arg3 ;
-(BOOL)_removeUnreferencedPhoneNumbersWithError:(id*)arg1 ;
-(id)initForReadingWithError:(id*)arg1 ;
-(BOOL)removeExtensionWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(long long)idForPhoneNumber:(long long)arg1 error:(id*)arg2 ;
-(NSURL *)url;
-(BOOL)addBlockingEntryWithPhoneNumber:(long long)arg1 extensionID:(long long)arg2 error:(id*)arg3 ;
-(BOOL)removeIdentificationEntriesForExtensionWithID:(long long)arg1 error:(id*)arg2 ;
-(BOOL)containsBlockingEntryForEnabledExtensionWithPhoneNumberInArray:(id)arg1 error:(id*)arg2 ;
-(void)setLastRemoveBlockingEntriesCount:(long long)arg1 ;
-(BOOL)_containsBlockingEntryWithSQL:(id)arg1 bindings:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(id)_firstIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 error:(id*)arg3 ;
-(BOOL)vacuumWithError:(id*)arg1 ;
-(BOOL)removeIdentificationEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id*)arg3 ;
-(void)setRemoveIdentificationEntriesSQL:(NSString *)arg1 ;
-(id)_sqlBindingsForPrioritizedExtensionIdentifiers:(id)arg1 withPriorityOffset:(long long)arg2 ;
-(id)_sqlCaseMappingPlaceholderStringWithKeyColumnName:(id)arg1 defaultValue:(id)arg2 numberOfPairs:(unsigned long long)arg3 ;
-(NSString *)addBlockingEntriesInsertPhoneNumberBlockingEntrySQL;
-(id)prioritizedExtensionsWithError:(id*)arg1 ;
-(BOOL)addIdentificationEntryWithPhoneNumber:(long long)arg1 labelID:(long long)arg2 extensionID:(long long)arg3 error:(id*)arg4 ;
-(long long)lastRemoveIdentificationEntriesCount;
-(long long)addExtensionWithIdentifier:(id)arg1 priority:(long long)arg2 error:(id*)arg3 ;
-(BOOL)_addIdentificationEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id*)arg5 ;
-(NSString *)removeBlockingEntriesSQL;
-(BOOL)performTransactionWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(long long)addLabel:(id)arg1 error:(id*)arg2 ;
-(BOOL)containsBlockingEntryForEnabledExtensionWithPhoneNumber:(id)arg1 error:(id*)arg2 ;
-(BOOL)addBlockingEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id*)arg3 ;
-(NSString *)addIdentificationEntriesInsertLabelsSQL;
-(id)_firstIdentificationEntryForSQL:(id)arg1 bindings:(id)arg2 error:(id*)arg3 ;
-(BOOL)containsExtensionWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)firstIdentificationEntryForPhoneNumber:(id)arg1 error:(id*)arg2 ;
-(id)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)arg1 error:(id*)arg2 ;
-(id)_storeIdentificationEntryWithExtensionBundleID:(id)arg1 localizedLabel:(id)arg2 ;
-(BOOL)setState:(long long)arg1 forExtensionWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)setLastAddIdentificationEntriesCount:(long long)arg1 ;
-(long long)schemaVersionWithError:(id*)arg1 ;
-(long long)idForLabel:(id)arg1 error:(id*)arg2 ;
-(NSString *)addPhoneNumbersSQL;
-(id)prioritizedExtensionIdentifiersWithError:(id*)arg1 ;
-(CXDatabase *)database;
-(BOOL)removeBlockingEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id*)arg3 ;
-(id)initForReadingAndWritingWithError:(id*)arg1 ;
-(BOOL)setPrioritizedExtensionIdentifiers:(id)arg1 error:(id*)arg2 ;
-(long long)lastAddPhoneNumbersCount;
-(BOOL)addIdentificationEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id*)arg3 ;
-(void)setLastAddBlockingEntriesCount:(long long)arg1 ;
-(void)setAddPhoneNumbersSQL:(NSString *)arg1 ;
-(id)_sqlStringListPlaceholderStringWithNumberOfEntries:(long long)arg1 ;
-(BOOL)_removeIdentificationEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id*)arg5 ;
-(NSString *)removeIdentificationEntriesSQL;
-(long long)addExtensionWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)setStateForAllExtensions:(long long)arg1 error:(id*)arg2 ;
-(void)setLastAddPhoneNumbersCount:(long long)arg1 ;
-(long long)_findOrCreateIDForPhoneNumber:(long long)arg1 error:(id*)arg2 ;
-(id)initReadOnly:(BOOL)arg1 temporary:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)containsBlockingEntryWithPhoneNumberInArray:(id)arg1 error:(id*)arg2 ;
-(long long)lastAddIdentificationEntriesCount;
-(id)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 error:(id*)arg2 ;
-(BOOL)_parseFirstIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 handler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(id)_sqlValuesListPlaceholderStringWithNumberOfEntries:(long long)arg1 entryString:(id)arg2 ;
-(BOOL)_removeUnreferencedLabelsWithError:(id*)arg1 ;
-(BOOL)_removeBlockingEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id*)arg5 ;
@end

