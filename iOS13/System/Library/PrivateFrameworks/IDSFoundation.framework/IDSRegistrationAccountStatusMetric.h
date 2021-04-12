/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTRTCMetric.h>
#import <libobjc.A.dylib/CUTAWDMetric.h>

@class NSDictionary, NSString;

@interface IDSRegistrationAccountStatusMetric : NSObject <CUTRTCMetric, CUTAWDMetric> {

	BOOL _doesExist;
	BOOL _isEnabled;
	BOOL _isUserDisabled;
	BOOL _doesMatchiCloudAccount;
	BOOL _isiCloudSignedIn;
	BOOL _isiTunesSignedIn;
	BOOL _hasEverRegistered;
	BOOL _areAllAliasesSelected;
	BOOL _areAllSelectedAliasesRegistered;
	BOOL _isProdEnvironment;
	int _accountType;
	int _registrationErrorReason;
	int _accountRegistrationStatus;
	NSString* _serviceIdentifier;
	long long _registrationError;
	long long _registrationStatus;
	long long _lastRegistrationFailureError;
	double _timeIntervalSinceLastRegistrationFailure;
	double _timeIntervalSinceLastRegistrationSuccess;
	long long _accountSecurityLevel;
	long long _numberOfSelected;
	long long _numberOfVetted;
	long long _numberOfUnselectReasonUnknown;
	long long _numberOfUnselectReasonAlertDenial;
	long long _numberOfUnselectReasonClientCall;
	long long _numberOfUnselectReasonBadAlias;
	long long _numberOfUnselectReasonUpdateInfo;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned short rtcType; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) int accountType;                                              //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,readonly) NSString * serviceIdentifier;                                 //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL doesExist;                                               //@synthesize doesExist=_doesExist - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled;                                               //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isUserDisabled;                                          //@synthesize isUserDisabled=_isUserDisabled - In the implementation block
