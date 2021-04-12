/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString, NSDate, NSSet, NSArray;


@protocol PLPhotosHighlightData <PLMomentRefreshable,PLHighlightItem>
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * localStartDate; 
@property (nonatomic,retain,readonly) NSDate * localEndDate; 
@property (assign,nonatomic) int startTimeZoneOffset; 
@property (assign,nonatomic) int endTimeZoneOffset; 
@property (assign,nonatomic) BOOL isCurated; 
@property (assign,nonatomic) double promotionScore; 
@property (assign,nonatomic) unsigned short type; 
@property (assign,nonatomic) unsigned short kind; 
@property (assign,nonatomic) unsigned short category; 
@property (assign,nonatomic) unsigned short visibilityState; 
@property (assign,nonatomic) unsigned short enrichmentState; 
@property (nonatomic,retain) id<PLPhotosHighlightData> parentPhotosHighlight; 
@property (nonatomic,retain) id<PLPhotosHighlightData> parentDayGroupPhotosHighlight; 
@property (nonatomic,retain) NSSet * childPhotosHighlights; 
@property (nonatomic,retain) NSSet * childDayGroupPhotosHighlights; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (nonatomic,retain) NSSet * moments; 
@property (nonatomic,retain,readonly) NSArray * momentsSortedByTime; 
@property (nonatomic,retain) id<PLMomentAssetData> keyAssetForKind; 
@property (nonatomic,retain) id<PLMomentAssetData> monthFirstAsset; 
@property (nonatomic,retain) NSSet * assets; 
@property (nonatomic,retain) NSSet * summaryAssets; 
@property (nonatomic,retain) NSSet * extendedAssets; 
@property (nonatomic,retain) NSSet * dayGroupAssets; 
@property (nonatomic,retain) NSSet * dayGroupExtendedAssets; 
@property (nonatomic,retain) NSSet * dayGroupSummaryAssets; 
@required
+(id)sortByTimeSortDescriptors;
-(NSSet *)assets;
-(void)refreshAssets;
-(NSSet *)moments;
-(NSDate *)endDate;
-(void)delete;
-(NSDate *)localStartDate;
-(BOOL)isCurated;
-(NSString *)uuid;
-(NSDate *)localEndDate;
-(void)setCategory:(unsigned short)arg1;
-(NSObject*<NSCopying>)uniqueObjectID;
-(void)setStartDate:(id)arg1;
-(int)endTimeZoneOffset;
-(void)setKeyAssetForKind:(id)arg1;
-(NSDate *)startDate;
-(id<PLPhotosHighlightData>)parentPhotosHighlight;
-(NSString *)subtitle;
-(void)setTitle:(id)arg1;
-(void)setEndDate:(id)arg1;
-(unsigned short)category;
-(void)setVisibilityState:(unsigned short)arg1;
-(void)setEndTimeZoneOffset:(int)arg1;
-(void)setType:(unsigned short)arg1;
-(NSArray *)momentsSortedByTime;
-(unsigned short)kind;
-(int)startTimeZoneOffset;
-(double)promotionScore;
-(void)setPromotionScore:(double)arg1;
-(unsigned short)enrichmentState;
-(void)setEnrichmentState:(unsigned short)arg1;
-(BOOL)isDeleted;
-(unsigned short)visibilityState;
-(void)setKind:(unsigned short)arg1;
-(void)setIsCurated:(BOOL)arg1;
-(void)setAssets:(id)arg1;
-(unsigned short)type;
-(void)removeAssetData:(id)arg1;
-(void)setStartTimeZoneOffset:(int)arg1;
-(void)setSubtitle:(id)arg1;
-(NSSet *)summaryAssets;
-(void)setUuid:(id)arg1;
-(void)setMoments:(id)arg1;
-(void)setParentPhotosHighlight:(id)arg1;
-(id<PLPhotosHighlightData>)parentDayGroupPhotosHighlight;
-(void)setParentDayGroupPhotosHighlight:(id)arg1;
-(NSSet *)childPhotosHighlights;
-(void)setChildPhotosHighlights:(id)arg1;
-(NSSet *)childDayGroupPhotosHighlights;
-(void)setChildDayGroupPhotosHighlights:(id)arg1;
-(id<PLMomentAssetData>)monthFirstAsset;
-(void)setMonthFirstAsset:(id)arg1;
-(void)setSummaryAssets:(id)arg1;
-(NSSet *)extendedAssets;
-(void)setExtendedAssets:(id)arg1;
-(NSSet *)dayGroupAssets;
-(void)setDayGroupAssets:(id)arg1;
-(NSSet *)dayGroupExtendedAssets;
-(void)setDayGroupExtendedAssets:(id)arg1;
-(NSSet *)dayGroupSummaryAssets;
-(void)setDayGroupSummaryAssets:(id)arg1;
-(void)bumpHighlightVersion;
-(id<PLMomentAssetData>)keyAssetForKind;
-(NSString *)title;

@end

