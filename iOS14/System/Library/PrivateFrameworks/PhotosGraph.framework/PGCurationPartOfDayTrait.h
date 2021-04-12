/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGCurationTrait.h>

@interface PGCurationPartOfDayTrait : PGCurationTrait {

	unsigned long long _value;

}

@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
-(id)niceDescription;
-(BOOL)isActive;
-(id)debugDescription;
-(id)initWithPartOfDay:(unsigned long long)arg1 ;
-(unsigned long long)value;
@end

