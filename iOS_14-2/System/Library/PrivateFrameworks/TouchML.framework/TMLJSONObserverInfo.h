/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class NSString;

@interface TMLJSONObserverInfo : NSObject {

	unsigned long long _hash;
	NSString* _keyPath;
	id _targetUnsafe;
	id _target;
	/*^block*/id _callback;

}

@property (nonatomic,copy,readonly) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) id targetUnsafe;                      //@synthesize targetUnsafe=_targetUnsafe - In the implementation block
@property (nonatomic,__weak,readonly) id target;                     //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) id callback;                          //@synthesize callback=_callback - In the implementation block
-(id)callback;
-(unsigned long long)hash;
-(NSString *)keyPath;
-(id)target;
-(BOOL)isEqual:(id)arg1 ;
-(void)notify:(id)arg1 ;
-(id)targetUnsafe;
-(id)initWithObserver:(id)arg1 keyPath:(id)arg2 callback:(/*^block*/id)arg3 ;
@end

