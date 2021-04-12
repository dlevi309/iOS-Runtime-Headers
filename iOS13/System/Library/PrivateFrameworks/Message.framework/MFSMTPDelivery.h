/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFMailDelivery.h>

@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery {

	MFSMTPConnection* _connection;

}
-(void)setAccount:(id)arg1 ;
-(Class)deliveryClass;
-(id)deliverMessageData:(id)arg1 toRecipients:(id)arg2 ;
-(void)_openConnection;
@end

