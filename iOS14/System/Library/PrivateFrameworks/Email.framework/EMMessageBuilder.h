/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

@class NSArray, NSUUID;


@protocol EMMessageBuilder <EMMutableContentItem,EMMutableMessageListItem>
@property (nonatomic,retain) id<ECEmailAddressConvertible> senderAddress; 
@property (nonatomic,copy) NSArray * bccList; 
@property (nonatomic,copy) NSUUID * documentID; 
@required
-(void)setSenderAddress:(id)arg1;
-(id<ECEmailAddressConvertible>)senderAddress;
-(void)setBccList:(id)arg1;
-(NSArray *)bccList;
-(NSUUID *)documentID;
-(void)setDocumentID:(id)arg1;

@end

