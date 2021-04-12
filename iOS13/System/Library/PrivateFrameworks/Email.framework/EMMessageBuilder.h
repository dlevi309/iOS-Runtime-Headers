/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

@class NSArray, NSUUID;


@protocol EMMessageBuilder <EMMutableContentItem,EMMutableMessageListItem>
@property (nonatomic,retain) id<ECEmailAddressConvertible> senderAddress; 
@property (nonatomic,copy) NSArray * bccList; 
@property (nonatomic,copy) NSUUID * documentID; 
@required
-(NSUUID *)documentID;
-(id<ECEmailAddressConvertible>)senderAddress;
-(void)setSenderAddress:(id)arg1;
-(void)setBccList:(id)arg1;
-(void)setDocumentID:(id)arg1;
-(NSArray *)bccList;

@end

