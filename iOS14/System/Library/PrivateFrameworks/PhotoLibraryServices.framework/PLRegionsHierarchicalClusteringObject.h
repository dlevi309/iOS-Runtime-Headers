/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(id<PLRegionsClusteringItem>)object;
@end

