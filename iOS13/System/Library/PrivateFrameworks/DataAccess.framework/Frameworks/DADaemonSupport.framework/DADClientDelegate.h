/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/

#import <DataAccessExpress/DADisableableObject.h>

@class NSString, DADClient;

@interface DADClientDelegate : DADisableableObject {

	BOOL _finished;
	BOOL _consumerCancelled;
	NSString* _delegateID;
	DADClient* _client;
	NSString* _accountID;

}

@property (assign,nonatomic,__weak) DADClient * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSString * accountID;                   //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) BOOL finished;                          //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL consumerCancelled;                 //@synthesize consumerCancelled=_consumerCancelled - In the implementation block
@property (nonatomic,retain) NSString * delegateID;                  //@synthesize delegateID=_delegateID - In the implementation block
-(void)dealloc;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(DADClient *)client;
-(void)setClient:(DADClient *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)disable;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setDelegateID:(NSString *)arg1 ;
-(NSString *)delegateID;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 ;
-(void)setConsumerCancelled:(BOOL)arg1 ;
-(void)userRequestsCancel;
-(BOOL)consumerCancelled;
@end

