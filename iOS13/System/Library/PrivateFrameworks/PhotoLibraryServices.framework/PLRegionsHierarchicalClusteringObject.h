/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLRegionsClusteringItem;
@interface PLRegionsHierarchicalClusteringObject : NSObject {

	id<PLRegionsClusteringItem> _object;
	unsigned long long _index;

}

@property (nonatomic,readonly) id<PLRegionsClusteringItem> object;              //@synthesize object=_object - In the implementation block
@property (assign) unsigned long long index;                                    //@synthesize index=_index - In the implementation block
+(id)clusterObjectWithObject:(id)arg1 index:(unsigned long long)arg2 ;
-(id<PLRegionsClusteringItem>)object;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
@end

