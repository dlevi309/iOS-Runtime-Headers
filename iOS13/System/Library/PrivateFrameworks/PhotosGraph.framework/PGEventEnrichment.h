/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)uuid;
-(id)meaningLabels;
-(BOOL)isAggregation;
-(BOOL)isTrip;
-(BOOL)isLongTrip;
-(BOOL)isShortTrip;
-(id)momentNodes;
-(id)sortedMomentNodes;
-(id)fetchAssetCollection;
-(id)reliableMeaningLabels;
-(id)birthdayPersonNode;
-(id)anniversaryPersonNode;

@end

