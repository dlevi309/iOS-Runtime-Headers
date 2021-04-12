/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/


@class NSString, IMAccount;

@interface CNFRegAlias : NSObject {

	NSString* _alias;
	NSString* _displayName;
	IMAccount* _account;
	long long _givenAliasType;
	BOOL _selectedDeviceAlias;
	NSString* _deviceAliasIdentifier;

}

@property (nonatomic,copy) NSString * alias;                                                     //@synthesize alias=_alias - In the implementation block
@property (nonatomic,retain) IMAccount * account;                                                //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) long long givenAliasType;                                           //@synthesize givenAliasType=_givenAliasType - In the implementation block
@property (assign,nonatomic) NSString * deviceAliasIdentifier;                                   //@synthesize deviceAliasIdentifier=_deviceAliasIdentifier - In the implementation block
@property (assign,getter=isSelectedDeviceAlias,nonatomic) BOOL selectedDeviceAlias;              //@synthesize selectedDeviceAlias=_selectedDeviceAlias - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,retain,readonly) NSString * identifier; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(NSString *)identifier;
-(long long)localizedCaseInsensitiveCompare:(id)arg1 ;
-(NSString *)displayName;
-(IMAccount *)account;
-(void)setAccount:(IMAccount *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)validate;
-(void)setAlias:(NSString *)arg1 ;
-(NSString *)alias;
-(long long)validationStatus;
-(id)initWithAccount:(id)arg1 alias:(id)arg2 ;
-(NSString *)deviceAliasIdentifier;
-(id)initWithAlias:(id)arg1 type:(long long)arg2 selected:(BOOL)arg3 deviceAliasIdentifier:(id)arg4 ;
-(BOOL)isDeviceAlias;
-(BOOL)isPhoneNumberAliasOnPhoneNumberAccount;
-(void)setGivenAliasType:(long long)arg1 ;
-(void)setSelectedDeviceAlias:(BOOL)arg1 ;
-(void)setDeviceAliasIdentifier:(NSString *)arg1 ;
-(long long)givenAliasType;
-(BOOL)isSelectedDeviceAlias;
-(long long)validationErrorReason;
-(BOOL)isLocalPhoneNumberAlias;
@end

