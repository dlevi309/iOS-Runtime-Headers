/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSpeakableString;


@protocol INSearchForAccountsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * accountNickname; 
@property (assign,nonatomic) long long accountType; 
@property (nonatomic,copy) INSpeakableString * organizationName; 
@property (assign,nonatomic) long long requestedBalanceType; 
@required
-(id)init;
-(long long)accountType;
-(INSpeakableString *)organizationName;
-(void)setAccountType:(long long)arg1;
-(void)setOrganizationName:(id)arg1;
-(INSpeakableString *)accountNickname;
-(void)setAccountNickname:(id)arg1;
-(long long)requestedBalanceType;
-(void)setRequestedBalanceType:(long long)arg1;

@end

