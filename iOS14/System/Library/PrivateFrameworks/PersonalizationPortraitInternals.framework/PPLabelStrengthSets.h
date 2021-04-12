/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSSet;

@interface PPLabelStrengthSets : NSObject {

	NSSet* _weak;
	NSSet* _strong;

}

@property (nonatomic,readonly) NSSet * weak;                //@synthesize weak=_weak - In the implementation block
@property (nonatomic,readonly) NSSet * strong;              //@synthesize strong=_strong - In the implementation block
+(id)labelStrengthSetsWithWeakSet:(id)arg1 strongSet:(id)arg2 ;
-(id)initWithWeakSet:(id)arg1 strongSet:(id)arg2 ;
-(NSSet *)weak;
-(NSSet *)strong;
@end

