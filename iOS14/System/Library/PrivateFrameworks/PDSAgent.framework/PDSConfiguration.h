/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <PDSAgent/PDSAgent-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, OS_dispatch_workloop;
@class NSObject, NSURL;

@interface PDSConfiguration : NSObject <NSCopying> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_workloop> _workloop;
	NSURL* _daemonRootDirectory;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_workloop> workloop;              //@synthesize workloop=_workloop - In the implementation block
@property (nonatomic,retain) NSURL * daemonRootDirectory;                           //@synthesize daemonRootDirectory=_daemonRootDirectory - In the implementation block
-(void)setWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(NSURL *)daemonRootDirectory;
-(void)setDaemonRootDirectory:(NSURL *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

