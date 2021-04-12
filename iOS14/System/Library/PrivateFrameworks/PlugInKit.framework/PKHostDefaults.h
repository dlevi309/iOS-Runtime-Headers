/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerDefaults:(id)arg1 ;
-(PKHostPlugIn *)plugin;
-(BOOL)synchronize;
-(id)objectForKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setPlugin:(PKHostPlugIn *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithPlugIn:(id)arg1 ;
@end

