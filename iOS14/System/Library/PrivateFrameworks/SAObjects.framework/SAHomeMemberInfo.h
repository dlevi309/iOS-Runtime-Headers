/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString, SAHomeMemberSettings;

@interface SAHomeMemberInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * attributes; 
@property (nonatomic,copy) NSString * companionAssistantId; 
@property (nonatomic,copy) NSString * companionSpeechId; 
@property (nonatomic,copy) NSString * enrollmentName; 
@property (nonatomic,retain) SAHomeMemberSettings * homeMemberSettings; 
@property (nonatomic,copy) NSString * lastVisitedAceHost; 
@property (nonatomic,copy) NSString * loggableCompanionAssistantId; 
@property (nonatomic,copy) NSString * loggableMultiUserSharedUserId; 
@property (nonatomic,copy) NSString * loggableSharedUserId; 
@property (nonatomic,copy) NSString * sharedUserId; 
@property (nonatomic,copy) NSString * speechId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)homeMemberInfo;
+(id)homeMemberInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSArray *)attributes;
-(NSString *)companionAssistantId;
-(void)setCompanionAssistantId:(NSString *)arg1 ;
-(NSString *)companionSpeechId;
-(void)setCompanionSpeechId:(NSString *)arg1 ;
-(NSString *)enrollmentName;
-(void)setEnrollmentName:(NSString *)arg1 ;
-(SAHomeMemberSettings *)homeMemberSettings;
-(void)setHomeMemberSettings:(SAHomeMemberSettings *)arg1 ;
-(NSString *)lastVisitedAceHost;
-(void)setLastVisitedAceHost:(NSString *)arg1 ;
-(NSString *)loggableCompanionAssistantId;
-(void)setLoggableCompanionAssistantId:(NSString *)arg1 ;
-(NSString *)loggableMultiUserSharedUserId;
-(void)setLoggableMultiUserSharedUserId:(NSString *)arg1 ;
-(NSString *)loggableSharedUserId;
-(void)setLoggableSharedUserId:(NSString *)arg1 ;
-(void)setSpeechId:(NSString *)arg1 ;
-(NSString *)sharedUserId;
-(void)setSharedUserId:(NSString *)arg1 ;
-(NSString *)speechId;
@end

