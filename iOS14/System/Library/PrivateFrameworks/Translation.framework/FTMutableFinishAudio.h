/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTFinishAudio.h>

@class NSArray;

@interface FTMutableFinishAudio : FTFinishAudio

@property (assign,nonatomic) int packet_count; 
@property (assign,nonatomic) float total_audio_recorded_seconds; 
@property (nonatomic,copy) NSArray * features_at_endpoint; 
@property (nonatomic,copy) NSArray * server_feature_latency_distribution; 
-(id)init;
-(int)packet_count;
-(void)setPacket_count:(int)arg1 ;
-(float)total_audio_recorded_seconds;
-(void)setTotal_audio_recorded_seconds:(float)arg1 ;
-(NSArray *)features_at_endpoint;
-(void)setFeatures_at_endpoint:(NSArray *)arg1 ;
-(NSArray *)server_feature_latency_distribution;
-(void)setServer_feature_latency_distribution:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

