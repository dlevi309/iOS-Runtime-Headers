/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKFloatRange : NSObject <NSCopying> {

	double _lowerBound;
	double _upperBound;

}

@property (nonatomic,readonly) double lowerBound;              //@synthesize lowerBound=_lowerBound - In the implementation block
@property (nonatomic,readonly) double upperBound;              //@synthesize upperBound=_upperBound - In the implementation block
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)lowerBound;
-(double)upperBound;
-(id)initWithLowerBound:(double)arg1 upperBound:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

