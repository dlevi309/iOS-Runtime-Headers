/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@interface HMFObjectObserver : HMFObject {

	id _observedObject;
	/*^block*/id _deallocationBlock;
	unsigned long long _cachedHash;

}

@property (readonly) unsigned long long cachedHash;              //@synthesize cachedHash=_cachedHash - In the implementation block
@property (__weak,readonly) id observedObject;                   //@synthesize observedObject=_observedObject - In the implementation block
@property (copy) id deallocationBlock;                           //@synthesize deallocationBlock=_deallocationBlock - In the implementation block
-(id)init;
-(id)deallocationBlock;
-(id)observedObject;
-(void)_stopObserving;
-(void)setDeallocationBlock:(id)arg1 ;
-(unsigned long long)hash;
-(void)_startObserving;
-(unsigned long long)cachedHash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithObservedObject:(id)arg1 ;
@end

