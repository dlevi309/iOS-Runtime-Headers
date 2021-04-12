/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/


@protocol AKCredentialRequestProtocol;
@class NSArray, AKUserInformation, NSString, AKAuthorizationUserResponse;

@interface AKAuthorizationScopeChoices : NSObject {

	BOOL _wantsPrivateEmail;
	NSArray* _scopes;
	AKUserInformation* _userInformation;
	id<AKCredentialRequestProtocol> _selectedRequest;
	unsigned long long _indexOfChosenEmail;
	unsigned long long _indexOfChosenLogin;
	unsigned long long _emailCount;

}

@property (nonatomic,copy) NSArray * scopes;                                               //@synthesize scopes=_scopes - In the implementation block
@property (nonatomic,copy) AKUserInformation * userInformation;                            //@synthesize userInformation=_userInformation - In the implementation block
@property (nonatomic,retain) id<AKCredentialRequestProtocol> selectedRequest;              //@synthesize selectedRequest=_selectedRequest - In the implementation block
@property (assign) unsigned long long indexOfChosenEmail;                                  //@synthesize indexOfChosenEmail=_indexOfChosenEmail - In the implementation block
@property (assign) unsigned long long indexOfChosenLogin;                                  //@synthesize indexOfChosenLogin=_indexOfChosenLogin - In the implementation block
@property (assign) BOOL wantsPrivateEmail;                                                 //@synthesize wantsPrivateEmail=_wantsPrivateEmail - In the implementation block
@property (nonatomic,readonly) unsigned long long emailCount;                              //@synthesize emailCount=_emailCount - In the implementation block
@property (nonatomic,readonly) NSString * chosenEmail; 
@property (nonatomic,readonly) NSString * forwardingEmail; 
@property (nonatomic,readonly) AKAuthorizationUserResponse * userResponse; 
@property (nonatomic,readonly) unsigned long long personNameComponentsOrder; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * localizedChosenEmail; 
+(id)localizedGivenNameLabel;
+(id)localizedFamilyNameLabel;
+(id)_dotsWithLength:(unsigned long long)arg1 ;
+(id)obfuscatedEmail:(id)arg1 ;
-(id)description;
-(NSString *)localizedName;
-(AKAuthorizationUserResponse *)userResponse;
-(id)_userSelection;
-(NSArray *)scopes;
-(void)setScopes:(NSArray *)arg1 ;
-(id<AKCredentialRequestProtocol>)selectedRequest;
-(void)setSelectedRequest:(id<AKCredentialRequestProtocol>)arg1 ;
-(AKUserInformation *)userInformation;
-(void)setUserInformation:(AKUserInformation *)arg1 ;
-(NSString *)forwardingEmail;
-(id)_personNameComponents;
-(void)setIndexOfChosenEmail:(unsigned long long)arg1 ;
-(void)setWantsPrivateEmail:(BOOL)arg1 ;
-(unsigned long long)emailCount;
-(unsigned long long)personNameComponentsOrder;
-(void)setGivenName:(id)arg1 familyName:(id)arg2 ;
-(BOOL)wantsPrivateEmail;
-(unsigned long long)indexOfChosenEmail;
-(id)emailAtIndex:(unsigned long long)arg1 ;
-(NSString *)chosenEmail;
-(id)initWithScopes:(id)arg1 userInformation:(id)arg2 ;
-(unsigned long long)indexOfChosenLogin;
-(NSString *)localizedChosenEmail;
-(void)setIndexOfChosenLogin:(unsigned long long)arg1 ;
@end

