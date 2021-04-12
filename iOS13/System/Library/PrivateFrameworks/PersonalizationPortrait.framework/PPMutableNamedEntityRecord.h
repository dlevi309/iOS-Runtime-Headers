/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <PersonalizationPortrait/PPNamedEntityRecord.h>

@class PPNamedEntity, PPSource, NSString, PPNamedEntityMetadata;

@interface PPMutableNamedEntityRecord : PPNamedEntityRecord

@property (nonatomic,retain) PPNamedEntity * entity; 
@property (nonatomic,retain) PPSource * source; 
@property (assign,nonatomic) unsigned long long algorithm; 
@property (assign,nonatomic) double initialScore; 
@property (assign,nonatomic) double decayRate; 
@property (nonatomic,retain) NSString * extractionOsBuild; 
@property (assign,nonatomic) unsigned char changeType; 
@property (assign,nonatomic) unsigned long long extractionAssetVersion; 
@property (assign,nonatomic) double sentimentScore; 
@property (nonatomic,retain) PPNamedEntityMetadata * metadata; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(PPSource *)arg1 ;
-(void)setMetadata:(PPNamedEntityMetadata *)arg1 ;
-(void)setEntity:(PPNamedEntity *)arg1 ;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(void)setChangeType:(unsigned char)arg1 ;
-(void)setExtractionAssetVersion:(unsigned long long)arg1 ;
-(void)setExtractionOsBuild:(NSString *)arg1 ;
-(void)setDecayRate:(double)arg1 ;
-(void)setInitialScore:(double)arg1 ;
-(void)setSentimentScore:(double)arg1 ;
@end

