/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <libobjc.A.dylib/PXPlacesMapLayout.h>

@protocol PXPlacesMapLayout <PXPlacesMapPipelineComponent>
@property (readonly) id<PXPlacesGeotaggedItemDataSource> dataSource; 
@required
-(id<PXPlacesGeotaggedItemDataSource>)dataSource;
-(id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;
-(id)layoutItemForGeotaggable:(id)arg1;

@end


@protocol PXPlacesGeotaggedItemDataSource, PXPlacesMapPipelineComponentProvider;
@class NSString;

@interface PXPlacesMapLayout : NSObject <PXPlacesMapLayout> {

	id<PXPlacesGeotaggedItemDataSource> _dataSource;
	id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;

}

@property (readonly) id<PXPlacesGeotaggedItemDataSource> dataSource;                                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSource:(id)arg1 ;
-(id<PXPlacesGeotaggedItemDataSource>)dataSource;
-(void)reset;
-(id<PXPlacesMapPipelineComponentProvider>)pipelineComponentProvider;
-(void)setPipelineComponentProvider:(id<PXPlacesMapPipelineComponentProvider>)arg1 ;
-(id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2 ;
-(id)layoutItemForGeotaggable:(id)arg1 ;
@end

