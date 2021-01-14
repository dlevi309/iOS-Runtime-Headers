/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/


@class NSString, IMAccount, NSDate;

@interface CNFRegAlias : NSObject {

	NSString* _alias;
	NSString* _displayName;
	IMAccount* _account;
	long long _givenAliasType;
	BOOL _selectedDeviceAlias;
	BOOL _isTemporary;
	NSString* _deviceAliasIdentifier;
	NSDate* __expirationDate;

}

@property (nonatomic,copy) NSString * alias;                                                     //@synthesize alias=_alias - In the implementation block
@property (nonatomic,retain) IMAccount * account;                                                //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) long long givenAliasType;                                           //@synthesize givenAliasType=_givenAliasType - In the implementation block
@property (nonatomic,copy) NSString * deviceAliasIdentifier;                                     //@synthesize deviceAliasIdentifier=_deviceAliasIdentifier - In the implementation block
@property (assign,getter=isSelectedDeviceAlias,nonatomic) BOOL selectedDeviceAlias;              //@synthesize selectedDeviceAlias=_selectedDeviceAlias - In the implementation block
@property (assign,nonatomic) BOOL isTemporary;                                                   //@synthesize isTemporary=_isTemporary - In the implementation block
@property (nonatomic,copy) NSDate * _expirationDate;                                             //@synthesize _expirationDate=__expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,retain,readonly) NSString * identifier; 
-(IMAccount *)account;
-(BOOL)validate;
-(BOOL)isTemporary;
-(NSString *)alias;
-(void)setAccount:(IMAccount *)arg1 ;
-(NSDate *)_expirationDate;
-(long long)validationStatus;
-(long long)localizedCaseInsensitiveCompare:(id)arg1 ;
-(id)description;
-(NSDate *)expirationDate;
-(void)setDisplayName:(NSString *)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(void)setAlias:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIsTemporary:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg1 alias:(id)arg2 ;
-(NSString *)deviceAliasIdentifier;
-(id)initWithAlias:(id)arg1 type:(long long)arg2 selected:(BOOL)arg3 deviceAliasIdentifier:(id)arg4 ;
-(void)set_expirationDate:(NSDate *)arg1 ;
-(BOOL)isDeviceAlias;
-(BOOL)isTemporaryPhoneNumberAlias;
-(BOOL)isPhoneNumberAliasOnPhoneNumberAccount;
-(void)setGivenAliasType:(long long)arg1 ;
-(void)setSelectedDeviceAlias:(BOOL)arg1 ;
-(void)setDeviceAliasIdentifier:(NSString *)arg1 ;
-(long long)givenAliasType;
-(BOOL)isSelectedDeviceAlias;
-(long long)validationErrorReason;
-(BOOL)isLocalPhoneNumberAlias;
@end

