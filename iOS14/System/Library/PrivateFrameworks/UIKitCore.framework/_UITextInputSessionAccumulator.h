/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface _UITextInputSessionAccumulator : NSObject {

	unsigned long long _values[7];
	NSString* _name;
	long long _type;
	unsigned long long _depth;
	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long depth;              //@synthesize depth=_depth - In the implementation block
@property (nonatomic,readonly) id block;                              //@synthesize block=_block - In the implementation block
+(id)accumulatorWithName:(id)arg1 type:(long long)arg2 depth:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(id)block;
-(void)increaseWithActions:(id)arg1 ;
-(NSString *)name;
-(void)enumerateAnalytics:(/*^block*/id)arg1 ;
-(long long)type;
-(void)reset;
-(unsigned long long)depth;
@end

