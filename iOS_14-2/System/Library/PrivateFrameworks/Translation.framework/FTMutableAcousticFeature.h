/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTAcousticFeature.h>

@class NSArray;

@interface FTMutableAcousticFeature : FTAcousticFeature

@property (nonatomic,copy) NSArray * acoustic_feature_per_frame; 
@property (assign,nonatomic) float frame_duration; 
-(id)init;
-(NSArray *)acoustic_feature_per_frame;
-(float)frame_duration;
-(void)setAcoustic_feature_per_frame:(NSArray *)arg1 ;
-(void)setFrame_duration:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

