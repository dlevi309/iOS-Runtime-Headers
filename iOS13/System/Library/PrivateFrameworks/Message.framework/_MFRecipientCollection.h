/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSMutableArray, NSArray;

@interface _MFRecipientCollection : NSObject {

	NSMutableArray* _to;
	NSMutableArray* _cc;
	NSMutableArray* _bcc;

}

@property (nonatomic,copy,readonly) NSArray * toRecipients; 
@property (nonatomic,copy,readonly) NSArray * toRecipientStrings; 
@property (nonatomic,copy,readonly) NSArray * ccRecipients; 
@property (nonatomic,copy,readonly) NSArray * ccRecipientStrings; 
@property (nonatomic,copy,readonly) NSArray * bccRecipients; 
@property (nonatomic,copy,readonly) NSArray * bccRecipientStrings; 
-(id)init;
-(NSArray *)toRecipientStrings;
-(NSArray *)ccRecipientStrings;
-(NSArray *)bccRecipientStrings;
-(void)addToRecipientWithAddress:(id)arg1 comment:(id)arg2 ;
-(void)addCCRecipientWithAddress:(id)arg1 comment:(id)arg2 ;
-(void)addBCCRecipientWithAddress:(id)arg1 comment:(id)arg2 ;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(NSArray *)bccRecipients;
-(void)addToRecipient:(id)arg1 ;
-(void)addCCRecipient:(id)arg1 ;
-(void)addBCCRecipient:(id)arg1 ;
@end

