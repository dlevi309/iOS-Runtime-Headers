/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString, NSArray, NSDate;


@protocol PXDisplayAssetCollection <PXDisplayCollection>
@property (nonatomic,readonly) BOOL isEnriched; 
@property (nonatomic,readonly) BOOL isEnrichmentComplete; 
@property (nonatomic,readonly) double promotionScore; 
@property (nonatomic,readonly) BOOL isAggregation; 
@property (nonatomic,readonly) BOOL isRecent; 
@property (nonatomic,readonly) unsigned short px_highlightEnrichmentState; 
@property (nonatomic,readonly) long long px_highlightKind; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSString * localizedDebugDescription; 
@property (nonatomic,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,readonly) NSString * localizedDateDescription; 
@property (nonatomic,readonly) NSString * localizedSmartDescription; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long estimatedAssetCount; 
@required
-(BOOL)isAggregation;
-(NSDate *)endDate;
-(BOOL)isEnrichmentComplete;
-(unsigned short)px_highlightEnrichmentState;
-(NSString *)localizedDateDescription;
-(NSString *)localizedSmartDescription;
-(long long)px_highlightKind;
-(id)localizedDateDescriptionWithOptions:(unsigned long long)arg1;
-(NSString *)localizedDebugDescription;
-(NSDate *)startDate;
-(BOOL)isEnriched;
-(NSArray *)localizedLocationNames;
-(NSString *)localizedSubtitle;
-(double)promotionScore;
-(unsigned long long)estimatedAssetCount;
-(BOOL)isRecent;

@end

