/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@class NSString;

@interface HMFKeyValueBlockObserver : HMFObject <HMFLogging> {

	os_unfair_lock_s _lock;
	BOOL _valid;
	BOOL _observing;
	/*^block*/id _handler;
	NSString* _keyPath;
	id _observedObject;
	unsigned long long _options;

}

@property (copy,readonly) NSString * keyPath;                       //@synthesize keyPath=_keyPath - In the implementation block
@property (__weak,readonly) id observedObject;                      //@synthesize observedObject=_observedObject - In the implementation block
@property (readonly) unsigned long long options;                    //@synthesize options=_options - In the implementation block
@property (copy) id handler;                                        //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)setHandler:(id)arg1 ;
-(unsigned long long)options;
-(id)observedObject;
-(id)logIdentifier;
-(NSString *)keyPath;
-(void)invalidate;
-(id)handler;
-(void)dealloc;
-(id)initWithKeyPath:(id)arg1 object:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)__invalidate;
-(id)initWithKeyPath:(id)arg1 object:(id)arg2 ;
@end

