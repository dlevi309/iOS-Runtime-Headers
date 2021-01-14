/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutSnapshot.h>

@class NSArray, PXLayoutPageMap;

@interface PXSectionedLayoutSnapshot : PXLayoutSnapshot {

	NSArray* _sections;
	PXLayoutPageMap* _pageMap;

}
+(id)emptyLayoutSnapshot;
-(id)init;
-(id)initWithContentRect:(CGRect)arg1 ;
-(id)description;
-(id)initWithContentRect:(CGRect)arg1 forSections:(id)arg2 ;
-(PXLayoutGeometry)geometryForItem:(id)arg1 ;
-(void)enumerateGeometriesForItemsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateFramesForSectionsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGRect)frameForSectionAtIndex:(unsigned long long)arg1 ;
@end

