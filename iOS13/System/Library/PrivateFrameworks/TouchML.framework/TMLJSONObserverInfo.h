/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)target;
-(NSString *)keyPath;
-(id)callback;
-(void)notify:(id)arg1 ;
-(id)targetUnsafe;
-(id)initWithObserver:(id)arg1 keyPath:(id)arg2 callback:(/*^block*/id)arg3 ;
@end

