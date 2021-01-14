/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ManagedNetworkSettings : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedMNS;
-(id)init;
-(void)reloadNetworkdSettings;
-(void)handleEvent:(id)arg1 ;
-(void)reloadMNS;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

