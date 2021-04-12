/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMSystemMonitorListener.h>

@class NSMutableDictionary, NSString, IMDService, IMDServiceSession, NSDictionary;

@interface IMDAccount : NSObject <IMSystemMonitorListener> {

	NSMutableDictionary* _accountDefaults;
	NSString* _account;
	long long _accountType;
	IMDService* _service;
	IMDServiceSession* _session;
	NSMutableDictionary* _myStatus;
	NSDictionary* _lastPostedStatus;
	BOOL _isLoading;
	BOOL _isManaged;
	NSString* _loginStatusMessage;
	unsigned _loginStatus;
	int _disconnectReason;

}

@property (assign,nonatomic) BOOL isLoading;                                             //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) BOOL wasDisabledAutomatically; 
@property (nonatomic,readonly) BOOL shouldPublishNowPlaying; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) int registrationError; 
@property (nonatomic,retain,readonly) NSDictionary * registrationAlertInfo; 
@property (nonatomic,retain,readonly) NSDictionary * statusToSave; 
@property (nonatomic,retain,readonly) NSDictionary * statusToPost; 
@property (nonatomic,retain,readonly) NSDictionary * accountInfoToPost; 
@property (nonatomic,retain,readonly) NSDictionary * accountDefaults;                    //@synthesize accountDefaults=_accountDefaults - In the implementation block
@property (nonatomic,retain,readonly) NSString * accountID;                              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain,readonly) NSString * loginID; 
@property (nonatomic,retain,readonly) IMDService * service;                              //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) IMDServiceSession * session;                                //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL isDisabled; 
@property (assign,nonatomic) BOOL isManaged;                                             //@synthesize isManaged=_isManaged - In the implementation block
@property (nonatomic,readonly) BOOL canMakeDowngradeRoutingChecks; 
@property (nonatomic,retain,readonly) NSDictionary * status; 
@property (nonatomic,readonly) unsigned serviceLoginStatus;                              //@synthesize loginStatus=_loginStatus - In the implementation block
@property (nonatomic,readonly) int serviceDisconnectReason;                              //@synthesize disconnectReason=_disconnectReason - In the implementation block
@property (nonatomic,retain,readonly) NSString * serviceLoginStatusMessage;              //@synthesize loginStatusMessage=_loginStatusMessage - In the implementation block
@property (nonatomic,readonly) long long accountType; 
-(void)dealloc;
-(BOOL)isActive;
-(NSDictionary *)status;
-(id)_registrationInfo;
-(IMDServiceSession *)session;
-(void)setSession:(IMDServiceSession *)arg1 ;
-(IMDService *)service;
-(long long)accountType;
-(BOOL)isDisabled;
-(BOOL)isLoading;
-(NSString *)accountID;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)systemDidBecomeIdle;
-(void)systemDidBecomeUnidle;
-(int)registrationStatus;
-(NSString *)loginID;
-(int)registrationError;
-(NSDictionary *)registrationAlertInfo;
-(BOOL)isManaged;
-(void)setIsManaged:(BOOL)arg1 ;
-(void)writeAccountDefaults:(id)arg1 ;
-(NSDictionary *)accountDefaults;
-(void)postAccountCapabilitiesToListener:(id)arg1 ;
-(NSDictionary *)statusToPost;
-(unsigned)serviceLoginStatus;
-(NSString *)serviceLoginStatusMessage;
-(BOOL)wasDisabledAutomatically;
-(void)setWasDisabledAutomatically:(BOOL)arg1 ;
-(BOOL)shouldPublishNowPlaying;
-(void)changeStatus:(id)arg1 ;
-(void)_updateIdle;
-(void)_forceSetLoginStatus:(unsigned)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4 ;
-(void)setLoginStatus:(unsigned)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4 ;
-(id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3 ;
-(BOOL)canMakeDowngradeRoutingChecks;
-(void)postAccountCapabilities;
-(NSDictionary *)accountInfoToPost;
-(void)createSessionIfNecessary;
-(void)releaseSession;
-(NSDictionary *)statusToSave;
-(void)tunesController:(id)arg1 playerInfoChanged:(id)arg2 ;
-(void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3 ;
-(void)setLoginStatus:(unsigned)arg1 message:(id)arg2 ;
-(int)serviceDisconnectReason;
@end

