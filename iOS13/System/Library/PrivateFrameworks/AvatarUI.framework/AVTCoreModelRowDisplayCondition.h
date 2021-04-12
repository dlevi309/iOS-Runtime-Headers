/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@interface AVTCoreModelRowDisplayCondition : NSObject {

	unsigned long long _targetSectionIndex;
	unsigned long long _value;

}

@property (nonatomic,readonly) unsigned long long targetSectionIndex;              //@synthesize targetSectionIndex=_targetSectionIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long value;                           //@synthesize value=_value - In the implementation block
+(unsigned long long)conditionValueFromString:(id)arg1 ;
+(id)displayConditionFromDictionnary:(id)arg1 ;
-(unsigned long long)value;
-(id)initWithTargetSectionIndex:(unsigned long long)arg1 value:(unsigned long long)arg2 ;
-(unsigned long long)targetSectionIndex;
@end

