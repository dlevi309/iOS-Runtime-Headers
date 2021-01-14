/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@class APSConnection, CKAPSMachServiceConnectionKey, NSString;

@interface CKAPSMachServiceConnectionDelegate : NSObject <APSConnectionDelegate> {

	APSConnection* _connection;
	CKAPSMachServiceConnectionKey* _key;

}

@property (assign,nonatomic,__weak) APSConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) CKAPSMachServiceConnectionKey * key;              //@synthesize key=_key - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(APSConnection *)connection;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3 ;
-(CKAPSMachServiceConnectionKey *)key;
-(id)initWithConnection:(id)arg1 key:(id)arg2 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(void)setConnection:(APSConnection *)arg1 ;
-(void)setKey:(CKAPSMachServiceConnectionKey *)arg1 ;
@end

