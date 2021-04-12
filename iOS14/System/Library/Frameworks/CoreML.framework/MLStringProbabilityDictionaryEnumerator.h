/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface MLStringProbabilityDictionaryEnumerator : NSEnumerator {

	map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *> *, long> >* _iter;
	map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *> *, long> >* _iterEnd;

}

@property (assign,nonatomic) _map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char> iter;                 //@synthesize iter=_iter - In the implementation block
@property (assign,nonatomic) _map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char> iterEnd;              //@synthesize iterEnd=_iterEnd - In the implementation block
+(id)enumeratorFromMap:(map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >*)arg1 ;
-(id)nextObject;
-(_map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char>)iter;
-(_map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char>)iterEnd;
-(id)initWithStrMap:(map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >*)arg1 ;
-(void)setIterEnd:(_map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char>)arg1 ;
-(void)setIter:(_map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char>)arg1 ;
@end

