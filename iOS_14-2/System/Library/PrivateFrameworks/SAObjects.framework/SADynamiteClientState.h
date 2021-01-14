/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceClientState.h>
#import <SAObjects/SABackgroundContextObject.h>

@class SAUserState, SACalendar, NSNumber, NSString, NSArray, SAUserTokenStatus;

@interface SADynamiteClientState : SAAceClientState <SABackgroundContextObject>

@property (assign,nonatomic) BOOL activeTvUser; 
@property (assign,nonatomic) BOOL ageVerificationRequired; 
@property (nonatomic,retain) SAUserState * defaultUserState; 
@property (nonatomic,retain) SACalendar * expirationDate; 
@property (nonatomic,copy) NSNumber * iCloudMusicLibraryToggle; 
@property (nonatomic,copy) NSString * iTunesMatchSubscriptionStatus; 
@property (nonatomic,copy) NSArray * inContextUsersStates; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSNumber * userHistoryUnmodifiable; 
@property (nonatomic,copy) NSString * userToken; 
@property (nonatomic,retain) SAUserTokenStatus * userTokenStatus; 
@property (nonatomic,copy) NSString * xpAbCookie; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dynamiteClientState;
+(id)dynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)syncKey;
+(id)deliveryDeadline;
+(id)persistencePolicy;
+(id)uniqueObjectIdentifier;
-(void)setExpirationDate:(SACalendar *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)activeTvUser;
-(void)setActiveTvUser:(BOOL)arg1 ;
-(SAUserState *)defaultUserState;
-(void)setDefaultUserState:(SAUserState *)arg1 ;
-(NSNumber *)iCloudMusicLibraryToggle;
-(void)setICloudMusicLibraryToggle:(NSNumber *)arg1 ;
-(NSArray *)inContextUsersStates;
-(void)setInContextUsersStates:(NSArray *)arg1 ;
-(BOOL)ageVerificationRequired;
-(void)setAgeVerificationRequired:(BOOL)arg1 ;
-(NSString *)iTunesMatchSubscriptionStatus;
-(void)setITunesMatchSubscriptionStatus:(NSString *)arg1 ;
-(NSNumber *)userHistoryUnmodifiable;
-(void)setUserHistoryUnmodifiable:(NSNumber *)arg1 ;
-(NSString *)userToken;
-(void)setUserToken:(NSString *)arg1 ;
-(SAUserTokenStatus *)userTokenStatus;
-(void)setUserTokenStatus:(SAUserTokenStatus *)arg1 ;
-(NSString *)xpAbCookie;
-(void)setXpAbCookie:(NSString *)arg1 ;
-(SACalendar *)expirationDate;
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)status;
@end

