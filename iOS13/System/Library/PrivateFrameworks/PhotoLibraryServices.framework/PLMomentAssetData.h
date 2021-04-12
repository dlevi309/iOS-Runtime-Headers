/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class CLLocation, NSDate, NSData, PLRevGeoPlaceAnnotation, PLRevGeoLocationInfo, NSString;


@protocol PLMomentAssetData <PLMomentRefreshable,PLRegionsClusteringItem>
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) NSDate * dateCreated; 
@property (nonatomic,retain,readonly) NSDate * localDateCreated; 
@property (nonatomic,readonly) int inferredTimeZoneOffset; 
@property (nonatomic,retain) id<PLMomentData> moment; 
@property (nonatomic,retain) NSData * reverseLocationData; 
@property (assign,nonatomic) BOOL reverseLocationDataIsValid; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (nonatomic,retain) CLLocation * shiftedLocation; 
@property (assign,nonatomic) BOOL shiftedLocationIsValid; 
@property (nonatomic,retain,readonly) PLRevGeoPlaceAnnotation * placeAnnotation; 
@property (nonatomic,retain,readonly) PLRevGeoLocationInfo * locationInfo; 
@property (assign,nonatomic) id<PLPhotosHighlightData> highlightBeingAssets; 
@property (assign,nonatomic) id<PLPhotosHighlightData> highlightBeingKeyAsset; 
@property (assign,nonatomic) id<PLPhotosHighlightData> highlightBeingSummaryAssets; 
@property (assign,nonatomic) id<PLPhotosHighlightData> highlightBeingExtendedAssets; 
@property (assign,nonatomic) id<PLPhotosHighlightData> dayGroupHighlightBeingAssets; 
@property (assign,nonatomic) id<PLPhotosHighlightData> dayGroupHighlightBeingKeyAsset; 
@property (assign,nonatomic) id<PLPhotosHighlightData> dayGroupHighlightBeingExtendedAssets; 
@property (assign,nonatomic) id<PLPhotosHighlightData> monthHighlightBeingKeyAsset; 
@property (assign,nonatomic) id<PLPhotosHighlightData> monthHighlightBeingFirstAsset; 
@property (assign,nonatomic) id<PLPhotosHighlightData> yearHighlightBeingKeyAsset; 
@property (assign,nonatomic) BOOL favorite; 
@property (assign,nonatomic) double curationScore; 
@property (nonatomic,readonly) BOOL isPhoto; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,readonly) BOOL isScreenRecording; 
@property (nonatomic,readonly) NSString * avalancheUUID; 
@property (nonatomic,readonly) BOOL isInterestingForAvalanche; 
@property (nonatomic,readonly) BOOL isAvalancheStackPhoto; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) short kind; 
@property (assign,nonatomic) short kindSubtype; 
@property (assign,nonatomic) long long height; 
@property (assign,nonatomic) long long width; 
@property (nonatomic,retain,readonly) NSString * cloudAssetGUID; 
@optional
-(NSString *)uuid;
-(double)duration;
-(short)kind;
-(NSDate *)modificationDate;
-(void)setKind:(short)arg1;
-(long long)width;
-(long long)height;
-(void)setWidth:(long long)arg1;
-(void)setHeight:(long long)arg1;
-(void)setDuration:(double)arg1;
-(void)setModificationDate:(id)arg1;
-(NSString *)cloudAssetGUID;
-(short)kindSubtype;
-(void)setKindSubtype:(short)arg1;

@required
-(BOOL)hasChanges;
-(CLLocation *)location;
-(void)setLocation:(id)arg1;
-(BOOL)isVideo;
-(BOOL)isDeleted;
-(PLRevGeoLocationInfo *)locationInfo;
-(NSDate *)dateCreated;
-(double)curationScore;
-(id)assetComparisonSortDescriptors;
-(BOOL)isPhoto;
-(NSString *)avalancheUUID;
-(NSObject*<NSCopying>)uniqueObjectID;
-(BOOL)isAvalancheStackPhoto;
-(id<PLMomentData>)moment;
-(void)setDateCreated:(id)arg1;
-(PLRevGeoPlaceAnnotation *)placeAnnotation;
-(BOOL)favorite;
-(BOOL)reverseLocationDataIsValid;
-(void)setFavorite:(BOOL)arg1;
-(long long)compareToAsset:(id)arg1;
-(BOOL)visibilityStateIsEqualToState:(short)arg1;
-(id)globalUUID;
-(NSDate *)localDateCreated;
-(int)inferredTimeZoneOffset;
-(void)setMoment:(id)arg1;
-(NSData *)reverseLocationData;
-(void)setReverseLocationData:(id)arg1;
-(void)setReverseLocationDataIsValid:(BOOL)arg1;
-(CLLocation *)shiftedLocation;
-(void)setShiftedLocation:(id)arg1;
-(BOOL)shiftedLocationIsValid;
-(void)setShiftedLocationIsValid:(BOOL)arg1;
-(id<PLPhotosHighlightData>)highlightBeingAssets;
-(void)setHighlightBeingAssets:(id)arg1;
-(id<PLPhotosHighlightData>)highlightBeingKeyAsset;
-(void)setHighlightBeingKeyAsset:(id)arg1;
-(id<PLPhotosHighlightData>)highlightBeingSummaryAssets;
-(void)setHighlightBeingSummaryAssets:(id)arg1;
-(id<PLPhotosHighlightData>)highlightBeingExtendedAssets;
-(void)setHighlightBeingExtendedAssets:(id)arg1;
-(id<PLPhotosHighlightData>)dayGroupHighlightBeingAssets;
-(void)setDayGroupHighlightBeingAssets:(id)arg1;
-(id<PLPhotosHighlightData>)dayGroupHighlightBeingKeyAsset;
-(void)setDayGroupHighlightBeingKeyAsset:(id)arg1;
-(id<PLPhotosHighlightData>)dayGroupHighlightBeingExtendedAssets;
-(void)setDayGroupHighlightBeingExtendedAssets:(id)arg1;
-(id<PLPhotosHighlightData>)monthHighlightBeingKeyAsset;
-(void)setMonthHighlightBeingKeyAsset:(id)arg1;
-(id<PLPhotosHighlightData>)monthHighlightBeingFirstAsset;
-(void)setMonthHighlightBeingFirstAsset:(id)arg1;
-(id<PLPhotosHighlightData>)yearHighlightBeingKeyAsset;
-(void)setYearHighlightBeingKeyAsset:(id)arg1;
-(void)setCurationScore:(double)arg1;
-(BOOL)isScreenRecording;
-(BOOL)isInterestingForAvalanche;

@end

