/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

@class NSString;


@protocol PGEventEnrichment <NSObject>
@property (nonatomic,readonly) NSString * uuid; 
@property (readonly) BOOL isLongTrip; 
@property (readonly) BOOL isShortTrip; 
@property (readonly) BOOL isTrip; 
@property (readonly) BOOL isAggregation; 
@required
-(BOOL)isShortTrip;
-(id)meaningLabels;
-(BOOL)isLongTrip;
-(BOOL)isTrip;
-(id)reliableMeaningLabels;
-(id)fetchAssetCollection;
-(BOOL)isAggregation;
-(id)anniversaryPersonNode;
-(id)birthdayPersonNode;
-(id)sortedMomentNodes;
-(NSString *)uuid;
-(id)momentNodes;

@end

