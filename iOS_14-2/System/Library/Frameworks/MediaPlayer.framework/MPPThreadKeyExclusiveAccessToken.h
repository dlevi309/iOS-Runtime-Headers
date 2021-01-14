/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPExclusiveAccessToken.h>

@interface MPPThreadKeyExclusiveAccessToken : NSObject <MPExclusiveAccessToken> {

	unsigned long long _key;
	id _owner;

}
+(id)tokenWithKey:(unsigned long long)arg1 owner:(id)arg2 ;
-(id)_init;
-(void)assertHasExclusiveAccessForOwner:(id)arg1 ;
@end

