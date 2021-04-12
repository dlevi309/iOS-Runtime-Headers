/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

@class NSDate, ECSubject, MFMailboxUid, NSArray, MFAddressAtomStatusManager;


@protocol MessageHeaderViewModelBuilder <MessageItemViewModelBuilder>
@property (nonatomic,copy) NSDate * dateSent; 
@property (nonatomic,copy) ECSubject * subject; 
@property (nonatomic,copy) MFMailboxUid * mailbox; 
@property (nonatomic,copy) NSArray * senderList; 
@property (nonatomic,copy) NSArray * toList; 
@property (nonatomic,copy) NSArray * ccList; 
@property (nonatomic,copy) NSArray * bccList; 
@property (nonatomic,retain) MFAddressAtomStatusManager * atomManager; 
@required
-(ECSubject *)subject;
-(void)setSubject:(id)arg1;
-(NSDate *)dateSent;
-(void)setDateSent:(id)arg1;
-(MFMailboxUid *)mailbox;
-(void)setMailbox:(id)arg1;
-(void)setSenderList:(id)arg1;
-(void)setToList:(id)arg1;
-(void)setCcList:(id)arg1;
-(void)setBccList:(id)arg1;
-(NSArray *)senderList;
-(NSArray *)toList;
-(NSArray *)ccList;
-(NSArray *)bccList;
-(MFAddressAtomStatusManager *)atomManager;
-(void)setAtomManager:(id)arg1;

@end

