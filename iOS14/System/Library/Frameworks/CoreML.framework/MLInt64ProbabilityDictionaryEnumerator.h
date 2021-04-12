/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface MLInt64ProbabilityDictionaryEnumerator : NSEnumerator {

	map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> *, long> >* _iter;
	map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> *, long> >* _iterEnd;

}

@property (assign,nonatomic) _map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long iter;                 //@synthesize iter=_iter - In the implementation block
@property (assign,nonatomic) _map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long iterEnd;              //@synthesize iterEnd=_iterEnd - In the implementation block
+(id)enumeratorFromMap:(map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)arg1 ;
-(id)nextObject;
-(_map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long)iter;
-(_map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long)iterEnd;
-(void)setIterEnd:(_map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long)arg1 ;
-(id)initWithIntMap:(map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)arg1 ;
-(void)setIter:(_map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long)arg1 ;
@end

