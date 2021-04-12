/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
*/

#import <POP/POP-Structs.h>
#import <Message/MFLibraryStore.h>

@class MFPOP3Connection;

@interface MFLibraryPOPStore : MFLibraryStore {

	MFPOP3Connection* _connection;
	unsigned long long _serverMessageCount;

}
-(unsigned long long)serverMessageCount;
-(long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 ;
-(void)messagesWereDeleted:(id)arg1 ;
-(id)messageForRemoteID:(id)arg1 ;
-(id)messageForRemoteID:(id)arg1 inMailbox:(id)arg2 ;
-(id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 ;
-(BOOL)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 withConsumer:(id)arg4 downloadIfNecessary:(BOOL)arg5 didDownload:(BOOL*)arg6 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 usePartDatas:(BOOL)arg5 didDownload:(BOOL*)arg6 ;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4 ;
-(unsigned long long)serverUnreadOnlyOnServerCount;
-(void)purgeMessages:(id)arg1 ;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(void)setServerMessageCount:(unsigned long long)arg1 ;
-(void)openSynchronouslyUpdatingMetadata:(BOOL)arg1 ;
-(void)setServerUnreadOnlyOnServerCount:(unsigned long long)arg1 ;
@end

