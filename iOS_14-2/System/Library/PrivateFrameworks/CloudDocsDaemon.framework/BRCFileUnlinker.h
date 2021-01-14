/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)renameAndUnlinkInBackgroundItemAtPath:(id)arg1 ;
-(void)forcePurgeWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2 ;
-(void)_purge;
-(void)resume;
@end

