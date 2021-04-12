/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)confidence;
-(unsigned long long)numberOfSearchConfidenceAssets;
-(BOOL)isReliable;
-(unsigned long long)numberOfHighConfidenceAssets;
-(unsigned long long)numberOfAssets;
-(double)relevance;
-(NSString *)identifier;

@end

