/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/ECLocalMessageAction.h>
#import <libobjc.A.dylib/ECTransferMessageActionBuilder.h>

@class NSURL, NSArray, NSMutableOrderedSet, NSString;

@interface ECTransferMessageAction : ECLocalMessageAction <ECTransferMessageActionBuilder> {

	NSMutableOrderedSet* _itemsToDownload;
	NSMutableOrderedSet* _itemsToCopy;
	NSMutableOrderedSet* _itemsToDelete;
	long long _transferType;
	NSURL* _sourceMailboxURL;
	NSURL* _destinationMailboxURL;

}

@property (assign,nonatomic) long long transferType;                            //@synthesize transferType=_transferType - In the implementation block
@property (nonatomic,retain) NSURL * sourceMailboxURL;                          //@synthesize sourceMailboxURL=_sourceMailboxURL - In the implementation block
@property (nonatomic,retain) NSURL * destinationMailboxURL;                     //@synthesize destinationMailboxURL=_destinationMailboxURL - In the implementation block
@property (nonatomic,retain) NSArray * itemsToDownload; 
@property (nonatomic,retain) NSArray * itemsToCopy; 
@property (nonatomic,retain) NSArray * itemsToDelete; 
@property (nonatomic,retain) NSString * messageActionPersistentID; 
@property (nonatomic,retain) NSURL * mailboxURL; 
@property (assign,nonatomic) BOOL userInitiated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(NSArray *)itemsToCopy;
-(NSArray *)itemsToDelete;
-(NSURL *)sourceMailboxURL;
-(NSURL *)destinationMailboxURL;
-(void)setDestinationMailboxURL:(NSURL *)arg1 ;
-(NSArray *)itemsToDownload;
-(long long)transferType;
-(void)setTransferType:(long long)arg1 ;
-(void)setSourceMailboxURL:(NSURL *)arg1 ;
-(void)setItemsToDownload:(NSArray *)arg1 ;
-(void)setItemsToCopy:(NSArray *)arg1 ;
-(void)setItemsToDelete:(NSArray *)arg1 ;
-(void)updateWithCompletedItems:(id)arg1 forPhase:(long long)arg2 ;
-(void)updateWithFailedItems:(id)arg1 forPhase:(long long)arg2 ;
@end

