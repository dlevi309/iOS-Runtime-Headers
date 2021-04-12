/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned short)type;
-(void)setType:(unsigned short)arg1;
-(unsigned short)category;
-(void)setCategory:(unsigned short)arg1;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)uuid;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(unsigned short)kind;
-(void)setKind:(unsigned short)arg1;
-(void)setUuid:(id)arg1;
-(NSString *)subtitle;
-(void)setStartDate:(id)arg1;
-(void)setEndDate:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(void)delete;
-(BOOL)isDeleted;
-(NSSet *)assets;
-(void)setAssets:(id)arg1;
-(NSObject*<NSCopying>)uniqueObjectID;
-(void)refreshAssets;
-(void)bumpHighlightVersion;
-(void)removeAssetData:(id)arg1;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(int)startTimeZoneOffset;
-(void)setStartTimeZoneOffset:(int)arg1;
-(int)endTimeZoneOffset;
-(void)setEndTimeZoneOffset:(int)arg1;
-(BOOL)isCurated;
-(void)setIsCurated:(BOOL)arg1;
-(double)promotionScore;
-(void)setPromotionScore:(double)arg1;
-(unsigned short)visibilityState;
-(void)setVisibilityState:(unsigned short)arg1;
-(unsigned short)enrichmentState;
-(void)setEnrichmentState:(unsigned short)arg1;
-(id<PLPhotosHighlightData>)parentPhotosHighlight;
-(void)setParentPhotosHighlight:(id)arg1;
-(id<PLPhotosHighlightData>)parentDayGroupPhotosHighlight;
-(void)setParentDayGroupPhotosHighlight:(id)arg1;
-(NSSet *)childPhotosHighlights;
-(void)setChildPhotosHighlights:(id)arg1;
-(NSSet *)childDayGroupPhotosHighlights;
-(void)setChildDayGroupPhotosHighlights:(id)arg1;
-(NSSet *)moments;
-(void)setMoments:(id)arg1;
-(NSArray *)momentsSortedByTime;
-(id<PLMomentAssetData>)keyAssetForKind;
-(void)setKeyAssetForKind:(id)arg1;
-(id<PLMomentAssetData>)monthFirstAsset;
-(void)setMonthFirstAsset:(id)arg1;
-(NSSet *)summaryAssets;
-(void)setSummaryAssets:(id)arg1;
-(NSSet *)extendedAssets;
-(void)setExtendedAssets:(id)arg1;
-(NSSet *)dayGroupAssets;
-(void)setDayGroupAssets:(id)arg1;
-(NSSet *)dayGroupExtendedAssets;
-(void)setDayGroupExtendedAssets:(id)arg1;
-(NSSet *)dayGroupSummaryAssets;
-(void)setDayGroupSummaryAssets:(id)arg1;

@end

