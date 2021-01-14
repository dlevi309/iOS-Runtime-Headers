/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLProbabilityDictionary.h>

@interface MLStringProbabilityDictionary : MLProbabilityDictionary {

	map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >* _mapStrLabelToIndex;

}

@property (assign,nonatomic) map<std::__1::basic_string<char> mapStrLabelToIndex;              //@synthesize mapStrLabelToIndex=_mapStrLabelToIndex - In the implementation block
+(id)probabilityDictionaryForStringLabels:(id)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)copy;
-(id)objectForKey:(id)arg1 ;
-(id)initWithStrLabels:(id)arg1 ;
-(map<std::__1::basic_string<char>)mapStrLabelToIndex;
-(void)setMapStrLabelToIndex:(map<std::__1::basic_string<char>)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

