/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/


#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
@class NSMutableData, NSMutableDictionary, ABBufferQuery, CNManagedConfiguration;

@interface ABBufferQueryCursor : NSObject {

	BOOL _hasFoundAnyImageDataForCurrentContact;
	int _currentMultivalueIdentifier;
	int _currentPropertyID;
	int _currentRecordID;
	int _multivaluePropertyIDColumn;
	int _multivalueIdentifierColumn;
	int _multivalueUUIDColumn;
	int _multivalueValueColumn;
	int _multivalueLabelColumn;
	int _multivalueEntryKeyColumn;
	int _multivalueEntryValueColumn;
	int _contactLinkUUIDColumn;
	int _contactPreferredForImageColumn;
	int _personLinkColumn;
	NSMutableData* _mutableData;
	NSMutableDictionary* _matchInfo;
	sqlite3_blobRef _incompleteBlob;
	unsigned long long _blobBytesWritten;
	unsigned long long _blobLength;
	long long _currentMultivalue;
	long long _resumeToken;
	unsigned long long _maxBufferSize;
	unsigned long long _maxContactsPerBatch;
	unsigned long long _countOfContactsInBuffer;
	ABBufferQuery* _query;
	CNManagedConfiguration* _managedConfiguration;

}

@property (nonatomic,retain) NSMutableData * mutableData;                                //@synthesize mutableData=_mutableData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * matchInfo;                            //@synthesize matchInfo=_matchInfo - In the implementation block
@property (assign,nonatomic) sqlite3_blobRef incompleteBlob;                             //@synthesize incompleteBlob=_incompleteBlob - In the implementation block
@property (assign,nonatomic) unsigned long long blobBytesWritten;                        //@synthesize blobBytesWritten=_blobBytesWritten - In the implementation block
@property (assign,nonatomic) unsigned long long blobLength;                              //@synthesize blobLength=_blobLength - In the implementation block
@property (assign,nonatomic) long long currentMultivalue;                                //@synthesize currentMultivalue=_currentMultivalue - In the implementation block
@property (assign,nonatomic) BOOL hasFoundAnyImageDataForCurrentContact;                 //@synthesize hasFoundAnyImageDataForCurrentContact=_hasFoundAnyImageDataForCurrentContact - In the implementation block
@property (assign,nonatomic) long long resumeToken;                                      //@synthesize resumeToken=_resumeToken - In the implementation block
@property (assign,nonatomic) int currentMultivalueIdentifier;                            //@synthesize currentMultivalueIdentifier=_currentMultivalueIdentifier - In the implementation block
@property (assign,nonatomic) int currentPropertyID;                                      //@synthesize currentPropertyID=_currentPropertyID - In the implementation block
@property (assign,nonatomic) int currentRecordID;                                        //@synthesize currentRecordID=_currentRecordID - In the implementation block
@property (assign,nonatomic) unsigned long long maxBufferSize;                           //@synthesize maxBufferSize=_maxBufferSize - In the implementation block
@property (assign,nonatomic) unsigned long long maxContactsPerBatch;                     //@synthesize maxContactsPerBatch=_maxContactsPerBatch - In the implementation block
@property (assign,nonatomic) unsigned long long countOfContactsInBuffer;                 //@synthesize countOfContactsInBuffer=_countOfContactsInBuffer - In the implementation block
@property (nonatomic,readonly) ABBufferQuery * query;                                    //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) CNManagedConfiguration * managedConfiguration;              //@synthesize managedConfiguration=_managedConfiguration - In the implementation block
@property (assign,nonatomic) int multivaluePropertyIDColumn;                             //@synthesize multivaluePropertyIDColumn=_multivaluePropertyIDColumn - In the implementation block
@property (assign,nonatomic) int multivalueIdentifierColumn;                             //@synthesize multivalueIdentifierColumn=_multivalueIdentifierColumn - In the implementation block
@property (assign,nonatomic) int multivalueUUIDColumn;                                   //@synthesize multivalueUUIDColumn=_multivalueUUIDColumn - In the implementation block
@property (assign,nonatomic) int multivalueValueColumn;                                  //@synthesize multivalueValueColumn=_multivalueValueColumn - In the implementation block
@property (assign,nonatomic) int multivalueLabelColumn;                                  //@synthesize multivalueLabelColumn=_multivalueLabelColumn - In the implementation block
@property (assign,nonatomic) int multivalueEntryKeyColumn;                               //@synthesize multivalueEntryKeyColumn=_multivalueEntryKeyColumn - In the implementation block
@property (assign,nonatomic) int multivalueEntryValueColumn;                             //@synthesize multivalueEntryValueColumn=_multivalueEntryValueColumn - In the implementation block
@property (assign,nonatomic) int contactLinkUUIDColumn;                                  //@synthesize contactLinkUUIDColumn=_contactLinkUUIDColumn - In the implementation block
@property (assign,nonatomic) int contactPreferredForImageColumn;                         //@synthesize contactPreferredForImageColumn=_contactPreferredForImageColumn - In the implementation block
@property (assign,nonatomic) int personLinkColumn;                                       //@synthesize personLinkColumn=_personLinkColumn - In the implementation block
-(ABBufferQuery *)query;
-(void)setManagedConfiguration:(CNManagedConfiguration *)arg1 ;
-(CNManagedConfiguration *)managedConfiguration;
-(int)currentPropertyID;
-(long long)currentMultivalue;
-(unsigned long long)blobLength;
-(BOOL)hasFoundAnyImageDataForCurrentContact;
-(NSMutableDictionary *)matchInfo;
-(void)setPersonLinkColumn:(int)arg1 ;
-(void)setContactLinkUUIDColumn:(int)arg1 ;
-(int)personLinkColumn;
-(void)setMultivalueUUIDColumn:(int)arg1 ;
-(id)initWithAddressBook:(void*)arg1 predicate:(id)arg2 propertyIdentifierSet:(CFSetRef)arg3 includeLinkedContacts:(BOOL)arg4 sortOrder:(unsigned)arg5 suggestedContactsPerBatch:(unsigned long long)arg6 managedConfiguration:(id)arg7 ;
-(void)setContactPreferredForImageColumn:(int)arg1 ;
-(void)setMultivaluePropertyIDColumn:(int)arg1 ;
-(void)setCountOfContactsInBuffer:(unsigned long long)arg1 ;
-(int)multivaluePropertyIDColumn;
-(void)setCurrentMultivalue:(long long)arg1 ;
-(void)setBlobBytesWritten:(unsigned long long)arg1 ;
-(NSMutableData *)mutableData;
-(void)setMultivalueEntryValueColumn:(int)arg1 ;
-(void)setMaxBufferSize:(unsigned long long)arg1 ;
-(void)setCurrentPropertyID:(int)arg1 ;
-(int)contactPreferredForImageColumn;
-(void)setMultivalueValueColumn:(int)arg1 ;
-(int)currentMultivalueIdentifier;
-(void)setBlobLength:(unsigned long long)arg1 ;
-(int)multivalueLabelColumn;
-(unsigned long long)maxBufferSize;
-(void)setMutableData:(NSMutableData *)arg1 ;
-(void)setMatchInfo:(NSMutableDictionary *)arg1 ;
-(unsigned long long)blobBytesWritten;
-(void)fetchNextBatchWithReply:(/*^block*/id)arg1 ;
-(void)setCurrentMultivalueIdentifier:(int)arg1 ;
-(int)multivalueIdentifierColumn;
-(int)contactLinkUUIDColumn;
-(sqlite3_blobRef)incompleteBlob;
-(void)setResumeToken:(long long)arg1 ;
-(int)multivalueEntryValueColumn;
-(long long)resumeToken;
-(void)setIncompleteBlob:(sqlite3_blobRef)arg1 ;
-(void)setMaxContactsPerBatch:(unsigned long long)arg1 ;
-(void)setMultivalueLabelColumn:(int)arg1 ;
-(void)setCurrentRecordID:(int)arg1 ;
-(void)setHasFoundAnyImageDataForCurrentContact:(BOOL)arg1 ;
-(int)multivalueUUIDColumn;
-(unsigned long long)maxContactsPerBatch;
-(int)multivalueValueColumn;
-(id)initWithQuery:(id)arg1 batchSize:(unsigned long long)arg2 managedConfiguration:(id)arg3 ;
-(unsigned long long)countOfContactsInBuffer;
-(void)setMultivalueIdentifierColumn:(int)arg1 ;
-(void)setMultivalueEntryKeyColumn:(int)arg1 ;
-(void)dealloc;
-(int)currentRecordID;
-(int)multivalueEntryKeyColumn;
@end

