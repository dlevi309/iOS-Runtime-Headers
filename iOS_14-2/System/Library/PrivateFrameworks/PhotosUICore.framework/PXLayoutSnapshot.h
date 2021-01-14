/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXLayoutEngineDataSourceSnapshot;
#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXLayoutSnapshot : NSObject {

	id<PXLayoutEngineDataSourceSnapshot> _dataSourceSnapshot;
	CGRect _contentRect;

}

@property (nonatomic,retain) id<PXLayoutEngineDataSourceSnapshot> dataSourceSnapshot;              //@synthesize dataSourceSnapshot=_dataSourceSnapshot - In the implementation block
@property (nonatomic,readonly) CGRect contentRect;                                                 //@synthesize contentRect=_contentRect - In the implementation block
-(id<PXLayoutEngineDataSourceSnapshot>)dataSourceSnapshot;
-(id)init;
-(CGRect)contentRect;
-(id)initWithContentRect:(CGRect)arg1 ;
-(id)description;
-(void)setDataSourceSnapshot:(id<PXLayoutEngineDataSourceSnapshot>)arg1 ;
-(PXLayoutGeometry)geometryForItem:(id)arg1 ;
-(void)enumerateGeometriesForItemsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

