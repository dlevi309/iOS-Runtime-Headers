/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObjectNSCopying;
@interface PXSectionedObjectReference : NSObject <NSCopying> {

	id<NSObject><NSCopying> _sectionObject;
	id<NSObject><NSCopying> _itemObject;
	id<NSObject><NSCopying> _subitemObject;
	id<NSObject><NSCopying> _leafObject;
	PXSimpleIndexPath _indexPath;

}

@property (nonatomic,copy,readonly) id<NSObject><NSCopying> sectionObject;              //@synthesize sectionObject=_sectionObject - In the implementation block
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> itemObject;                 //@synthesize itemObject=_itemObject - In the implementation block
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> subitemObject;              //@synthesize subitemObject=_subitemObject - In the implementation block
@property (nonatomic,readonly) PXSimpleIndexPath indexPath;                             //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> leafObject;                 //@synthesize leafObject=_leafObject - In the implementation block
-(id)initWithSectionObject:(id)arg1 itemObject:(id)arg2 subitemObject:(id)arg3 indexPath:(PXSimpleIndexPath)arg4 ;
-(id)init;
-(PXSimpleIndexPath)indexPath;
-(id)description;
-(unsigned long long)hash;
-(id<NSObject><NSCopying>)sectionObject;
-(id<NSObject><NSCopying>)itemObject;
-(id<NSObject><NSCopying>)subitemObject;
-(id<NSObject><NSCopying>)leafObject;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

