/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@interface ICUnfairLock : NSObject {

	os_unfair_lock_s _lock;

}
-(void)unlock;
-(id)init;
-(void)lock;
-(void)lockWithBlock:(/*^block*/id)arg1 ;
@end

