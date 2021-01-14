/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dequeueRecyclableObject;
-(id)initWithTargetClass:(Class)arg1 requiresThreadSafety:(BOOL)arg2 initialPoolSize:(long long)arg3 ;
-(void)recycleObject:(id)arg1 ;
-(id)initWithTargetClass:(Class)arg1 requiresThreadSafety:(BOOL)arg2 initialPoolSize:(long long)arg3 prototypeStep:(/*^block*/id)arg4 ;
@end

