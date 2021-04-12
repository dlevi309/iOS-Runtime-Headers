/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSMutableDictionary;

@interface MPStoreSocialServiceTransientStatesSnapshot : NSObject {

	NSMutableDictionary* _transientFollowStatesPerProfileID;
	NSMutableDictionary* _transientFollowPendingRequestStatesPerProfileID;

}
-(id)init;
-(long long)transientFollowStateForPerson:(id)arg1 ;
-(long long)transientFollowPendingRequestStateForPerson:(id)arg1 ;
-(void)_addTransientFollowState:(long long)arg1 transientFollowPendingRequestState:(long long)arg2 forPerson:(id)arg3 ;
@end

