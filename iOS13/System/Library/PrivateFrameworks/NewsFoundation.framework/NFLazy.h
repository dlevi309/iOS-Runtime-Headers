/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)value;
-(id)initWithConstructor:(/*^block*/id)arg1 ;
-(id)constructor;
@end

