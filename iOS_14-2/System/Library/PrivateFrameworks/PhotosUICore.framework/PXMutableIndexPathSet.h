/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXIndexPathSet.h>

@interface PXMutableIndexPathSet : PXIndexPathSet
-(void)addIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)modifySectionIndexSetForDataSourceIdentifier:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)unionIndexPathSet:(id)arg1 ;
-(void)removeIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)modifyItemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)modifySubitemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 item:(long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)minusIndexPathSet:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAllIndexPaths;
@end

