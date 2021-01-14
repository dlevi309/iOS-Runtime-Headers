/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class NSArray, PXZoomableInlineHeadersLayoutSpec;

@interface PXZoomablePhotosLayoutSpec : PXFeatureSpec {

	BOOL _useSaliency;
	long long _defaultNumberOfColumns;
	long long _initialNumberOfColumns;
	long long _staticNumberOfColumns;
	long long _maxColumnsForIndividualItems;
	long long _maxColumnsForBadges;
	double _interitemSpacing;
	double _aspectFitInteritemSpacing;
	double _panoramaItemAspectRatio;
	double _panoramaInteritemSpacing;
	long long _maxColumnsForSaliency;
	NSArray* _supportedColumns;
	NSArray* _minimumAssetsRequiredByColumn;
	NSArray* _legacyMacSupportedColumns;
	double _captionSpacing;
	PXZoomableInlineHeadersLayoutSpec* _inlineHeadersSpec;
	UIEdgeInsets _aspectFitEdgeMargins;
	UIEdgeInsets _squareEdgeMargins;

}

@property (nonatomic,readonly) long long defaultNumberOfColumns;                                   //@synthesize defaultNumberOfColumns=_defaultNumberOfColumns - In the implementation block
@property (nonatomic,readonly) long long initialNumberOfColumns;                                   //@synthesize initialNumberOfColumns=_initialNumberOfColumns - In the implementation block
@property (nonatomic,readonly) long long staticNumberOfColumns;                                    //@synthesize staticNumberOfColumns=_staticNumberOfColumns - In the implementation block
@property (nonatomic,readonly) long long maxColumnsForIndividualItems;                             //@synthesize maxColumnsForIndividualItems=_maxColumnsForIndividualItems - In the implementation block
@property (nonatomic,readonly) long long maxColumnsForBadges;                                      //@synthesize maxColumnsForBadges=_maxColumnsForBadges - In the implementation block
@property (nonatomic,readonly) double interitemSpacing;                                            //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets aspectFitEdgeMargins;                                  //@synthesize aspectFitEdgeMargins=_aspectFitEdgeMargins - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets squareEdgeMargins;                                     //@synthesize squareEdgeMargins=_squareEdgeMargins - In the implementation block
@property (nonatomic,readonly) double aspectFitInteritemSpacing;                                   //@synthesize aspectFitInteritemSpacing=_aspectFitInteritemSpacing - In the implementation block
@property (nonatomic,readonly) double panoramaItemAspectRatio;                                     //@synthesize panoramaItemAspectRatio=_panoramaItemAspectRatio - In the implementation block
@property (nonatomic,readonly) double panoramaInteritemSpacing;                                    //@synthesize panoramaInteritemSpacing=_panoramaInteritemSpacing - In the implementation block
@property (nonatomic,readonly) BOOL useSaliency;                                                   //@synthesize useSaliency=_useSaliency - In the implementation block
@property (nonatomic,readonly) long long maxColumnsForSaliency;                                    //@synthesize maxColumnsForSaliency=_maxColumnsForSaliency - In the implementation block
@property (nonatomic,readonly) NSArray * supportedColumns;                                         //@synthesize supportedColumns=_supportedColumns - In the implementation block
@property (nonatomic,readonly) NSArray * minimumAssetsRequiredByColumn;                            //@synthesize minimumAssetsRequiredByColumn=_minimumAssetsRequiredByColumn - In the implementation block
@property (nonatomic,readonly) NSArray * legacyMacSupportedColumns;                                //@synthesize legacyMacSupportedColumns=_legacyMacSupportedColumns - In the implementation block
@property (nonatomic,readonly) double captionSpacing;                                              //@synthesize captionSpacing=_captionSpacing - In the implementation block
@property (nonatomic,readonly) PXZoomableInlineHeadersLayoutSpec * inlineHeadersSpec;              //@synthesize inlineHeadersSpec=_inlineHeadersSpec - In the implementation block
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(long long)staticNumberOfColumns;
-(long long)defaultNumberOfColumns;
-(long long)maxColumnsForIndividualItems;
-(NSArray *)supportedColumns;
-(long long)maxColumnsForBadges;
-(double)interitemSpacing;
-(double)aspectFitInteritemSpacing;
-(long long)maxColumnsForSaliency;
-(NSArray *)minimumAssetsRequiredByColumn;
-(UIEdgeInsets)aspectFitEdgeMargins;
-(UIEdgeInsets)squareEdgeMargins;
-(long long)bestColumnIndexForPreferredNumberOfColumns:(long long)arg1 allowedColumns:(id)arg2 ;
-(PXZoomableInlineHeadersLayoutSpec *)inlineHeadersSpec;
-(NSArray *)legacyMacSupportedColumns;
-(double)captionSpacing;
-(double)panoramaItemAspectRatio;
-(long long)initialNumberOfColumns;
-(double)panoramaInteritemSpacing;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 availableThumbnailSizes:(id)arg3 userDefaults:(id)arg4 ;
-(BOOL)useSaliency;
@end

