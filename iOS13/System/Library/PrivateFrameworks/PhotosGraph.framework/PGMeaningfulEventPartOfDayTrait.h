/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGMeaningfulEventTrait.h>

@interface PGMeaningfulEventPartOfDayTrait : PGMeaningfulEventTrait {

	unsigned long long _value;
	unsigned long long _forbiddenValue;

}

@property (nonatomic,readonly) unsigned long long value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long forbiddenValue;              //@synthesize forbiddenValue=_forbiddenValue - In the implementation block
-(BOOL)isActive;
-(unsigned long long)value;
-(id)initWithPartOfDay:(unsigned long long)arg1 ;
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
-(id)initWithPartOfDay:(unsigned long long)arg1 forbiddenPartOfDay:(unsigned long long)arg2 ;
-(unsigned long long)forbiddenValue;
@end

