/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)objectHash;
-(id)object;
-(id)initWithWeakObject:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

