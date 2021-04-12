/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSCache *)parentHierarchyItems;
-(id<FPItemHierarchyLookingUp>)hierarchyServicer;
-(id)_fetchItemWithID:(id)arg1 ;
-(void)setHierarchyServicer:(id<FPItemHierarchyLookingUp>)arg1 ;
-(void)setParentHierarchyItems:(NSCache *)arg1 ;
@end

