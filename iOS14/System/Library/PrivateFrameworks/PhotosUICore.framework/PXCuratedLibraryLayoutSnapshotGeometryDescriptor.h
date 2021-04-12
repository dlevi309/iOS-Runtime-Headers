/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSDictionary, NSIndexSet;

@interface PXCuratedLibraryLayoutSnapshotGeometryDescriptor : NSObject {

	NSDictionary* _sectionGeometryDescriptorsByIndexPath;
	double _intersectionSpacing;
	unsigned long long _dataSourceIdentifier;
	unsigned long long _skimmingDataSourceIdentifier;
	long long _zoomLevel;
	CGPoint _offset;
	CGRect _visibleRect;

}

@property (nonatomic,readonly) unsigned long long dataSourceIdentifier;                      //@synthesize dataSourceIdentifier=_dataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long skimmingDataSourceIdentifier;              //@synthesize skimmingDataSourceIdentifier=_skimmingDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) long long zoomLevel;                                          //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) CGRect visibleRect;                                           //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                                 //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) NSIndexSet * sections; 
-(id)initWithLayout:(id)arg1 ;
-(long long)zoomLevel;
-(CGRect)visibleRect;
-(id)init;
-(void)compactifySectionsBeyondVisibleRectWithAnchorSection:(long long)arg1 ;
-(unsigned long long)skimmingDataSourceIdentifier;
-(NSIndexSet *)sections;
-(unsigned long long)dataSourceIdentifier;
-(CGPoint)offset;
-(id)description;
-(void)setOffset:(CGPoint)arg1 ;
-(id)geometryDescriptorForSectionAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)extrapolateSectionsBetween:(long long)arg1 and:(long long)arg2 withAnchorSection:(long long)arg3 ;
@end

