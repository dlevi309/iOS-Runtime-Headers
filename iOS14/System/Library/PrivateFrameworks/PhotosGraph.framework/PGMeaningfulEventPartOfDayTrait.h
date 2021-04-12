/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGMeaningfulEventTrait.h>

@interface PGMeaningfulEventPartOfDayTrait : PGMeaningfulEventTrait {

	unsigned long long _value;
	unsigned long long _forbiddenValue;

}

@property (nonatomic,readonly) unsigned long long value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long forbiddenValue;              //@synthesize forbiddenValue=_forbiddenValue - In the implementation block
-(unsigned long long)forbiddenValue;
-(BOOL)isActive;
-(id)initWithPartOfDay:(unsigned long long)arg1 ;
-(id)initWithPartOfDay:(unsigned long long)arg1 forbiddenPartOfDay:(unsigned long long)arg2 ;
-(unsigned long long)value;
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
@end

