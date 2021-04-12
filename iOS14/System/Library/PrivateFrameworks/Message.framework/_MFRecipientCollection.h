/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addToRecipient:(id)arg1 ;
-(void)addCCRecipient:(id)arg1 ;
-(void)addBCCRecipient:(id)arg1 ;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(NSArray *)bccRecipients;
-(void)addToRecipientWithAddress:(id)arg1 displayName:(id)arg2 ;
-(void)addCCRecipientWithAddress:(id)arg1 displayName:(id)arg2 ;
-(void)addBCCRecipientWithAddress:(id)arg1 displayName:(id)arg2 ;
@end

