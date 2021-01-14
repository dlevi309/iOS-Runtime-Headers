/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSDate, CLLocation, NSSet, NSArray, NSString;


@protocol PLMomentData <PLMomentRefreshable,PLMomentProtocol>
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (assign,nonatomic) int timeZoneOffset; 
@property (nonatomic,retain,readonly) NSDate * localStartDate; 
@property (nonatomic,retain,readonly) NSDate * localEndDate; 
@property (nonatomic,retain) NSDate * representativeDate; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (assign,nonatomic) double approximateLatitude; 
@property (assign,nonatomic) double approximateLongitude; 
@property (nonatomic,retain) CLLocation * approximateLocation; 
@property (assign,nonatomic) unsigned short processedLocation; 
@property (assign,nonatomic) double gpsHorizontalAccuracy; 
@property (assign,nonatomic) float aggregationScore; 
@property (nonatomic,retain) NSSet * assets; 
@property (nonatomic,retain,readonly) NSArray * batchedAssets; 
@property (nonatomic,readonly) id<PLPhotosHighlightData> highlight; 
@property (nonatomic,retain) id<PLMomentListData> yearMomentList; 
@property (nonatomic,retain) id<PLMomentListData> megaMomentList; 
@property (assign,nonatomic) int cachedCount; 
@property (assign,nonatomic) int cachedPhotosCount; 
@property (assign,nonatomic) int cachedVideosCount; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSString * title; 
@optional
-(void)setTitle:(id)arg1;
-(NSString *)title;

@required
+(id)sortByTimeSortDescriptors;
-(NSSet *)assets;
-(NSDate *)endDate;
-(void)delete;
-(NSDate *)localStartDate;
-(float)aggregationScore;
-(NSString *)uuid;
-(NSDate *)localEndDate;
-(NSObject*<NSCopying>)uniqueObjectID;
-(void)setStartDate:(id)arg1;
-(NSArray *)batchedAssets;
-(NSDate *)startDate;
-(CLLocation *)approximateLocation;
-(void)setEndDate:(id)arg1;
-(id<PLPhotosHighlightData>)highlight;
-(NSDate *)representativeDate;
-(double)approximateLongitude;
-(unsigned short)processedLocation;
-(void)setGpsHorizontalAccuracy:(double)arg1;
-(BOOL)isDeleted;
-(void)insertAssetData:(id)arg1;
-(void)setCachedCount:(int)arg1;
-(double)approximateLatitude;
-(void)setAssets:(id)arg1;
-(void)removeAssetData:(id)arg1;
-(void)setCachedVideosCount:(int)arg1;
-(void)setCachedPhotosCount:(int)arg1;
-(int)cachedVideosCount;
-(int)cachedPhotosCount;
-(void)setAggregationScore:(float)arg1;
-(double)gpsHorizontalAccuracy;
-(int)timeZoneOffset;
-(void)setUuid:(id)arg1;
-(id<PLMomentListData>)yearMomentList;
-(id<PLMomentListData>)megaMomentList;
-(void)setRepresentativeDate:(id)arg1;
-(void)setApproximateLocation:(id)arg1;
-(void)setTimeZoneOffset:(int)arg1;
-(void)setApproximateLatitude:(double)arg1;
-(void)setApproximateLongitude:(double)arg1;
-(void)setYearMomentList:(id)arg1;
-(void)setMegaMomentList:(id)arg1;
-(int)cachedCount;
-(void)setProcessedLocation:(unsigned short)arg1;

@end

