/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)handleEvent:(id)arg1 ;
-(void)reloadNetworkdSettings;
-(void)reloadMNS;
-(BOOL)updateSettingsFromCarrierFile:(id)arg1 prefix:(id)arg2 settings:(id)arg3 ;
-(void)reloadCarrierSettings:(BOOL)arg1 ;
@end

