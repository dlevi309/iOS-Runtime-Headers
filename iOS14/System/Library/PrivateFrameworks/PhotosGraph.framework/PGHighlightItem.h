/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

@class NSDate, NSString, PHAsset, NSArray;


@protocol PGHighlightItem <NSObject>
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,copy,readonly) NSString * dateDescription; 
@property (nonatomic,copy,readonly) NSString * smartDescription; 
@property (nonatomic,readonly) PHAsset * keyAsset; 
@property (nonatomic,readonly) NSArray * extendedCuratedAssets; 
@property (nonatomic,readonly) unsigned long long numberOfAssetsInExtended; 
@property (nonatomic,readonly) double promotionScore; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short kind; 
@property (nonatomic,readonly) unsigned short visibilityState; 
@property (nonatomic,readonly) unsigned short enrichmentState; 
@property (nonatomic,readonly) id modelObject; 
@required
-(NSDate *)endDate;
-(NSDate *)localStartDate;
-(NSString *)dateDescription;
-(NSString *)uuid;
-(NSDate *)localEndDate;
-(PHAsset *)keyAsset;
-(NSDate *)startDate;
-(id)modelObject;
-(unsigned short)kind;
-(NSString *)smartDescription;
-(double)promotionScore;
-(unsigned short)enrichmentState;
-(unsigned short)visibilityState;
-(unsigned short)type;
-(NSArray *)extendedCuratedAssets;
-(unsigned long long)numberOfAssetsInExtended;

@end

