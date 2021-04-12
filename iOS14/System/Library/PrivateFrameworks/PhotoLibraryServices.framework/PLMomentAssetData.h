/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class CLLocation, NSDate, NSData, PLRevGeoPlaceAnnotation, PLRevGeoLocationInfo, NSString;


@protocol PLMomentAssetData <PLMomentRefreshable,PLRegionsClusteringItem>
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) NSDate * dateCreated; 
@property (nonatomic,retain,readonly) NSDate * localDateCreated; 
@property (nonatomic,readonly) int inferredTimeZoneOffset; 
@property (nonatomic,readonly) double gpsHorizontalAccuracy; 
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
-(void)setHeight:(long long)arg1;
-(NSDate *)modificationDate;
-(NSString *)uuid;
-(void)setDuration:(double)arg1;
-(long long)width;
-(void)setWidth:(long long)arg1;
-(short)kindSubtype;
-(long long)height;
-(short)kind;
-(NSString *)cloudAssetGUID;
-(void)setKind:(short)arg1;
-(void)setModificationDate:(id)arg1;
-(double)duration;
-(void)setKindSubtype:(short)arg1;

@required
-(NSData *)reverseLocationData;
-(void)setFavorite:(BOOL)arg1;
-(NSObject*<NSCopying>)uniqueObjectID;
-(CLLocation *)shiftedLocation;
-(void)setShiftedLocationIsValid:(BOOL)arg1;
-(NSDate *)dateCreated;
-(BOOL)isPhoto;
-(CLLocation *)location;
-(BOOL)reverseLocationDataIsValid;
-(id<PLMomentData>)moment;
-(void)setShiftedLocation:(id)arg1;
-(id)assetComparisonSortDescriptors;
-(void)setReverseLocationDataIsValid:(BOOL)arg1;
-(void)setCurationScore:(double)arg1;
-(void)setDateCreated:(id)arg1;
-(BOOL)isScreenRecording;
-(void)setLocation:(id)arg1;
-(double)curationScore;
-(NSDate *)localDateCreated;
-(BOOL)isDeleted;
-(PLRevGeoLocationInfo *)locationInfo;
-(BOOL)hasChanges;
-(BOOL)isVideo;
-(void)setReverseLocationData:(id)arg1;
-(id)globalUUID;
-(void)setMoment:(id)arg1;
-(BOOL)isAvalancheStackPhoto;
-(long long)compareToAsset:(id)arg1;
-(BOOL)visibilityStateIsEqualToState:(short)arg1;
-(BOOL)shiftedLocationIsValid;
-(id<PLPhotosHighlightData>)highlightBeingAssets;
-(void)setHighlightBeingAssets:(id)arg1;
-(void)setHighlightBeingKeyAsset:(id)arg1;
-(id<PLPhotosHighlightData>)highlightBeingSummaryAssets;
-(void)setHighlightBeingSummaryAssets:(id)arg1;
-(id<PLPhotosHighlightData>)highlightBeingExtendedAssets;
-(id<PLPhotosHighlightData>)dayGroupHighlightBeingAssets;
-(void)setHighlightBeingExtendedAssets:(id)arg1;
-(void)setDayGroupHighlightBeingAssets:(id)arg1;
-(void)setDayGroupHighlightBeingKeyAsset:(id)arg1;
-(id<PLPhotosHighlightData>)dayGroupHighlightBeingExtendedAssets;
-(void)setDayGroupHighlightBeingExtendedAssets:(id)arg1;
-(id<PLPhotosHighlightData>)monthHighlightBeingKeyAsset;
-(void)setMonthHighlightBeingKeyAsset:(id)arg1;
-(id<PLPhotosHighlightData>)monthHighlightBeingFirstAsset;
-(void)setMonthHighlightBeingFirstAsset:(id)arg1;
-(id<PLPhotosHighlightData>)yearHighlightBeingKeyAsset;
-(void)setYearHighlightBeingKeyAsset:(id)arg1;
-(BOOL)isInterestingForAvalanche;
-(double)gpsHorizontalAccuracy;
-(NSString *)avalancheUUID;
-(PLRevGeoPlaceAnnotation *)placeAnnotation;
-(id<PLPhotosHighlightData>)highlightBeingKeyAsset;
-(id<PLPhotosHighlightData>)dayGroupHighlightBeingKeyAsset;
-(BOOL)favorite;
-(int)inferredTimeZoneOffset;

@end

