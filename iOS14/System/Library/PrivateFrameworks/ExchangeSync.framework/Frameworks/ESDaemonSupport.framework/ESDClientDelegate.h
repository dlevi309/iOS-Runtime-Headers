/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
*/

#import <DataAccessExpress/DADisableableObject.h>

@class NSString, ESDClient;

@interface ESDClientDelegate : DADisableableObject {

	BOOL _finished;
	BOOL _consumerCancelled;
	NSString* _delegateID;
	ESDClient* _client;
	NSString* _accountID;

}

@property (assign,nonatomic,__weak) ESDClient * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSString * accountID;                   //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) BOOL finished;                          //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL consumerCancelled;                 //@synthesize consumerCancelled=_consumerCancelled - In the implementation block
@property (nonatomic,retain) NSString * delegateID;                  //@synthesize delegateID=_delegateID - In the implementation block
-(void)disable;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(BOOL)finished;
-(ESDClient *)client;
-(void)setClient:(ESDClient *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(NSString *)delegateID;
-(void)setDelegateID:(NSString *)arg1 ;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 ;
-(void)setConsumerCancelled:(BOOL)arg1 ;
-(void)userRequestsCancel;
-(BOOL)consumerCancelled;
@end

