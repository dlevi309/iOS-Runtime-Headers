/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCServerBag : NSObject {

	opaque_pthread_cond_t isLoadedCondition;
	opaque_pthread_mutex_t isLoadedMutex;
	BOOL isLoaded;
	id observer;

}
+(id)sharedInstance;
+(void)pullStoreBagKeys;
+(BOOL)verifyRequiredKeys:(id*)arg1 ;
+(void)clearBagWithRefreshIntervalInSeconds:(int)arg1 ;
+(BOOL)verifyRequiredVoiceChatKeys:(id*)arg1 ;
+(BOOL)verifyRequiredKeys:(id)arg1 withError:(id*)arg2 ;
+(void)checkKeysAgainstHardcodedPrefs:(id)arg1 ;
+(void)retrieveBag;
-(id)init;
-(void)waitForBagLoad;
@end

