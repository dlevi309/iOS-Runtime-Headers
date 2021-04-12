/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString, EDAMUser, EDAMPublicUserInfo, EDAMUserUrls;

@interface EDAMAuthenticationResult : FATObject {

	NSNumber* _currentTime;
	NSString* _authenticationToken;
	NSNumber* _expiration;
	EDAMUser* _user;
	EDAMPublicUserInfo* _publicUserInfo;
	NSString* _noteStoreUrl;
	NSString* _webApiUrlPrefix;
	NSNumber* _secondFactorRequired;
	NSString* _secondFactorDeliveryHint;
	EDAMUserUrls* _urls;

}

@property (nonatomic,retain) NSNumber * currentTime;                           //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) NSString * authenticationToken;                   //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (nonatomic,retain) NSNumber * expiration;                            //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,retain) EDAMUser * user;                                  //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) EDAMPublicUserInfo * publicUserInfo;              //@synthesize publicUserInfo=_publicUserInfo - In the implementation block
@property (nonatomic,retain) NSString * noteStoreUrl;                          //@synthesize noteStoreUrl=_noteStoreUrl - In the implementation block
@property (nonatomic,retain) NSString * webApiUrlPrefix;                       //@synthesize webApiUrlPrefix=_webApiUrlPrefix - In the implementation block
@property (nonatomic,retain) NSNumber * secondFactorRequired;                  //@synthesize secondFactorRequired=_secondFactorRequired - In the implementation block
@property (nonatomic,retain) NSString * secondFactorDeliveryHint;              //@synthesize secondFactorDeliveryHint=_secondFactorDeliveryHint - In the implementation block
@property (nonatomic,retain) EDAMUserUrls * urls;                              //@synthesize urls=_urls - In the implementation block
+(id)structName;
+(id)structFields;
-(EDAMUser *)user;
-(void)setUser:(EDAMUser *)arg1 ;
-(NSNumber *)currentTime;
-(NSNumber *)expiration;
-(EDAMUserUrls *)urls;
-(void)setUrls:(EDAMUserUrls *)arg1 ;
-(void)setCurrentTime:(NSNumber *)arg1 ;
-(void)setExpiration:(NSNumber *)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(NSString *)noteStoreUrl;
-(void)setNoteStoreUrl:(NSString *)arg1 ;
-(NSString *)webApiUrlPrefix;
-(void)setWebApiUrlPrefix:(NSString *)arg1 ;
-(EDAMPublicUserInfo *)publicUserInfo;
-(void)setPublicUserInfo:(EDAMPublicUserInfo *)arg1 ;
-(NSNumber *)secondFactorRequired;
-(void)setSecondFactorRequired:(NSNumber *)arg1 ;
-(NSString *)secondFactorDeliveryHint;
-(void)setSecondFactorDeliveryHint:(NSString *)arg1 ;
@end

