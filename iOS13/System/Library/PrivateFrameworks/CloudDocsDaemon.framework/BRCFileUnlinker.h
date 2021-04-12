/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface BRCFileUnlinker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _cachePurgeSource;
	NSString* _unlinkRootPath;

}
+(id)fileUnlinker;
-(id)init;
-(void)resume;
-(void)_purge;
-(BOOL)renameAndUnlinkInBackgroundItemAtPath:(id)arg1 ;
-(BOOL)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2 ;
-(void)forcePurgeWithCompletionBlock:(/*^block*/id)arg1 ;
@end

