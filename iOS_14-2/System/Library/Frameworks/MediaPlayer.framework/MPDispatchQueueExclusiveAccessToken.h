/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPExclusiveAccessToken.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface MPDispatchQueueExclusiveAccessToken : NSObject <MPExclusiveAccessToken> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	id _owner;

}
+(id)tokenWithQueue:(id)arg1 owner:(id)arg2 ;
-(id)_init;
-(void)assertHasExclusiveAccessForOwner:(id)arg1 ;
@end

