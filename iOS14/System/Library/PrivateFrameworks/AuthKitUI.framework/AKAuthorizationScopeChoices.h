/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_dotsWithLength:(unsigned long long)arg1 ;
+(id)localizedGivenNameLabel;
+(id)localizedFamilyNameLabel;
+(id)obfuscatedEmail:(id)arg1 ;
-(NSArray *)scopes;
-(NSString *)localizedName;
-(void)setScopes:(NSArray *)arg1 ;
-(id)description;
-(NSString *)forwardingEmail;
-(AKAuthorizationUserResponse *)userResponse;
-(id<AKCredentialRequestProtocol>)selectedRequest;
-(void)setSelectedRequest:(id<AKCredentialRequestProtocol>)arg1 ;
-(id)_userSelection;
-(id)_personNameComponents;
-(AKUserInformation *)userInformation;
-(void)setUserInformation:(AKUserInformation *)arg1 ;
-(id)emailAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)emailCount;
-(void)setWantsPrivateEmail:(BOOL)arg1 ;
-(void)setIndexOfChosenEmail:(unsigned long long)arg1 ;
-(unsigned long long)indexOfChosenEmail;
-(BOOL)wantsPrivateEmail;
-(id)initWithScopes:(id)arg1 userInformation:(id)arg2 ;
-(unsigned long long)indexOfChosenLogin;
-(NSString *)chosenEmail;
-(void)setGivenName:(id)arg1 familyName:(id)arg2 ;
-(unsigned long long)personNameComponentsOrder;
-(NSString *)localizedChosenEmail;
-(void)setIndexOfChosenLogin:(unsigned long long)arg1 ;
@end

