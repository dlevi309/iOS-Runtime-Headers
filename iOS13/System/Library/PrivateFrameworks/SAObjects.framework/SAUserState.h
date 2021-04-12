/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString, NSNumber;

@interface SAUserState : AceObject <SABackgroundContextObject>

@property (assign,nonatomic) BOOL ageVerificationRequired; 
@property (nonatomic,copy) NSString * sharedUserId; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * syncSharedUserId; 
@property (nonatomic,copy) NSNumber * userHistoryUnmodifiable; 
@property (nonatomic,copy) NSString * userToken; 
@property (nonatomic,copy) NSString * xpAbCookie; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userState;
+(id)userStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)status;
-(id)groupIdentifier;
-(void)setStatus:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)sharedUserId;
-(void)setSharedUserId:(NSString *)arg1 ;
-(BOOL)ageVerificationRequired;
-(void)setAgeVerificationRequired:(BOOL)arg1 ;
-(NSString *)syncSharedUserId;
-(void)setSyncSharedUserId:(NSString *)arg1 ;
-(NSNumber *)userHistoryUnmodifiable;
-(void)setUserHistoryUnmodifiable:(NSNumber *)arg1 ;
-(NSString *)userToken;
-(void)setUserToken:(NSString *)arg1 ;
-(NSString *)xpAbCookie;
-(void)setXpAbCookie:(NSString *)arg1 ;
@end

