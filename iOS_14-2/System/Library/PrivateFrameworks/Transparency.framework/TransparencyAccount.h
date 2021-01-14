/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@interface TransparencyAccount : NSObject
+(id)sharedAccountStore;
+(id)primaryAccount:(id*)arg1 ;
+(unsigned long long)accountLevel:(id)arg1 ;
+(long long)accountLevelErrorCodeForLevel:(id)arg1 ;
+(id)createAuthToken:(id)arg1 authToken:(id)arg2 ;
+(id)createAuthkitSession;
+(id)authToken:(id*)arg1 ;
+(BOOL)eligibleForSelfVerify;
+(BOOL)eligibleForPeerVerify;
+(BOOL)eligibleForEnrollmentVerify;
+(BOOL)initiateCredentialRenewal:(id*)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

