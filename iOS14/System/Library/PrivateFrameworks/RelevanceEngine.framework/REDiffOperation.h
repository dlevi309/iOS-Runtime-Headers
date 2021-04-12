/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@interface REDiffOperation : NSObject {

	unsigned long long _type;
	long long _toIndex;
	long long _fromIndex;
	id _item;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long toIndex;                    //@synthesize toIndex=_toIndex - In the implementation block
@property (nonatomic,readonly) long long fromIndex;                  //@synthesize fromIndex=_fromIndex - In the implementation block
@property (nonatomic,readonly) id item;                              //@synthesize item=_item - In the implementation block
+(id)reloadWithItem:(id)arg1 atIndex:(long long)arg2 ;
+(id)insertWithItem:(id)arg1 atIndex:(long long)arg2 ;
+(id)deleteWithItem:(id)arg1 atIndex:(long long)arg2 ;
+(id)moveWithItem:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 ;
-(long long)toIndex;
-(long long)fromIndex;
-(id)item;
-(id)description;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 item:(id)arg2 toIndex:(long long)arg3 fromIndex:(long long)arg4 ;
@end

