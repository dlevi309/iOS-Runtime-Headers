/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSClue.h>
#import <libobjc.A.dylib/PGGraphIngestScene.h>
#import <libobjc.A.dylib/PGGraphIngestPlace.h>

@class NSString;

@interface CLSMeaningClue : CLSClue <PGGraphIngestScene, PGGraphIngestPlace> {

	id _relatedData;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) double relevance; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (nonatomic,readonly) unsigned long long numberOfHighConfidenceAssets; 
@property (nonatomic,readonly) unsigned long long numberOfSearchConfidenceAssets; 
@property (nonatomic,readonly) BOOL isReliable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * placeInterestType; 
@property (retain) id relatedData;                                                             //@synthesize relatedData=_relatedData - In the implementation block
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4 ;
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)numberOfSearchConfidenceAssets;
-(BOOL)isReliable;
-(unsigned long long)numberOfHighConfidenceAssets;
-(unsigned long long)numberOfAssets;
-(NSString *)identifier;
-(NSString *)placeInterestType;
-(BOOL)isEqualToClue:(id)arg1 ;
-(id)init;
-(void)setRelatedData:(id)arg1 ;
-(id)relatedData;
@end

