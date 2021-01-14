/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@class NSString;

@interface DAAccountClassNames : NSObject {

	NSString* _accountClassName;
	NSString* _clientAccountClassName;
	NSString* _daemonAccountClassName;
	NSString* _agentClassName;

}

@property (nonatomic,retain) NSString * accountClassName;                    //@synthesize accountClassName=_accountClassName - In the implementation block
@property (nonatomic,retain) NSString * clientAccountClassName;              //@synthesize clientAccountClassName=_clientAccountClassName - In the implementation block
@property (nonatomic,retain) NSString * daemonAccountClassName;              //@synthesize daemonAccountClassName=_daemonAccountClassName - In the implementation block
@property (nonatomic,retain) NSString * agentClassName;                      //@synthesize agentClassName=_agentClassName - In the implementation block
-(id)description;
-(void)setAccountClassName:(NSString *)arg1 ;
-(void)setClientAccountClassName:(NSString *)arg1 ;
-(void)setAgentClassName:(NSString *)arg1 ;
-(void)setDaemonAccountClassName:(NSString *)arg1 ;
-(NSString *)accountClassName;
-(NSString *)clientAccountClassName;
-(NSString *)daemonAccountClassName;
-(NSString *)agentClassName;
@end

