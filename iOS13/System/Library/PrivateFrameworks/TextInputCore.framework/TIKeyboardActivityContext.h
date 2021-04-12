/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@interface TIKeyboardActivityContext : NSObject {

	unsigned long long _fromState;
	unsigned long long _toState;
	unsigned long long _excessMemoryInBytes;

}

@property (assign,nonatomic) unsigned long long fromState;                        //@synthesize fromState=_fromState - In the implementation block
@property (assign,nonatomic) unsigned long long toState;                          //@synthesize toState=_toState - In the implementation block
@property (assign,nonatomic) unsigned long long excessMemoryInBytes;              //@synthesize excessMemoryInBytes=_excessMemoryInBytes - In the implementation block
+(id)contextFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(unsigned long long)fromState;
-(unsigned long long)toState;
-(void)setFromState:(unsigned long long)arg1 ;
-(void)setToState:(unsigned long long)arg1 ;
-(unsigned long long)excessMemoryInBytes;
-(void)setExcessMemoryInBytes:(unsigned long long)arg1 ;
@end

