/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLJournalEntryPayloadID, PLJournalEntryPayload;
@class PLJournalEntryHeader, NSPersistentHistoryToken;

@interface PLJournalEntry : NSObject {

	id<PLJournalEntryPayloadID> _payloadID;
	id<PLJournalEntryPayload> _payload;
	PLJournalEntryHeader* _header;
	NSPersistentHistoryToken* _historyToken;

}

@property (nonatomic,retain) id<PLJournalEntryPayloadID> payloadID;                //@synthesize payloadID=_payloadID - In the implementation block
@property (assign,nonatomic) unsigned payloadVersion; 
@property (nonatomic,retain) PLJournalEntryHeader * header;                        //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSPersistentHistoryToken * historyToken;              //@synthesize historyToken=_historyToken - In the implementation block
@property (nonatomic,retain) id<PLJournalEntryPayload> payload;                    //@synthesize payload=_payload - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(void)setPayload:(id<PLJournalEntryPayload>)arg1 ;
-(id<PLJournalEntryPayload>)payload;
-(unsigned long long)entryType;
-(PLJournalEntryHeader *)header;
-(void)setHeader:(PLJournalEntryHeader *)arg1 ;
-(unsigned)payloadVersion;
-(id<PLJournalEntryPayloadID>)payloadID;
-(id)initWithPayloadID:(id)arg1 payload:(id)arg2 entryType:(int)arg3 ;
-(id)initForInsertWithPayload:(id)arg1 ;
-(id)initForUpdateWithPayload:(id)arg1 ;
-(id)initForDeleteWithPayloadID:(id)arg1 ;
-(void)setPayloadVersion:(unsigned)arg1 ;
-(BOOL)_readFromFileHandle:(id)arg1 decodePayload:(BOOL)arg2 payloadClass:(Class)arg3 error:(id*)arg4 ;
-(BOOL)readFromFileHandle:(id)arg1 decodePayload:(BOOL)arg2 payloadClass:(Class)arg3 entryOffset:(unsigned long long*)arg4 error:(id*)arg5 ;
-(void)_appendHeaderData:(id)arg1 headerCRC:(unsigned short)arg2 payloadData:(id)arg3 toFileHandle:(id)arg4 ;
-(void)appendHeaderData:(id)arg1 headerCRC:(unsigned short)arg2 payloadData:(id)arg3 toFileHandle:(id)arg4 ;
-(BOOL)writeToFileHandle:(id)arg1 error:(id*)arg2 ;
-(id)descriptionWithBuilder:(id)arg1 ;
-(void)setPayloadID:(id<PLJournalEntryPayloadID>)arg1 ;
-(NSPersistentHistoryToken *)historyToken;
-(void)setHistoryToken:(NSPersistentHistoryToken *)arg1 ;
@end

