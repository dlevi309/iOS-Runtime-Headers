/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, NSData, NSSet;

@interface jprL7AuZZkLkFoBK : NSObject {

	NSString* _serverEndpointIdentifier;
	NSData* _hostChallenge;
	NSData* _challengeResponse;
	NSString* _seid;
	NSSet* _identities;
	NSString* _phoneNumber;
	NSString* _emailAddress;
	NSString* _FPANSuffix;
	unsigned long long _eventFrequency;

}

@property (nonatomic,retain) NSString * serverEndpointIdentifier;              //@synthesize serverEndpointIdentifier=_serverEndpointIdentifier - In the implementation block
@property (nonatomic,retain) NSData * hostChallenge;                           //@synthesize hostChallenge=_hostChallenge - In the implementation block
@property (nonatomic,retain) NSData * challengeResponse;                       //@synthesize challengeResponse=_challengeResponse - In the implementation block
@property (nonatomic,retain) NSString * seid;                                  //@synthesize seid=_seid - In the implementation block
@property (nonatomic,retain) NSSet * identities;                               //@synthesize identities=_identities - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                           //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;                          //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSString * FPANSuffix;                            //@synthesize FPANSuffix=_FPANSuffix - In the implementation block
@property (assign,nonatomic) unsigned long long eventFrequency;                //@synthesize eventFrequency=_eventFrequency - In the implementation block
-(NSString *)phoneNumber;
-(NSSet *)identities;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setIdentities:(NSSet *)arg1 ;
-(NSString *)FPANSuffix;
-(void)setFPANSuffix:(NSString *)arg1 ;
-(NSString *)serverEndpointIdentifier;
-(void)setServerEndpointIdentifier:(NSString *)arg1 ;
-(unsigned long long)eventFrequency;
-(void)setEventFrequency:(unsigned long long)arg1 ;
-(void)setSeid:(NSString *)arg1 ;
-(void)setHostChallenge:(NSData *)arg1 ;
-(void)setChallengeResponse:(NSData *)arg1 ;
-(id)initWithServerEndpointIdentifier:(id)arg1 ;
-(NSString *)seid;
-(NSData *)challengeResponse;
-(NSData *)hostChallenge;
@end

