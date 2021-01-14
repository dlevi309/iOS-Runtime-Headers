/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACMToken.h>
#import <libobjc.A.dylib/ACCSSOTokenProtocol.h>

@class ACFPrincipal, NSDate, NSString, NSNumber, ACFMessage, NSDictionary;

@interface ACMSSOToken : ACMToken <ACCSSOTokenProtocol> {

	BOOL _longLiveSession;
	ACFMessage* _initialRequest;
	NSString* _sessionToken;
	NSDate* _recentAuthenticationDate;
	NSNumber* _personID;
	NSDate* _recentUnlockDate;
	NSString* _clientSecret;
	NSNumber* _clientSecretCreationTimestamp;

}

@property (readonly) NSDictionary * tokenDictionary; 
@property (nonatomic,retain) ACFPrincipal * principal; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (nonatomic,retain) NSString * nonce; 
@property (nonatomic,retain) NSString * sessionToken;                               //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) NSDate * recentAuthenticationDate;                     //@synthesize recentAuthenticationDate=_recentAuthenticationDate - In the implementation block
@property (nonatomic,retain) NSNumber * personID;                                   //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSNumber * isTwoStepVerificationRequired; 
@property (nonatomic,retain) ACFMessage * initialRequest;                           //@synthesize initialRequest=_initialRequest - In the implementation block
@property (nonatomic,retain) NSString * userPreferences; 
@property (nonatomic,retain) NSDate * recentUnlockDate;                             //@synthesize recentUnlockDate=_recentUnlockDate - In the implementation block
@property (nonatomic,retain) NSString * clientSecret;                               //@synthesize clientSecret=_clientSecret - In the implementation block
@property (nonatomic,retain) NSNumber * clientSecretCreationTimestamp;              //@synthesize clientSecretCreationTimestamp=_clientSecretCreationTimestamp - In the implementation block
@property (nonatomic,retain) NSNumber * isUserEnrolledFor2SV; 
@property (assign,nonatomic) BOOL longLiveSession;                                  //@synthesize longLiveSession=_longLiveSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenWithKeychainTokenInfo:(id)arg1 ;
+(id)tokenWithToken:(id)arg1 data:(id)arg2 ;
-(void)setSessionToken:(NSString *)arg1 ;
-(NSString *)sessionToken;
-(NSNumber *)personID;
-(void)setPersonID:(NSNumber *)arg1 ;
-(void)dealloc;
-(ACFMessage *)initialRequest;
-(NSString *)clientSecret;
-(void)setClientSecret:(NSString *)arg1 ;
-(NSDate *)recentAuthenticationDate;
-(void)setRecentAuthenticationDate:(NSDate *)arg1 ;
-(NSDate *)recentUnlockDate;
-(void)setRecentUnlockDate:(NSDate *)arg1 ;
-(void)setInitialRequest:(ACFMessage *)arg1 ;
-(void)setClientSecretCreationTimestamp:(NSNumber *)arg1 ;
-(BOOL)longLiveSession;
-(void)setLongLiveSession:(BOOL)arg1 ;
-(NSDictionary *)tokenDictionary;
-(NSNumber *)clientSecretCreationTimestamp;
@end

