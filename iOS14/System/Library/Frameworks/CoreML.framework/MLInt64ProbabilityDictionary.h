/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLProbabilityDictionary.h>

@interface MLInt64ProbabilityDictionary : MLProbabilityDictionary {

	map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >* _mapIntLabelToIndex;

}

@property (assign,nonatomic) map<unsigned long mapIntLabelToIndex;              //@synthesize mapIntLabelToIndex=_mapIntLabelToIndex - In the implementation block
+(id)probabilityDictionaryForInt64Labels:(id)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)copy;
-(id)objectForKey:(id)arg1 ;
-(id)initWithIntLabels:(id)arg1 ;
-(map<unsigned long)mapIntLabelToIndex;
-(void)setMapIntLabelToIndex:(map<unsigned long)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

