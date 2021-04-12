/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)changeWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 associatedIndex:(unsigned long long)arg4 ;
+(id)changeWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 ;
-(unsigned long long)index;
-(long long)changeType;
-(id)init;
-(id)initWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 ;
-(id)debugDescription;
-(id)object;
-(unsigned long long)hash;
-(id)initWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 associatedIndex:(unsigned long long)arg4 ;
-(unsigned long long)associatedIndex;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

