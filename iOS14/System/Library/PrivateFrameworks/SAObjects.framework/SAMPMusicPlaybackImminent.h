/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAMPMusicPlaybackImminent : SADomainCommand

@property (nonatomic,copy) NSString * preloadedUserSharedUserId; 
+(id)musicPlaybackImminent;
+(id)musicPlaybackImminentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)preloadedUserSharedUserId;
-(void)setPreloadedUserSharedUserId:(NSString *)arg1 ;
-(BOOL)mutatingCommand;
@end

