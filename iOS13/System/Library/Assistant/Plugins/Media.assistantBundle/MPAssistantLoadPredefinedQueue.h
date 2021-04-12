/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
*/

#import <Media/Media-Structs.h>
#import <SAObjects/SAMPLoadPredefinedQueue.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@protocol AFServiceHelper;
@class MPCAssistantAvailability, NSString, ICUserIdentity;

@interface MPAssistantLoadPredefinedQueue : SAMPLoadPredefinedQueue <AFServiceCommand> {

	id<AFServiceHelper> _serviceHelper;
	MPCAssistantAvailability* _availability;
	NSString* _requestAceHash;
	ICUserIdentity* _userIdentity;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_validate;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(void)_performWithNowPlayingItem:(id)arg1 audioRoutingInfo:(SCD_Struct_MP2)arg2 completion:(/*^block*/id)arg3 ;
-(id)_radioStations;
@end

