/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSClue.h>
#import <libobjc.A.dylib/PGGraphIngestScene.h>
#import <libobjc.A.dylib/PGGraphIngestPlace.h>

@class NSString;

@interface CLSMeaningClue : CLSClue <PGGraphIngestScene, PGGraphIngestPlace> {

	id _relatedData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) double relevance; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (nonatomic,readonly) unsigned long long numberOfHighConfidenceAssets; 
@property (nonatomic,readonly) unsigned long long numberOfSearchConfidenceAssets; 
@property (nonatomic,readonly) BOOL isReliable; 
@property (nonatomic,readonly) NSString * placeInterestType; 
@property (retain) id relatedData;                                                             //@synthesize relatedData=_relatedData - In the implementation block
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 ;
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4 ;
-(NSString *)identifier;
-(unsigned long long)numberOfAssets;
-(BOOL)isReliable;
-(unsigned long long)numberOfHighConfidenceAssets;
-(unsigned long long)numberOfSearchConfidenceAssets;
-(NSString *)placeInterestType;
-(id)init;
-(BOOL)isEqualToClue:(id)arg1 ;
-(id)relatedData;
-(void)setRelatedData:(id)arg1 ;
@end

