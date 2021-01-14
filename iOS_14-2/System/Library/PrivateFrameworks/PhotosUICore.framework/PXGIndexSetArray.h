/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXGIndexSetArray : NSObject {

	long long _capacity;
	long long _count;
	void* _indexSetReferences;

}

@property (assign,nonatomic) long long count;                         //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) void* indexSetReferences;              //@synthesize indexSetReferences=_indexSetReferences - In the implementation block
-(void)setCount:(long long)arg1 ;
-(long long)count;
-(id)description;
-(void*)indexSetReferences;
-(void)removeAllIndexes;
-(void)dealloc;
@end

