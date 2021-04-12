/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

@class NSString, NSArray;


@protocol WFCredentialsProviderContext <WFProviderContext>
@property (getter=isPasswordSharingSupported,nonatomic,readonly) BOOL passwordSharingSupported; 
@property (nonatomic,readonly) NSString * username; 
@property (nonatomic,readonly) NSArray * availableTLSIdentities; 
@property (getter=isEnterprise,nonatomic,readonly) BOOL enterprise; 
@property (getter=isWeakSecurity,nonatomic,readonly) BOOL weakSecurity; 
@property (nonatomic,readonly) long long availableAuthTraits; 
@required
-(NSString *)username;
-(BOOL)isEnterprise;
-(BOOL)isPasswordSharingSupported;
-(void)launchSettings;
-(void)gatherCredentials:(/*^block*/id)arg1;
-(BOOL)validateCredentials;
-(BOOL)validatePassword;
-(void)activatePasswordSharing;
-(void)deactivatePasswordSharingWithReactivation:(BOOL)arg1;
-(NSArray *)availableTLSIdentities;
-(BOOL)isWeakSecurity;
-(long long)availableAuthTraits;

@end

