/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSSet *)weak;
-(NSSet *)strong;
-(id)initWithWeakSet:(id)arg1 strongSet:(id)arg2 ;
@end

