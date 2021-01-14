/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@class NFUnfairLock;

@interface NFLazy : NSObject {

	id _value;
	/*^block*/id _constructor;
	NFUnfairLock* _lock;

}

@property (nonatomic,copy,readonly) id constructor;                   //@synthesize constructor=_constructor - In the implementation block
@property (nonatomic,copy,readonly) NFUnfairLock * lock;              //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) id value;                              //@synthesize value=_value - In the implementation block
-(NFUnfairLock *)lock;
-(id)initWithConstructor:(/*^block*/id)arg1 ;
-(void)reset;
-(id)constructor;
-(id)value;
@end

