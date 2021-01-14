/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTAudioAnalytics_AcousticFeaturesEntry.h>

@class NSString, FTAcousticFeature;

@interface FTMutableAudioAnalytics_AcousticFeaturesEntry : FTAudioAnalytics_AcousticFeaturesEntry

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) FTAcousticFeature * value; 
-(id)init;
-(void)setValue:(FTAcousticFeature *)arg1 ;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(FTAcousticFeature *)value;
@end

