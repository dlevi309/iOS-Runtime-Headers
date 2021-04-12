/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@interface _HFSetContainer : NSObject {

	id _object;
	unsigned long long _index;
	/*^block*/id _comparator;
	/*^block*/id _hashGenerator;

}

@property (nonatomic,retain) id object;                             //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) id comparator;                           //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,copy) id hashGenerator;                        //@synthesize hashGenerator=_hashGenerator - In the implementation block
+(id)containerWithObject:(id)arg1 atIndex:(unsigned long long)arg2 comparator:(/*^block*/id)arg3 hashGenerator:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)object;
-(void)setObject:(id)arg1 ;
-(unsigned long long)index;
-(id)comparator;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setComparator:(id)arg1 ;
-(id)hashGenerator;
-(void)setHashGenerator:(id)arg1 ;
@end

