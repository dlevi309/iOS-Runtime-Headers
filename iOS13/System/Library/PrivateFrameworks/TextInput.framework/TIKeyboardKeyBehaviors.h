/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@interface TIKeyboardKeyBehaviors : NSObject {

	unsigned long long _spaceKeyBehavior;
	unsigned long long _returnKeyBehavior;
	unsigned long long _tabKeyBehavior;

}

@property (assign,nonatomic) unsigned long long spaceKeyBehavior;               //@synthesize spaceKeyBehavior=_spaceKeyBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long returnKeyBehavior;              //@synthesize returnKeyBehavior=_returnKeyBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long tabKeyBehavior;                 //@synthesize tabKeyBehavior=_tabKeyBehavior - In the implementation block
+(id)behaviorForSpaceKey:(unsigned long long)arg1 forReturnKey:(unsigned long long)arg2 ;
+(id)behaviorForSpaceKey:(unsigned long long)arg1 forReturnKey:(unsigned long long)arg2 forTabKey:(unsigned long long)arg3 ;
-(unsigned long long)spaceKeyBehavior;
-(unsigned long long)returnKeyBehavior;
-(unsigned long long)tabKeyBehavior;
-(id)initWithSpaceKeyBehavior:(unsigned long long)arg1 returnKeyBehavior:(unsigned long long)arg2 tabKeyBehavior:(unsigned long long)arg3 ;
-(void)setSpaceKeyBehavior:(unsigned long long)arg1 ;
-(void)setReturnKeyBehavior:(unsigned long long)arg1 ;
-(void)setTabKeyBehavior:(unsigned long long)arg1 ;
@end

