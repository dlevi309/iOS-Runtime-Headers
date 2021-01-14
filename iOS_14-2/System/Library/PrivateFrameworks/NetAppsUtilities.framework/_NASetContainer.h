/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/


@interface _NASetContainer : NSObject {

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
-(unsigned long long)index;
-(void)setComparator:(id)arg1 ;
-(void)setHashGenerator:(id)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(id)object;
-(id)comparator;
-(void)setObject:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)hashGenerator;
@end

