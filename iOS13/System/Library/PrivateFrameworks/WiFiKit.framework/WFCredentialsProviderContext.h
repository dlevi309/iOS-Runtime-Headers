/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)gatherCredentials:(/*^block*/id)arg1;
-(BOOL)isEnterprise;
-(BOOL)validateCredentials;
-(BOOL)validatePassword;
-(void)activatePasswordSharing;
-(void)deactivatePasswordSharingWithReactivation:(BOOL)arg1;
-(void)launchSettings;
-(BOOL)isPasswordSharingSupported;
-(NSArray *)availableTLSIdentities;
-(BOOL)isWeakSecurity;
-(long long)availableAuthTraits;

@end

