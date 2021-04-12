/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@interface _REDiffItem : NSObject {

	id _object;
	unsigned long long _index;
	/*^block*/id _comparator;
	/*^block*/id _hashGenerator;

}

@property (nonatomic,readonly) id object;                             //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) id comparator;                         //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) id hashGenerator;                      //@synthesize hashGenerator=_hashGenerator - In the implementation block
+(id)itemWithObject:(id)arg1 index:(unsigned long long)arg2 comparator:(/*^block*/id)arg3 hashGenerator:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)object;
-(unsigned long long)index;
-(id)comparator;
-(id)hashGenerator;
@end

