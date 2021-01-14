/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTAudioAnalytics.h>

@class NSArray;

@interface FTMutableAudioAnalytics : FTAudioAnalytics

@property (nonatomic,copy) NSArray * speech_recognition_features; 
@property (nonatomic,copy) NSArray * acoustic_features; 
-(id)init;
-(NSArray *)speech_recognition_features;
-(void)setSpeech_recognition_features:(NSArray *)arg1 ;
-(NSArray *)acoustic_features;
-(void)setAcoustic_features:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

