/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMemoriesFeedLayoutGenerator.h>

@class PXMemoriesFeedWidgetLayoutMetrics;

@interface PXMemoriesFeedWidgetLayoutGenerator : PXMemoriesFeedLayoutGenerator {

	LayoutContext _context;

}

@property (nonatomic,copy) PXMemoriesFeedWidgetLayoutMetrics * metrics; 
-(CGSize)estimatedSize;
-(CGSize)size;
-(id)initWithMetrics:(id)arg1 ;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(id)geometryKinds;
@end

