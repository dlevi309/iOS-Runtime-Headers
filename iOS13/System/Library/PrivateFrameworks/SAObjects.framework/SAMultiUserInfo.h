/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SAMultiUserInfo : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * homeMembers; 
@property (nonatomic,copy) NSArray * multiUserPitchComposition; 
@property (assign,nonatomic) BOOL voiceProfilesAreInFlight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)multiUserInfo;
+(id)multiUserInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)homeMembers;
-(void)setHomeMembers:(NSArray *)arg1 ;
-(NSArray *)multiUserPitchComposition;
-(void)setMultiUserPitchComposition:(NSArray *)arg1 ;
-(BOOL)voiceProfilesAreInFlight;
-(void)setVoiceProfilesAreInFlight:(BOOL)arg1 ;
@end

