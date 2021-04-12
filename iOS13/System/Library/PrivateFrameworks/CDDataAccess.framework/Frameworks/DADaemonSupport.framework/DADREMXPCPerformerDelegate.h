/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/


@class NSString;

@interface DADREMXPCPerformerDelegate : NSObject {

	BOOL _finished;
	NSString* _accountID;
	NSString* _delegateID;
	/*^block*/id _remXPCCompletion;

}

@property (nonatomic,retain) NSString * accountID;               //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) BOOL finished;                      //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSString * delegateID;              //@synthesize delegateID=_delegateID - In the implementation block
@property (nonatomic,copy) id remXPCCompletion;                  //@synthesize remXPCCompletion=_remXPCCompletion - In the implementation block
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(void)finishWithError:(id)arg1 ;
-(NSString *)accountID;
-(id)initWithAccountID:(id)arg1 ;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setDelegateID:(NSString *)arg1 ;
-(NSString *)delegateID;
-(id)remXPCCompletion;
-(void)setRemXPCCompletion:(id)arg1 ;
@end

