/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class NSString, VSAccount, VSPersistentStorage, VSOptional;

@interface VSIdentityProviderRequest : NSObject {

	long long _type;
	NSString* _requestingAppDisplayName;
	NSString* _requestingAppAdamID;
	VSAccount* _account;
	VSPersistentStorage* _storage;
	VSOptional* _accountMetadataRequest;
	NSString* _accountProviderAuthenticationToken;

}

@property (assign,nonatomic) long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * requestingAppDisplayName;                        //@synthesize requestingAppDisplayName=_requestingAppDisplayName - In the implementation block
@property (nonatomic,copy) NSString * requestingAppAdamID;                             //@synthesize requestingAppAdamID=_requestingAppAdamID - In the implementation block
@property (nonatomic,retain) VSAccount * account;                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) VSPersistentStorage * storage;                            //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) VSOptional * accountMetadataRequest;                      //@synthesize accountMetadataRequest=_accountMetadataRequest - In the implementation block
@property (nonatomic,copy) NSString * accountProviderAuthenticationToken;              //@synthesize accountProviderAuthenticationToken=_accountProviderAuthenticationToken - In the implementation block
@property (nonatomic,readonly) BOOL forceAuthentication; 
@property (nonatomic,readonly) BOOL allowsUI; 
@property (nonatomic,readonly) BOOL requiresUI; 
+(id)makeAccountRequestWithStorage:(id)arg1 ;
+(id)deleteAccountRequestWithAccount:(id)arg1 storage:(id)arg2 ;
+(id)silentMakeAccountRequestWithStorage:(id)arg1 ;
+(id)accountMetadataRequestWithAccount:(id)arg1 storage:(id)arg2 accountMetadataRequest:(id)arg3 requestingAppDisplayName:(id)arg4 requestingAppAdamID:(id)arg5 accountProviderAuthenticationToken:(id)arg6 ;
+(id)STBOptOutRequestWithStorage:(id)arg1 ;
-(VSAccount *)account;
-(void)setStorage:(VSPersistentStorage *)arg1 ;
-(void)setAccount:(VSAccount *)arg1 ;
-(id)init;
-(VSPersistentStorage *)storage;
-(void)setType:(long long)arg1 ;
-(id)description;
-(long long)type;
-(void)setAccountMetadataRequest:(VSOptional *)arg1 ;
-(VSOptional *)accountMetadataRequest;
-(NSString *)accountProviderAuthenticationToken;
-(NSString *)requestingAppDisplayName;
-(void)setRequestingAppDisplayName:(NSString *)arg1 ;
-(NSString *)requestingAppAdamID;
-(void)setRequestingAppAdamID:(NSString *)arg1 ;
-(BOOL)forceAuthentication;
-(void)setAccountProviderAuthenticationToken:(NSString *)arg1 ;
-(id)_initWithRequestType:(long long)arg1 account:(id)arg2 storage:(id)arg3 ;
-(BOOL)requiresUI;
-(BOOL)allowsUI;
@end

