/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/


@protocol PXPlacesMapGeotaggableInfoDelegate, OS_dispatch_queue;
#import <PlacesKit/PlacesKit-Structs.h>
@class PKExtendedTraitCollection, NSObject, NSString;

@interface PXPlacesSnapshotOptions : NSObject {

	BOOL _shouldSkipPlaceholder;
	BOOL _showsPointLabels;
	PKExtendedTraitCollection* _extendedTraitCollection;
	id<PXPlacesMapGeotaggableInfoDelegate> _geotaggableInformationDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _cacheDirectoryPath;
	double _visibleDistance;
	unsigned long long _snapshotMapType;
	CGSize _viewSize;

}

@property (nonatomic,retain) PKExtendedTraitCollection * extendedTraitCollection;                                //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (nonatomic,retain) id<PXPlacesMapGeotaggableInfoDelegate> geotaggableInformationDelegate;              //@synthesize geotaggableInformationDelegate=_geotaggableInformationDelegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * cacheDirectoryPath;                                                      //@synthesize cacheDirectoryPath=_cacheDirectoryPath - In the implementation block
@property (assign,nonatomic) double visibleDistance;                                                             //@synthesize visibleDistance=_visibleDistance - In the implementation block
@property (assign,nonatomic) unsigned long long snapshotMapType;                                                 //@synthesize snapshotMapType=_snapshotMapType - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                                                                    //@synthesize viewSize=_viewSize - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipPlaceholder;                                                         //@synthesize shouldSkipPlaceholder=_shouldSkipPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL showsPointLabels;                                                              //@synthesize showsPointLabels=_showsPointLabels - In the implementation block
-(CGSize)viewSize;
-(BOOL)shouldSkipPlaceholder;
-(id)init;
-(void)setShowsPointLabels:(BOOL)arg1 ;
-(void)setGeotaggableInformationDelegate:(id<PXPlacesMapGeotaggableInfoDelegate>)arg1 ;
-(void)setCacheDirectoryPath:(NSString *)arg1 ;
-(NSString *)cacheDirectoryPath;
-(id)description;
-(void)setSnapshotMapType:(unsigned long long)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(void)setVisibleDistance:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setExtendedTraitCollection:(PKExtendedTraitCollection *)arg1 ;
-(double)visibleDistance;
-(PKExtendedTraitCollection *)extendedTraitCollection;
-(unsigned long long)snapshotMapType;
-(BOOL)showsPointLabels;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<PXPlacesMapGeotaggableInfoDelegate>)geotaggableInformationDelegate;
-(void)setShouldSkipPlaceholder:(BOOL)arg1 ;
@end

