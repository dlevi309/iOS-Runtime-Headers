/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)senderList;
-(NSDate *)dateSent;
-(void)setDateSent:(id)arg1;
-(void)setToList:(id)arg1;
-(void)setSenderList:(id)arg1;
-(void)setCcList:(id)arg1;
-(void)setBccList:(id)arg1;
-(NSArray *)toList;
-(NSArray *)ccList;
-(MFMailboxUid *)mailbox;
-(NSArray *)bccList;
-(void)setMailbox:(id)arg1;
-(void)setSubject:(id)arg1;
-(MFAddressAtomStatusManager *)atomManager;
-(void)setAtomManager:(id)arg1;

@end

