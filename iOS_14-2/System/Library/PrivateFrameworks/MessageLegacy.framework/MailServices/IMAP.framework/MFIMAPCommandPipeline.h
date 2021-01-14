/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/


@class NSMutableArray;

@interface MFIMAPCommandPipeline : NSObject {

	unsigned long long _chunkSize;
	unsigned long long _expectedSize;
	unsigned _full : 1;
	unsigned _sending : 1;
	NSMutableArray* _fetchUnits;

}
-(BOOL)isFull;
-(void)setChunkSize:(unsigned long long)arg1 ;
-(unsigned long long)chunkSize;
-(void)setFull:(BOOL)arg1 ;
-(BOOL)isSending;
-(unsigned long long)expectedSize;
-(id)failureResponsesFromSendingCommandsWithConnection:(id)arg1 ;
-(void)_removeFetchUnitMatchingResponse:(id)arg1 ;
-(void)addFetchCommandForUid:(unsigned)arg1 fetchItem:(id)arg2 expectedLength:(unsigned long long)arg3 bodyDataConsumer:(id)arg4 consumerSection:(id)arg5 ;
@end

