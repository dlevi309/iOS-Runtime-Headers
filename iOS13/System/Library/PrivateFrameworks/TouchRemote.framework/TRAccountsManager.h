/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/


@class ACAccountStore, NSString, SSAccount, ACAccount, GKLocalPlayer;

@interface TRAccountsManager : NSObject {

	ACAccountStore* _iCloudAccountStore;

}

@property (nonatomic,retain) ACAccountStore * iCloudAccountStore;                  //@synthesize iCloudAccountStore=_iCloudAccountStore - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceName; 
@property (nonatomic,readonly) SSAccount * activeiTunesStoreAccount; 
@property (nonatomic,readonly) ACAccount * activeiCloudAccount; 
@property (nonatomic,copy,readonly) NSString * homeSharingAppleID; 
@property (nonatomic,copy,readonly) NSString * homeSharingGroupID; 
@property (nonatomic,readonly) GKLocalPlayer * localGameCenterPlayer; 
+(id)sharedInstance;
-(NSString *)deviceName;
-(NSString *)homeSharingGroupID;
-(ACAccountStore *)iCloudAccountStore;
-(SSAccount *)activeiTunesStoreAccount;
-(ACAccount *)activeiCloudAccount;
-(NSString *)homeSharingAppleID;
-(GKLocalPlayer *)localGameCenterPlayer;
-(id)defaultAccountIDForAuthenticationAccountType:(unsigned long long)arg1 ;
-(id)accountTypesWithDefaultAccountID:(id)arg1 ;
-(void)setICloudAccountStore:(ACAccountStore *)arg1 ;
@end

