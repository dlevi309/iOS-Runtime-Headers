/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/

#import <CoreFoundation/NSUserDefaults.h>

@protocol OS_dispatch_queue;
@class PKHostPlugIn, NSObject;

@interface PKHostDefaults : NSUserDefaults {

	PKHostPlugIn* _plugin;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (__weak) PKHostPlugIn * plugin;                           //@synthesize plugin=_plugin - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)registerDefaults:(id)arg1 ;
-(PKHostPlugIn *)plugin;
-(void)setPlugin:(PKHostPlugIn *)arg1 ;
-(id)initWithPlugIn:(id)arg1 ;
@end

