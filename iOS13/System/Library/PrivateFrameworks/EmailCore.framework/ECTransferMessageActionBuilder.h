/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

@class NSURL, NSArray;


@protocol ECTransferMessageActionBuilder <ECLocalMessageActionBuilder>
@property (assign,nonatomic) long long transferType; 
@property (nonatomic,retain) NSURL * sourceMailboxURL; 
@property (nonatomic,retain) NSURL * destinationMailboxURL; 
@property (nonatomic,retain) NSArray * itemsToDownload; 
@property (nonatomic,retain) NSArray * itemsToCopy; 
@property (nonatomic,retain) NSArray * itemsToDelete; 
@required
-(NSArray *)itemsToDelete;
-(NSArray *)itemsToCopy;
-(NSURL *)sourceMailboxURL;
-(NSURL *)destinationMailboxURL;
-(NSArray *)itemsToDownload;
-(long long)transferType;
-(void)setTransferType:(long long)arg1;
-(void)setSourceMailboxURL:(id)arg1;
-(void)setDestinationMailboxURL:(id)arg1;
-(void)setItemsToDownload:(id)arg1;
-(void)setItemsToCopy:(id)arg1;
-(void)setItemsToDelete:(id)arg1;

@end

