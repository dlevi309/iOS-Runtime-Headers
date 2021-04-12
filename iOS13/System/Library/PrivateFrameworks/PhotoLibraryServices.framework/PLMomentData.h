/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(id)arg1;

@required
+(id)sortByTimeSortDescriptors;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)uuid;
-(void)setUuid:(id)arg1;
-(void)setStartDate:(id)arg1;
-(void)setEndDate:(id)arg1;
-(id<PLPhotosHighlightData>)highlight;
-(void)delete;
-(BOOL)isDeleted;
-(NSSet *)assets;
-(void)setAssets:(id)arg1;
-(NSObject*<NSCopying>)uniqueObjectID;
-(void)removeAssetData:(id)arg1;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(unsigned short)processedLocation;
-(NSArray *)batchedAssets;
-(int)cachedVideosCount;
-(int)cachedPhotosCount;
-(int)cachedCount;
-(int)timeZoneOffset;
-(void)setTimeZoneOffset:(int)arg1;
-(id<PLMomentListData>)yearMomentList;
-(id<PLMomentListData>)megaMomentList;
-(void)setCachedVideosCount:(int)arg1;
-(void)setCachedPhotosCount:(int)arg1;
-(void)setCachedCount:(int)arg1;
-(NSDate *)representativeDate;
-(void)setRepresentativeDate:(id)arg1;
-(void)setProcessedLocation:(unsigned short)arg1;
-(void)setApproximateLocation:(id)arg1;
-(void)insertAssetData:(id)arg1;
-(double)approximateLatitude;
-(void)setApproximateLatitude:(double)arg1;
-(double)approximateLongitude;
-(void)setApproximateLongitude:(double)arg1;
-(CLLocation *)approximateLocation;
-(float)aggregationScore;
-(void)setAggregationScore:(float)arg1;
-(void)setYearMomentList:(id)arg1;
-(void)setMegaMomentList:(id)arg1;

@end

