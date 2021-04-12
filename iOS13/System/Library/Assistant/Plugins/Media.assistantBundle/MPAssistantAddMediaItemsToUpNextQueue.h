/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
*/

#import <Media/Media-Structs.h>
#import <SAObjects/SAMPAddMediaItemsToUpNextQueue.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class MPCAssistantDiscovery, ICUserIdentity, NSNumber, NSString;

@interface MPAssistantAddMediaItemsToUpNextQueue : SAMPAddMediaItemsToUpNextQueue <AFServiceCommand> {

	MPCAssistantDiscovery* _discovery;
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
-(id)_createPlaybackQueueWithCollection:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isInsertionPositionSupported:(int)arg1 origin:(void*)arg2 supportedCommands:(CFArrayRef)arg3 ;
-(id)_createLocalLibraryPlaybackQueueWithCollection:(id)arg1 error:(id*)arg2 ;
-(id)_createStoreTracklistPlaybackQueueWithCollection:(id)arg1 error:(id*)arg2 ;
@end

