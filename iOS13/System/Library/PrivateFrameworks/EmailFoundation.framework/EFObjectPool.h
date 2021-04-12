/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


#import <EmailFoundation/EmailFoundation-Structs.h>
@class NSMutableArray;

@interface EFObjectPool : NSObject {

	NSMutableArray* _storage;
	/*^block*/id _generator;
	/*^block*/id _tearDown;
	os_unfair_lock_s _lock;

}
-(id)initWithCapacity:(unsigned long long)arg1 generator:(/*^block*/id)arg2 tearDown:(/*^block*/id)arg3 ;
-(id)initWithGenerator:(/*^block*/id)arg1 tearDown:(/*^block*/id)arg2 ;
-(id)acquireObject;
-(void)releaseObject:(id)arg1 ;
@end

