/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphEdge.h>

@interface PGGraphSceneEdge : PGGraphEdge

@property (nonatomic,readonly) BOOL isReliable; 
@property (nonatomic,readonly) BOOL isSearchableForEvent; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (nonatomic,readonly) unsigned long long numberOfHighConfidenceAssets; 
@property (nonatomic,readonly) unsigned long long numberOfSearchConfidenceAssets; 
-(id)debugDescription;
-(unsigned long long)numberOfAssets;
-(BOOL)isReliable;
-(BOOL)isSearchableForEvent;
-(unsigned long long)numberOfHighConfidenceAssets;
-(unsigned long long)numberOfSearchConfidenceAssets;
@end

