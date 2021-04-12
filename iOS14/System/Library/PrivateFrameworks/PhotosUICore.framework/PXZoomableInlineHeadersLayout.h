/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGSplitLayout.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@protocol PXZoomableInlineHeadersLayoutGeometrySource;
@class PXInlineHeadersSpriteLayout, PXZoomableInlineHeadersDataSourceManager, PXZoomableInlineHeadersLayoutSpec, NSString;

@interface PXZoomableInlineHeadersLayout : PXGSplitLayout <PXSectionedDataSourceManagerObserver> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	PXInlineHeadersSpriteLayout* _yearsLayout;
	PXInlineHeadersSpriteLayout* _monthsLayout;
	PXZoomableInlineHeadersDataSourceManager* _dataSourceManager;
	PXZoomableInlineHeadersLayoutSpec* _spec;
	id<PXZoomableInlineHeadersLayoutGeometrySource> _geometrySource;

}

@property (nonatomic,readonly) PXZoomableInlineHeadersDataSourceManager * dataSourceManager;                     //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) PXZoomableInlineHeadersLayoutSpec * spec;                                           //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) double yearsAlpha; 
@property (assign,nonatomic) double monthsAlpha; 
@property (assign,nonatomic,__weak) id<PXZoomableInlineHeadersLayoutGeometrySource> geometrySource;              //@synthesize geometrySource=_geometrySource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpec:(PXZoomableInlineHeadersLayoutSpec *)arg1 ;
-(id)initWithDataSourceManager:(id)arg1 ;
-(double)monthsAlpha;
-(double)yearsAlpha;
-(void)invalidateAnchorItemFrames;
-(void)setGeometrySource:(id<PXZoomableInlineHeadersLayoutGeometrySource>)arg1 ;
-(id<PXZoomableInlineHeadersLayoutGeometrySource>)geometrySource;
-(PXZoomableInlineHeadersLayoutSpec *)spec;
-(void)update;
-(void)setYearsAlpha:(double)arg1 ;
-(PXZoomableInlineHeadersDataSourceManager *)dataSourceManager;
-(void)setMonthsAlpha:(double)arg1 ;
-(void)_updateSublayouts;
-(void)invalidateGeometry;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

