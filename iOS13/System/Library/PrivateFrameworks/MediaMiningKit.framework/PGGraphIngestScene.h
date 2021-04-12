/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

@class NSString;


@protocol PGGraphIngestScene <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) double relevance; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (nonatomic,readonly) unsigned long long numberOfHighConfidenceAssets; 
@property (nonatomic,readonly) unsigned long long numberOfSearchConfidenceAssets; 
@property (nonatomic,readonly) BOOL isReliable; 
@required
-(NSString *)identifier;
-(double)confidence;
-(unsigned long long)numberOfAssets;
-(BOOL)isReliable;
-(double)relevance;
-(unsigned long long)numberOfHighConfidenceAssets;
-(unsigned long long)numberOfSearchConfidenceAssets;

@end

