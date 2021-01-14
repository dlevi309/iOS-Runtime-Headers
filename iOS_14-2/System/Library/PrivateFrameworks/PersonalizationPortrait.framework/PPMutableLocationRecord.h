/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <PersonalizationPortrait/PPLocationRecord.h>

@class NSUUID, PPLocation, PPSource, NSArray, NSString;

@interface PPMutableLocationRecord : PPLocationRecord

@property (nonatomic,retain) NSUUID * uuid; 
@property (nonatomic,retain) PPLocation * location; 
@property (nonatomic,retain) PPSource * source; 
@property (assign,nonatomic) unsigned short algorithm; 
@property (assign,nonatomic) double initialScore; 
@property (assign,nonatomic) double decayRate; 
@property (assign,nonatomic) double sentimentScore; 
@property (nonatomic,retain) NSArray * contextualNamedEntities; 
@property (nonatomic,retain) NSString * extractionOsBuild; 
@property (assign,nonatomic) unsigned extractionAssetVersion; 
+(id)new;
-(void)setDecayRate:(double)arg1 ;
-(void)setAlgorithm:(unsigned short)arg1 ;
-(id)init;
-(void)setSource:(PPSource *)arg1 ;
-(void)setLocation:(PPLocation *)arg1 ;
-(void)setContextualNamedEntities:(NSArray *)arg1 ;
-(void)setExtractionOsBuild:(NSString *)arg1 ;
-(void)setSentimentScore:(double)arg1 ;
-(void)setExtractionAssetVersion:(unsigned)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setInitialScore:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

