/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <AuthKit/AuthKit-Structs.h>
#import <AuthKit/AKCredentialRequest.h>

@class NSString, ACAccount, NSArray, NSDictionary;

@interface AKAuthorizationRequest : AKCredentialRequest {

	BOOL _isSilentAppTransfer;
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

@property (assign,nonatomic) long long existingStatus;                          //@synthesize existingStatus=_existingStatus - In the implementation block
@property (nonatomic,retain) ACAccount * authkitAccount;                        //@synthesize authkitAccount=_authkitAccount - In the implementation block
@property (nonatomic,readonly) ACAccount * internalAuthKitAccount; 
@property (assign,nonatomic) BOOL _isSilentAppTransfer;                         //@synthesize isSilentAppTransfer=_isSilentAppTransfer - In the implementation block
@property (nonatomic,copy) NSArray * requestedScopes;                           //@synthesize requestedScopes=_requestedScopes - In the implementation block
@property (nonatomic,copy) NSDictionary * appProvidedData;                      //@synthesize appProvidedData=_appProvidedData - In the implementation block
@property (nonatomic,copy) NSString * state;                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * nonce;                                    //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy) NSString * clientID;                                 //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) NSString * teamID;                                   //@synthesize teamID=_teamID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(NSString *)teamID;
-(void)setState:(NSString *)arg1 ;
-(id)altDSID;
-(NSString *)nonce;
-(void)setNonce:(NSString *)arg1 ;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
-(id)initWithAltDSID:(id)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(id)_sanitizedCopy;
-(ACAccount *)authkitAccount;
-(void)setRequestedScopes:(NSArray *)arg1 ;
-(void)setAppProvidedData:(NSDictionary *)arg1 ;
-(void)setExistingStatus:(long long)arg1 ;
-(void)setAuthkitAccount:(ACAccount *)arg1 ;
-(void)set_isSilentAppTransfer:(BOOL)arg1 ;
-(ACAccount *)internalAuthKitAccount;
-(BOOL)_isSilentAppTransfer;
-(NSArray *)requestedScopes;
-(NSDictionary *)appProvidedData;
-(long long)existingStatus;
@end

