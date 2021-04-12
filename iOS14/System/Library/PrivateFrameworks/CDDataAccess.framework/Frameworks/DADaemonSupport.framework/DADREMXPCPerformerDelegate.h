/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(BOOL)finished;
-(void)setFinished:(BOOL)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 ;
-(NSString *)delegateID;
-(void)setDelegateID:(NSString *)arg1 ;
-(id)remXPCCompletion;
-(void)setRemXPCCompletion:(id)arg1 ;
@end

