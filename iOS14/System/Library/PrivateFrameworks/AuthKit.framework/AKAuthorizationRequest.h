/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <AuthKit/AuthKit-Structs.h>
#import <AuthKit/AKCredentialRequest.h>

@class NSString, ACAccount, NSArray, NSDictionary;

@interface AKAuthorizationRequest : AKCredentialRequest {

	BOOL _isSilentAppTransfer;
	BOOL _isEligibleForUpgradeFromPassword;
	NSString* _altDSID;
	ACAccount* _authkitAccount;
	NSArray* _requestedScopes;
	NSDictionary* _appProvidedData;
	NSString* _state;
	NSString* _nonce;
	NSString* _clientID;
	NSString* _teamID;
	long long _existingStatus;

}

@property (assign,nonatomic) long long existingStatus;                           //@synthesize existingStatus=_existingStatus - In the implementation block
@property (nonatomic,retain) ACAccount * authkitAccount;                         //@synthesize authkitAccount=_authkitAccount - In the implementation block
@property (nonatomic,readonly) ACAccount * internalAuthKitAccount; 
@property (assign,nonatomic) BOOL _isSilentAppTransfer;                          //@synthesize isSilentAppTransfer=_isSilentAppTransfer - In the implementation block
@property (nonatomic,copy) NSArray * requestedScopes;                            //@synthesize requestedScopes=_requestedScopes - In the implementation block
@property (nonatomic,copy) NSDictionary * appProvidedData;                       //@synthesize appProvidedData=_appProvidedData - In the implementation block
@property (assign,nonatomic) BOOL isEligibleForUpgradeFromPassword;              //@synthesize isEligibleForUpgradeFromPassword=_isEligibleForUpgradeFromPassword - In the implementation block
@property (nonatomic,copy) NSString * state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * nonce;                                     //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy) NSString * clientID;                                  //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) NSString * teamID;                                    //@synthesize teamID=_teamID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)teamID;
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
-(id)init;
-(void)setNonce:(NSString *)arg1 ;
-(void)setAppProvidedData:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)appProvidedData;
-(id)_sanitizedCopy;
-(id)description;
-(id)altDSID;
-(void)setRequestedScopes:(NSArray *)arg1 ;
-(ACAccount *)internalAuthKitAccount;
-(void)setAuthkitAccount:(ACAccount *)arg1 ;
-(BOOL)_isSilentAppTransfer;
-(void)set_isSilentAppTransfer:(BOOL)arg1 ;
-(NSArray *)requestedScopes;
-(long long)existingStatus;
-(void)setExistingStatus:(long long)arg1 ;
-(id)initWithAltDSID:(id)arg1 ;
-(void)setState:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(void)setTeamID:(NSString *)arg1 ;
-(NSString *)nonce;
-(ACAccount *)authkitAccount;
-(void)setIsEligibleForUpgradeFromPassword:(BOOL)arg1 ;
-(BOOL)isEligibleForUpgradeFromPassword;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

