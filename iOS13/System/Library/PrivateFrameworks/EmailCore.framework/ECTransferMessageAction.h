/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * messageActionPersistentID; 
@property (nonatomic,retain) NSURL * mailboxURL; 
@property (assign,nonatomic) BOOL userInitiated; 
-(id)init;
-(NSString *)description;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(NSArray *)itemsToDelete;
-(NSArray *)itemsToCopy;
-(NSURL *)sourceMailboxURL;
-(NSURL *)destinationMailboxURL;
-(NSArray *)itemsToDownload;
-(long long)transferType;
-(void)setTransferType:(long long)arg1 ;
-(void)setSourceMailboxURL:(NSURL *)arg1 ;
-(void)setDestinationMailboxURL:(NSURL *)arg1 ;
-(void)setItemsToDownload:(NSArray *)arg1 ;
-(void)setItemsToCopy:(NSArray *)arg1 ;
-(void)setItemsToDelete:(NSArray *)arg1 ;
-(void)updateWithCompletedItems:(id)arg1 forPhase:(long long)arg2 ;
-(void)updateWithFailedItems:(id)arg1 forPhase:(long long)arg2 ;
@end

