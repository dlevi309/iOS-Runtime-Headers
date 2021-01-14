/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSDictionary, VCEmulatedNetwork;

@interface VCNetworkSimulator : NSObject {

	NSDictionary* _policies;
	VCEmulatedNetwork* _network;
	BOOL _isStarted;
	tagVCRealTimeThread* _thread;
	opaque_pthread_mutex_t _mutex;
	opaque_pthread_cond_t _condition;

}

@property (nonatomic,readonly) VCEmulatedNetwork * network;              //@synthesize network=_network - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)start;
-(VCEmulatedNetwork *)network;
-(void)stop;
-(void)dealloc;
-(id)createDefaultPolicies;
-(id)loadPoliciesFromJsonFile;
-(void)setupNetwork;
-(int)processNetwork;
@end

