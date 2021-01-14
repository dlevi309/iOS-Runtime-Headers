/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/ECLocalMessageAction.h>
#import <libobjc.A.dylib/ECTransferUndownloadedMessageActionBuilder.h>

@class NSURL, NSString, NSArray;

@interface ECTransferUndownloadedMessageAction : ECLocalMessageAction <ECTransferUndownloadedMessageActionBuilder> {

	long long _transferType;
	NSURL* _sourceMailboxURL;
	NSURL* _destinationMailboxURL;
	NSString* _oldestPersistedRemoteID;
	NSArray* _itemsToDelete;

}

@property (assign,nonatomic) long long transferType;                            //@synthesize transferType=_transferType - In the implementation block
@property (nonatomic,retain) NSURL * sourceMailboxURL;                          //@synthesize sourceMailboxURL=_sourceMailboxURL - In the implementation block
@property (nonatomic,retain) NSURL * destinationMailboxURL;                     //@synthesize destinationMailboxURL=_destinationMailboxURL - In the implementation block
@property (nonatomic,copy) NSString * oldestPersistedRemoteID;                  //@synthesize oldestPersistedRemoteID=_oldestPersistedRemoteID - In the implementation block
@property (nonatomic,retain) NSArray * itemsToDelete;                           //@synthesize itemsToDelete=_itemsToDelete - In the implementation block
@property (nonatomic,retain) NSString * messageActionPersistentID; 
@property (nonatomic,retain) NSURL * mailboxURL; 
@property (assign,nonatomic) BOOL userInitiated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(NSArray *)itemsToDelete;
-(NSURL *)sourceMailboxURL;
-(NSURL *)destinationMailboxURL;
-(void)setDestinationMailboxURL:(NSURL *)arg1 ;
-(NSString *)oldestPersistedRemoteID;
-(void)setOldestPersistedRemoteID:(NSString *)arg1 ;
-(long long)transferType;
-(void)setTransferType:(long long)arg1 ;
-(void)setSourceMailboxURL:(NSURL *)arg1 ;
-(void)setItemsToDelete:(NSArray *)arg1 ;
-(void)updateWithCompletedCopyItems:(id)arg1 ;
@end

