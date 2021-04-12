/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMFObjectObserver : HMFObject {

	id _observedObject;
	/*^block*/id _deallocationBlock;
	NSUUID* _identifier;
	unsigned long long _cachedHash;

}

@property (nonatomic,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long cachedHash;              //@synthesize cachedHash=_cachedHash - In the implementation block
@property (__weak,readonly) id observedObject;                   //@synthesize observedObject=_observedObject - In the implementation block
@property (copy) id deallocationBlock;                           //@synthesize deallocationBlock=_deallocationBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(void)setDeallocationBlock:(id)arg1 ;
-(id)deallocationBlock;
-(void)_stopObserving;
-(void)_startObserving;
-(unsigned long long)cachedHash;
-(id)observedObject;
-(id)observerKey;
-(id)initWithObservedObject:(id)arg1 ;
@end

