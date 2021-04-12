/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@class NSMutableArray;

@interface PHRecyclableObjectVendor : NSObject {

	NSMutableArray* _recycledObjects;
	Class _targetClass;
	os_unfair_lock_s _lock;
	BOOL _repsondsToPrepareForReuse;
	BOOL _threadSafe;
	/*^block*/id _builder;

}
-(id)initWithTargetClass:(Class)arg1 requiresThreadSafety:(BOOL)arg2 initialPoolSize:(long long)arg3 prototypeStep:(/*^block*/id)arg4 ;
-(id)initWithTargetClass:(Class)arg1 requiresThreadSafety:(BOOL)arg2 initialPoolSize:(long long)arg3 ;
-(id)dequeueRecyclableObject;
-(void)recycleObject:(id)arg1 ;
@end

