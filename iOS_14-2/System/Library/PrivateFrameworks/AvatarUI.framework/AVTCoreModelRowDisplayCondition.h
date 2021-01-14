/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTargetSectionIndex:(unsigned long long)arg1 value:(unsigned long long)arg2 ;
-(unsigned long long)targetSectionIndex;
-(unsigned long long)value;
@end

