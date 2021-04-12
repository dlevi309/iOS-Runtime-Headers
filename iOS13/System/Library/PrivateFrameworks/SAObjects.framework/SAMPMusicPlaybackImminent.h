/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)mutatingCommand;
-(NSString *)preloadedUserSharedUserId;
-(void)setPreloadedUserSharedUserId:(NSString *)arg1 ;
@end

