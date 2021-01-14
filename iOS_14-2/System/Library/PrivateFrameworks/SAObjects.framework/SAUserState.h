/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString, NSNumber, SAUserTokenStatus;

@interface SAUserState : AceObject <SABackgroundContextObject>

@property (assign,nonatomic) BOOL ageVerificationRequired; 
@property (nonatomic,copy) NSString * defaultMediaPlaybackAppBundleIdentifier; 
@property (nonatomic,copy) NSString * iTunesMatchSubscriptionStatus; 
@property (nonatomic,copy) NSString * sharedUserId; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * syncSharedUserId; 
@property (nonatomic,copy) NSNumber * userHistoryUnmodifiable; 
@property (nonatomic,copy) NSString * userToken; 
@property (nonatomic,retain) SAUserTokenStatus * userTokenStatus; 
@property (nonatomic,copy) NSString * xpAbCookie; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userState;
+(id)userStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)ageVerificationRequired;
-(void)setAgeVerificationRequired:(BOOL)arg1 ;
-(NSString *)defaultMediaPlaybackAppBundleIdentifier;
-(void)setDefaultMediaPlaybackAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)iTunesMatchSubscriptionStatus;
-(void)setITunesMatchSubscriptionStatus:(NSString *)arg1 ;
-(NSString *)syncSharedUserId;
-(void)setSyncSharedUserId:(NSString *)arg1 ;
-(NSNumber *)userHistoryUnmodifiable;
-(void)setUserHistoryUnmodifiable:(NSNumber *)arg1 ;
-(NSString *)userToken;
-(void)setUserToken:(NSString *)arg1 ;
-(SAUserTokenStatus *)userTokenStatus;
-(void)setUserTokenStatus:(SAUserTokenStatus *)arg1 ;
-(NSString *)xpAbCookie;
-(void)setXpAbCookie:(NSString *)arg1 ;
-(NSString *)sharedUserId;
-(void)setSharedUserId:(NSString *)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)status;
@end
