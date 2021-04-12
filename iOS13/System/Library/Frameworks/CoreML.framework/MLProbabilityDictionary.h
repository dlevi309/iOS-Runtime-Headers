/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface MLProbabilityDictionary : NSMutableDictionary {

	vector<double, std::__1::allocator<double> >* _values;

}
+(id)probabilityDictionaryForLabels:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)replaceDoubleVectorWith:(double*)arg1 ;
-(id)classLabelOfMaxProbability:(id)arg1 ;
@end

