/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@interface HMFWeakObject : HMFObject {

	id _object;
	unsigned long long _objectHash;

}

@property (nonatomic,readonly) unsigned long long objectHash;              //@synthesize objectHash=_objectHash - In the implementation block
@property (__weak,readonly) id object;                                     //@synthesize object=_object - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)object;
-(id)initWithWeakObject:(id)arg1 ;
-(unsigned long long)objectHash;
@end

