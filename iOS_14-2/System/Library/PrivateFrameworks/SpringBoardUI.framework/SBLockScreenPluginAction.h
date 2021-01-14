/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)authenticationPolicy;
-(id)init;
-(id)completion;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)setAuthenticationPolicy:(long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(BOOL)isApplicationAction;
-(BOOL)isEmergencyDialerAction;
-(BOOL)isCallAction;
-(void)sendResponseWithSuccess:(BOOL)arg1 ;
@end

