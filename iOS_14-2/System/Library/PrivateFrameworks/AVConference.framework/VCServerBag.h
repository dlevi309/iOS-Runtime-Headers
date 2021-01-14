/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)verifyRequiredKeys:(id*)arg1 ;
+(void)clearBagWithRefreshIntervalInSeconds:(int)arg1 ;
+(BOOL)verifyRequiredKeys:(id)arg1 withError:(id*)arg2 ;
+(void)checkKeysAgainstHardcodedPrefs:(id)arg1 ;
+(BOOL)verifyRequiredVoiceChatKeys:(id*)arg1 ;
+(void)pullStoreBagKeys;
+(void)retrieveBag;
-(id)init;
-(void)waitForBagLoad;
@end

