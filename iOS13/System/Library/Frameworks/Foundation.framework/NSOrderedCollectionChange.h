/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@interface NSOrderedCollectionChange : NSObject {

	id _object;
	long long _changeType;
	unsigned long long _index;
	unsigned long long _associatedIndex;

}

@property (readonly) id object;                                       //@synthesize object=_object - In the implementation block
@property (readonly) long long changeType;                            //@synthesize changeType=_changeType - In the implementation block
@property (readonly) unsigned long long index;                        //@synthesize index=_index - In the implementation block
@property (readonly) unsigned long long associatedIndex;              //@synthesize associatedIndex=_associatedIndex - In the implementation block
+(id)changeWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 ;
+(id)changeWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 associatedIndex:(unsigned long long)arg4 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)object;
-(id)initWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 ;
-(id)initWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 associatedIndex:(unsigned long long)arg4 ;
-(long long)changeType;
-(unsigned long long)index;
-(unsigned long long)associatedIndex;
@end

