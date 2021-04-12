/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class NSMutableDictionary, IMTimer;

@interface IMDRecentsController : NSObject {

	NSMutableDictionary* _typingContext;
	IMTimer* _typingContextTimer;
	NSMutableDictionary* _activeDeviceForHandle;

}
+(id)sharedInstance;
-(void)_setTimerForPruningTypingContext;
-(BOOL)hasRecentlyMessaged:(id)arg1 ;
-(id)activeDeviceForHandle:(id)arg1 ;
-(void)__pruneTypingContexts;
-(void)updateLatestActiveDestination:(id)arg1 ForHandle:(id)arg2 incomingType:(unsigned char)arg3 ;
-(void)noteRecentMessageForPeople:(id)arg1 ;
@end

