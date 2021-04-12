/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
*/

#import <SAObjects/SAMPMusicPlaybackImminent.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class ICUserIdentity, NSNumber, NSString;

@interface MPAssistantMusicPlaybackImminent : SAMPMusicPlaybackImminent <AFServiceCommand> {

	ICUserIdentity* _userIdentity;
	NSNumber* _privateListeningEnabled;
	NSString* _requestAceHash;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_perform:(/*^block*/id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

