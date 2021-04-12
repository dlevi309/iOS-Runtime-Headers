/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@protocol ASPolicyPreflighterDelegate;
@class ASAccount, ASPolicy, NSString, ASTaskManager;

@interface ASPolicyPreflighter : NSObject {

	BOOL _invalidated;
	ASAccount* _account;
	id<ASPolicyPreflighterDelegate> _delegate;
	id _contextInfo;
	ASPolicy* _policy;
	ASPolicy* _acknowledgedPolicy;
	NSString* _originalKey;
	ASTaskManager* _taskManager;

}

@property (assign,nonatomic,__weak) ASAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ASPolicy * policy;                                            //@synthesize policy=_policy - In the implementation block
@property (nonatomic,retain) ASPolicy * acknowledgedPolicy;                                //@synthesize acknowledgedPolicy=_acknowledgedPolicy - In the implementation block
@property (nonatomic,copy) NSString * originalKey;                                         //@synthesize originalKey=_originalKey - In the implementation block
@property (nonatomic,retain) ASTaskManager * taskManager;                                  //@synthesize taskManager=_taskManager - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                             //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic,__weak) id<ASPolicyPreflighterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id contextInfo;                                        //@synthesize contextInfo=_contextInfo - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(id<ASPolicyPreflighterDelegate>)delegate;
-(void)setDelegate:(id<ASPolicyPreflighterDelegate>)arg1 ;
-(ASPolicy *)policy;
-(ASAccount *)account;
-(void)setAccount:(ASAccount *)arg1 ;
-(void)setPolicy:(ASPolicy *)arg1 ;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)setContextInfo:(id)arg1 ;
-(ASTaskManager *)taskManager;
-(id)contextInfo;
-(NSString *)originalKey;
-(void)setTaskManager:(ASTaskManager *)arg1 ;
-(void)setOriginalKey:(NSString *)arg1 ;
-(ASPolicy *)acknowledgedPolicy;
-(void)setAcknowledgedPolicy:(ASPolicy *)arg1 ;
-(id)initWithAccount:(id)arg1 policyKey:(id)arg2 ;
-(id)_originalKey;
-(void)provisionTask:(id)arg1 failedWithError:(id)arg2 ;
-(void)provisionTask:(id)arg1 wipeRequested:(BOOL)arg2 accountOnlyRipeRequested:(BOOL)arg3 policies:(id)arg4 status:(long long)arg5 ;
-(void)startPreflight;
-(void)acknowledgePolicyCompliance;
-(void)acknowledgeIntentionToRemoteWipe;
-(void)acknowledgeAccountOnlyRemoteWipeWithSuccess:(BOOL)arg1 ;
-(void)cancelPendingPreflightRequest;
@end

