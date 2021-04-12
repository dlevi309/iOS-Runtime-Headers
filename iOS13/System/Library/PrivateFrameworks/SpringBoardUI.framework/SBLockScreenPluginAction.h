/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/


@class BSAction, NSString;

@interface SBLockScreenPluginAction : NSObject {

	BSAction* _action;
	NSString* _label;
	long long _authenticationPolicy;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id completion;                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long authenticationPolicy;              //@synthesize authenticationPolicy=_authenticationPolicy - In the implementation block
+(id)action;
+(id)actionWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)completion;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(long long)authenticationPolicy;
-(void)setAuthenticationPolicy:(long long)arg1 ;
-(BOOL)isCallAction;
-(BOOL)isInCallAction;
-(void)sendResponseWithSuccess:(BOOL)arg1 ;
-(BOOL)isApplicationAction;
-(BOOL)isEmergencyDialerAction;
@end

