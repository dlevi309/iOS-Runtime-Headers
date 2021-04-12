/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPExclusiveAccessToken.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface MPDispatchQueueExclusiveAccessToken : NSObject <MPExclusiveAccessToken> {

	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(id)tokenWithQueue:(id)arg1 ;
-(id)_init;
-(void)assertHasExclusiveAccess;
@end

