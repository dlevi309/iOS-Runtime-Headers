/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)account;
-(id)message;
-(id)storePath;
-(id)initWithData:(id)arg1 ;
-(id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(void)setStoragePath:(id)arg1 ;
-(id)storagePath;
-(BOOL)messageCanBeTriaged:(id)arg1 ;
-(id)mailboxUid;
-(void)setMessageClass:(Class)arg1 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3 ;
-(id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(void)writeUpdatedMessageDataToDisk;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(void)setMailboxUid:(id)arg1 ;
-(id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
@end

