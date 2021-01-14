/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSpeakableString;


@protocol INSearchForAccountsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * accountNickname; 
@property (assign,nonatomic) long long accountType; 
@property (nonatomic,copy) INSpeakableString * organizationName; 
@property (assign,nonatomic) long long requestedBalanceType; 
@required
-(long long)accountType;
-(INSpeakableString *)organizationName;
-(id)init;
-(INSpeakableString *)accountNickname;
-(void)setAccountNickname:(id)arg1;
-(long long)requestedBalanceType;
-(void)setRequestedBalanceType:(long long)arg1;
-(void)setOrganizationName:(id)arg1;
-(void)setAccountType:(long long)arg1;

@end