@property (nonatomic,readonly) BOOL doesMatchiCloudAccount;                                  //@synthesize doesMatchiCloudAccount=_doesMatchiCloudAccount - In the implementation block
@property (nonatomic,readonly) BOOL isiCloudSignedIn;                                        //@synthesize isiCloudSignedIn=_isiCloudSignedIn - In the implementation block
@property (nonatomic,readonly) BOOL isiTunesSignedIn;                                        //@synthesize isiTunesSignedIn=_isiTunesSignedIn - In the implementation block
@property (nonatomic,readonly) long long registrationError;                                  //@synthesize registrationError=_registrationError - In the implementation block
@property (nonatomic,readonly) int registrationErrorReason;                                  //@synthesize registrationErrorReason=_registrationErrorReason - In the implementation block
@property (nonatomic,readonly) long long registrationStatus;                                 //@synthesize registrationStatus=_registrationStatus - In the implementation block
@property (nonatomic,readonly) int accountRegistrationStatus;                                //@synthesize accountRegistrationStatus=_accountRegistrationStatus - In the implementation block
@property (nonatomic,readonly) long long lastRegistrationFailureError;                       //@synthesize lastRegistrationFailureError=_lastRegistrationFailureError - In the implementation block
@property (nonatomic,readonly) BOOL hasEverRegistered;                                       //@synthesize hasEverRegistered=_hasEverRegistered - In the implementation block
@property (nonatomic,readonly) double timeIntervalSinceLastRegistrationFailure;              //@synthesize timeIntervalSinceLastRegistrationFailure=_timeIntervalSinceLastRegistrationFailure - In the implementation block
@property (nonatomic,readonly) double timeIntervalSinceLastRegistrationSuccess;              //@synthesize timeIntervalSinceLastRegistrationSuccess=_timeIntervalSinceLastRegistrationSuccess - In the implementation block
@property (nonatomic,readonly) long long accountSecurityLevel;                               //@synthesize accountSecurityLevel=_accountSecurityLevel - In the implementation block
@property (nonatomic,readonly) BOOL areAllAliasesSelected;                                   //@synthesize areAllAliasesSelected=_areAllAliasesSelected - In the implementation block
@property (nonatomic,readonly) BOOL areAllSelectedAliasesRegistered;                         //@synthesize areAllSelectedAliasesRegistered=_areAllSelectedAliasesRegistered - In the implementation block
@property (nonatomic,readonly) BOOL isProdEnvironment;                                       //@synthesize isProdEnvironment=_isProdEnvironment - In the implementation block
@property (nonatomic,readonly) long long numberOfSelected;                                   //@synthesize numberOfSelected=_numberOfSelected - In the implementation block
@property (nonatomic,readonly) long long numberOfVetted;                                     //@synthesize numberOfVetted=_numberOfVetted - In the implementation block
@property (nonatomic,readonly) long long numberOfUnselectReasonUnknown;                      //@synthesize numberOfUnselectReasonUnknown=_numberOfUnselectReasonUnknown - In the implementation block
@property (nonatomic,readonly) long long numberOfUnselectReasonAlertDenial;                  //@synthesize numberOfUnselectReasonAlertDenial=_numberOfUnselectReasonAlertDenial - In the implementation block
@property (nonatomic,readonly) long long numberOfUnselectReasonClientCall;                   //@synthesize numberOfUnselectReasonClientCall=_numberOfUnselectReasonClientCall - In the implementation block
@property (nonatomic,readonly) long long numberOfUnselectReasonBadAlias;                     //@synthesize numberOfUnselectReasonBadAlias=_numberOfUnselectReasonBadAlias - In the implementation block
@property (nonatomic,readonly) long long numberOfUnselectReasonUpdateInfo;                   //@synthesize numberOfUnselectReasonUpdateInfo=_numberOfUnselectReasonUpdateInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned awdIdentifier; 
@property (readonly) PBCodable*<NSCopying> awdRepresentation; 
-(NSString *)description;
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)isEnabled;
-(int)accountType;
-(NSString *)serviceIdentifier;
-(long long)registrationStatus;
-(BOOL)isUserDisabled;
-(long long)registrationError;
-(unsigned)awdIdentifier;
-(PBCodable*<NSCopying>)awdRepresentation;
-(BOOL)doesExist;
-(BOOL)isiCloudSignedIn;
-(BOOL)doesMatchiCloudAccount;
-(BOOL)isiTunesSignedIn;
-(int)registrationErrorReason;
-(int)accountRegistrationStatus;
-(BOOL)hasEverRegistered;
-(long long)lastRegistrationFailureError;
-(double)timeIntervalSinceLastRegistrationFailure;
-(double)timeIntervalSinceLastRegistrationSuccess;
-(long long)accountSecurityLevel;
-(BOOL)areAllAliasesSelected;
-(BOOL)areAllSelectedAliasesRegistered;
-(long long)numberOfVetted;
-(long long)numberOfUnselectReasonUnknown;
-(long long)numberOfUnselectReasonAlertDenial;
-(long long)numberOfUnselectReasonClientCall;
-(long long)numberOfUnselectReasonBadAlias;
-(long long)numberOfUnselectReasonUpdateInfo;
-(BOOL)isProdEnvironment;
-(long long)numberOfSelected;
-(unsigned short)rtcType;
-(id)initWithAccountType:(int)arg1 serviceIdentifier:(id)arg2 doesExist:(BOOL)arg3 isEnabled:(BOOL)arg4 isUserDisabled:(BOOL)arg5 isiCloudSignedIn:(BOOL)arg6 doesMatchiCloudAccount:(BOOL)arg7 isiTunesSignedIn:(BOOL)arg8 registrationError:(long long)arg9 registrationErrorReason:(int)arg10 registrationStatus:(long long)arg11 accountRegistrationStatus:(int)arg12 hasEverRegistered:(BOOL)arg13 lastRegistrationFailureError:(long long)arg14 timeIntervalSinceLastRegistrationFailure:(double)arg15 timeIntervalSinceLastRegistrationSuccess:(double)arg16 accountSecurityLevel:(long long)arg17 areAllAliasesSelected:(BOOL)arg18 areAllSelectedAliasesRegistered:(BOOL)arg19 numberOfSelected:(long long)arg20 numberOfVetted:(long long)arg21 numberOfUnselectReasonUnknown:(long long)arg22 numberOfUnselectReasonAlertDenial:(long long)arg23 numberOfUnselectReasonClientCall:(long long)arg24 numberOfUnselectReasonBadAlias:(long long)arg25 numberOfUnselectReasonUpdateInfo:(long long)arg26 isProdEnvironment:(BOOL)arg27 ;
@end

