/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <Message/MFMailDelivery.h>

@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery {

	MFSMTPConnection* _connection;

}
+(id)log;
-(void)setAccount:(id)arg1 ;
-(id)deliverMessageData:(id)arg1 toRecipients:(id)arg2 ;
-(Class)deliveryClass;
-(void)_openConnection;
@end

