/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol FPItemHierarchyLookingUp;
@class FPItem, NSCache;

@interface FPItemHierarchyLookup : NSObject {

	FPItem* _item;
	id<FPItemHierarchyLookingUp> _hierarchyServicer;
	NSCache* _parentHierarchyItems;

}

@property (nonatomic,retain) NSCache * parentHierarchyItems;                    //@synthesize parentHierarchyItems=_parentHierarchyItems - In the implementation block
@property (__weak) id<FPItemHierarchyLookingUp> hierarchyServicer;              //@synthesize hierarchyServicer=_hierarchyServicer - In the implementation block
-(id)valueForKeyPath:(id)arg1 ;
-(id)initWithItem:(id)arg1 parentHierarchyItems:(id)arg2 hierarchyServicer:(id)arg3 ;
-(id<FPItemHierarchyLookingUp>)hierarchyServicer;
-(NSCache *)parentHierarchyItems;
-(id)_fetchItemWithID:(id)arg1 ;
-(void)setHierarchyServicer:(id<FPItemHierarchyLookingUp>)arg1 ;
-(void)setParentHierarchyItems:(NSCache *)arg1 ;
@end

