/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceClientState.h>
#import <SAObjects/SABackgroundContextObject.h>

@class SAUserState, SACalendar, NSNumber, NSArray, NSString;

@interface SADynamiteClientState : SAAceClientState <SABackgroundContextObject>

@property (assign,nonatomic) BOOL activeTvUser; 
@property (assign,nonatomic) BOOL ageVerificationRequired; 
@property (nonatomic,retain) SAUserState * defaultUserState; 
@property (nonatomic,retain) SACalendar * expirationDate; 
@property (nonatomic,copy) NSNumber * iCloudMusicLibraryToggle; 
@property (nonatomic,copy) NSArray * inContextUsersStates; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSNumber * userHistoryUnmodifiable; 
@property (nonatomic,copy) NSString * userToken; 
@property (nonatomic,copy) NSString * xpAbCookie; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deliveryDeadline;
+(id)persistencePolicy;
+(id)syncKey;
+(id)uniqueObjectIdentifier;
+(id)dynamiteClientState;
+(id)dynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)status;
-(id)groupIdentifier;
-(SACalendar *)expirationDate;
-(void)setExpirationDate:(SACalendar *)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)ageVerificationRequired;
-(void)setAgeVerificationRequired:(BOOL)arg1 ;
-(NSNumber *)userHistoryUnmodifiable;
-(void)setUserHistoryUnmodifiable:(NSNumber *)arg1 ;
-(NSString *)userToken;
-(void)setUserToken:(NSString *)arg1 ;
-(NSString *)xpAbCookie;
-(void)setXpAbCookie:(NSString *)arg1 ;
-(BOOL)activeTvUser;
-(void)setActiveTvUser:(BOOL)arg1 ;
-(SAUserState *)defaultUserState;
-(void)setDefaultUserState:(SAUserState *)arg1 ;
-(NSNumber *)iCloudMusicLibraryToggle;
-(void)setICloudMusicLibraryToggle:(NSNumber *)arg1 ;
-(NSArray *)inContextUsersStates;
-(void)setInContextUsersStates:(NSArray *)arg1 ;
@end

