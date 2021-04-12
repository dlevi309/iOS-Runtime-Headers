/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)behaviorForSpaceKey:(unsigned long long)arg1 forReturnKey:(unsigned long long)arg2 forTabKey:(unsigned long long)arg3 ;
+(id)behaviorForSpaceKey:(unsigned long long)arg1 forReturnKey:(unsigned long long)arg2 ;
-(id)initWithSpaceKeyBehavior:(unsigned long long)arg1 returnKeyBehavior:(unsigned long long)arg2 tabKeyBehavior:(unsigned long long)arg3 ;
-(void)setTabKeyBehavior:(unsigned long long)arg1 ;
-(void)setSpaceKeyBehavior:(unsigned long long)arg1 ;
-(void)setReturnKeyBehavior:(unsigned long long)arg1 ;
-(unsigned long long)spaceKeyBehavior;
-(unsigned long long)returnKeyBehavior;
-(unsigned long long)tabKeyBehavior;
@end

