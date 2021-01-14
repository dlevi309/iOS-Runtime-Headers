/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTClientSetupInfo.h>

@class NSString;

@interface FTMutableClientSetupInfo : FTClientSetupInfo

@property (assign,nonatomic) float endpoint_threshold; 
@property (assign,nonatomic) BOOL endpoint_extra_delay; 
@property (nonatomic,copy) NSString * speech_id; 
-(id)init;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(float)endpoint_threshold;
-(void)setEndpoint_threshold:(float)arg1 ;
-(BOOL)endpoint_extra_delay;
-(void)setEndpoint_extra_delay:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

