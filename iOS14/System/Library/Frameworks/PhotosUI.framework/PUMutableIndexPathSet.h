/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUIndexPathSet.h>

@class NSMutableSet;

@interface PUMutableIndexPathSet : PUIndexPathSet {

	NSMutableSet* _indexPaths;

}
-(void)addIndexPath:(id)arg1 ;
-(id)init;
-(void)removeIndexPath:(id)arg1 ;
-(long long)count;
-(BOOL)containsIndexPath:(id)arg1 ;
-(void)enumerateIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(void)setIndexPathSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)removeAllIndexPaths;
-(BOOL)isEqual:(id)arg1 ;
@end

