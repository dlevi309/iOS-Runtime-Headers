/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/

#import <libobjc.A.dylib/ASTSessionSigningDelegate.h>

@class ASTIdentity, ASTSession, NSDictionary, ASTProfileResult, ASTAuthInfoResult, NSString;

@interface ASTAutomatedSession : NSObject <ASTSessionSigningDelegate> {

	ASTIdentity* _identity;
	/*^block*/id _completion;
	ASTSession* _session;
	NSDictionary* _tests;
	ASTProfileResult* _profile;
	ASTAuthInfoResult* _authInfo;
	/*^block*/id _authInfoHandler;

}

@property (nonatomic,retain) ASTIdentity * identity;                    //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy) id completion;                               //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) ASTSession * session;                      //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSDictionary * tests;                      //@synthesize tests=_tests - In the implementation block
@property (nonatomic,retain) ASTProfileResult * profile;                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) ASTAuthInfoResult * authInfo;              //@synthesize authInfo=_authInfo - In the implementation block
@property (nonatomic,copy) id authInfoHandler;                          //@synthesize authInfoHandler=_authInfoHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)sessionExistsForSerialNumbers:(id)arg1 ticketNumber:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)sessionExistsForIdentities:(id)arg1 ticketNumber:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)sessionWithSerialNumber:(id)arg1 profile:(id)arg2 tests:(id)arg3 authInfoHandler:(/*^block*/id)arg4 ;
+(id)sessionWithIdentity:(id)arg1 profile:(id)arg2 tests:(id)arg3 authInfoHandler:(/*^block*/id)arg4 ;
-(void)setProfile:(ASTProfileResult *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(void)setIdentity:(ASTIdentity *)arg1 ;
-(void)end;
-(NSDictionary *)tests;
-(ASTIdentity *)identity;
-(id)completion;
-(ASTSession *)session;
-(void)setAuthInfo:(ASTAuthInfoResult *)arg1 ;
-(void)setSession:(ASTSession *)arg1 ;
-(ASTProfileResult *)profile;
-(void)setTests:(NSDictionary *)arg1 ;
-(ASTAuthInfoResult *)authInfo;
-(void)executeWithCompletion:(/*^block*/id)arg1 ;
-(void)session:(id)arg1 didEndWithError:(id)arg2 ;
-(void)session:(id)arg1 startTest:(id)arg2 parameters:(id)arg3 testResult:(id)arg4 ;
-(void)session:(id)arg1 cancelTest:(id)arg2 ;
-(void)session:(id)arg1 profile:(id)arg2 filteredByComponents:(id)arg3 ;
-(void)session:(id)arg1 generateAuthInfoWithNonce:(id)arg2 ;
-(id)initWithIdentity:(id)arg1 profile:(id)arg2 tests:(id)arg3 authInfoHandler:(/*^block*/id)arg4 ;
-(id)authInfoHandler;
-(void)setAuthInfoHandler:(id)arg1 ;
@end

