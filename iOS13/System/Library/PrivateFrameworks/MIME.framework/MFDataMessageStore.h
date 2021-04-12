/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MFMessageStore.h>

@class NSData, NSString;

@interface MFDataMessageStore : MFMessageStore {

	NSData* _data;
	Class _messageClass;
	NSString* _storagePath;
	id _mailboxUid;

}

@property (nonatomic,retain) id mailboxUid;              //@synthesize mailboxUid=_mailboxUid - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id)message;
-(id)account;
-(id)storePath;
-(id)mailboxUid;
-(void)deleteBodyDataForMessage:(id)arg1 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3 ;
-(id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(void)writeUpdatedMessageDataToDisk;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)storagePath;
-(BOOL)messageCanBeTriaged:(id)arg1 ;
-(void)setStoragePath:(id)arg1 ;
-(void)setMessageClass:(Class)arg1 ;
-(void)setMailboxUid:(id)arg1 ;
-(void)_deleteCachedBodyForMessage:(id)arg1 ;
-(id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
@end

