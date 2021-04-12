/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
*/


@protocol LABackoffCounter, OS_dispatch_queue;
@class NSObject;

@interface MechanismContext : NSObject {

	id<LABackoffCounter> _backoffCounter;
	NSObject*<OS_dispatch_queue> _serverQueue;

}

@property (nonatomic,retain) id<LABackoffCounter> backoffCounter;                   //@synthesize backoffCounter=_backoffCounter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<LABackoffCounter>)backoffCounter;
-(void)setBackoffCounter:(id<LABackoffCounter>)arg1 ;
@end

