/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)itemsToCopy;
-(NSArray *)itemsToDelete;
-(NSURL *)sourceMailboxURL;
-(NSURL *)destinationMailboxURL;
-(void)setDestinationMailboxURL:(id)arg1;
-(NSArray *)itemsToDownload;
-(long long)transferType;
-(void)setTransferType:(long long)arg1;
-(void)setSourceMailboxURL:(id)arg1;
-(void)setItemsToDownload:(id)arg1;
-(void)setItemsToCopy:(id)arg1;
-(void)setItemsToDelete:(id)arg1;

@end

