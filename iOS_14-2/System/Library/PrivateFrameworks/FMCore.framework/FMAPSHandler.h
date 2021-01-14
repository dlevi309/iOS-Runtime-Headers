/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@class APSConnection, NSMutableArray, NSString;

@interface FMAPSHandler : NSObject <APSConnectionDelegate> {

	BOOL _registerForDarkWake;
	BOOL _registrationsSuspended;
	APSConnection* _apsConnection;
	NSMutableArray* _registeredDelegates;
	NSMutableArray* _pendingPushes;
	NSString* _environmentName;

}

@property (nonatomic,retain) APSConnection * apsConnection;                     //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,retain) NSMutableArray * registeredDelegates;              //@synthesize registeredDelegates=_registeredDelegates - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingPushes;                    //@synthesize pendingPushes=_pendingPushes - In the implementation block
@property (nonatomic,retain) NSString * environmentName;                        //@synthesize environmentName=_environmentName - In the implementation block
@property (assign,nonatomic) BOOL registrationsSuspended;                       //@synthesize registrationsSuspended=_registrationsSuspended - In the implementation block
@property (assign,nonatomic) BOOL registerForDarkWake;                          //@synthesize registerForDarkWake=_registerForDarkWake - In the implementation block
@property (nonatomic,readonly) NSString * apsToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)constantForEnvironmentString:(id)arg1 ;
-(NSString *)apsToken;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(id)init;
-(void)_handleMessage:(id)arg1 onTopic:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(NSMutableArray *)registeredDelegates;
-(void)setRegisterForDarkWake:(BOOL)arg1 ;
-(void)setRegisteredDelegates:(NSMutableArray *)arg1 ;
-(void)_setEnabledTopics:(id)arg1 ;
-(BOOL)registrationsSuspended;
-(void)suspendRegistrations;
-(void)setEnvironmentName:(NSString *)arg1 ;
-(void)setApsConnection:(APSConnection *)arg1 ;
-(id)initWithEnvironmentName:(id)arg1 launchOnDemandPort:(id)arg2 ;
-(void)registerDelegate:(id)arg1 forTopic:(id)arg2 ;
-(void)invalidate;
-(void)setRegistrationsSuspended:(BOOL)arg1 ;
-(NSString *)environmentName;
-(NSMutableArray *)pendingPushes;
-(void)deregisterDelegate:(id)arg1 ;
-(BOOL)registerForDarkWake;
-(void)_registrationsWereResumed;
-(void)resumeRegistrations;
-(void)setPendingPushes:(NSMutableArray *)arg1 ;
-(id)initWithEnvironmentName:(id)arg1 ;
-(APSConnection *)apsConnection;
-(void)dealloc;
@end

