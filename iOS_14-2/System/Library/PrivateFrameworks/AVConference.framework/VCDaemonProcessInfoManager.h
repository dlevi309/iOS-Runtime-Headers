/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCDaemonProcessInfoManager : NSObject {

	NSObject*<OS_dispatch_queue> _xpcQueue;

}
+(id)sharedManager;
-(oneway void)release;
-(id)init;
-(id)retain;
-(void)registerBlocksForService;
-(id)autorelease;
-(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)retainCount;
-(void)deregisterBlocksForService;
-(id)copyProcessInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

