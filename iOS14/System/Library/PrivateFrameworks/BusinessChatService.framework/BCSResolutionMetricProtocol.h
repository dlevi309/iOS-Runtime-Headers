/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

@class BCSTimingMeasurement, BCSFlagMeasurement;


@protocol BCSResolutionMetricProtocol <NSObject>
@property (assign,nonatomic) BOOL errorEncountered; 
@property (nonatomic,retain) BCSTimingMeasurement * timingMeasurement; 
@property (nonatomic,retain) BCSFlagMeasurement * cacheHitMeasurement; 
@required
-(void)setCacheHitMeasurement:(id)arg1;
-(BCSFlagMeasurement *)cacheHitMeasurement;
-(void)setTimingMeasurement:(id)arg1;
-(BCSTimingMeasurement *)timingMeasurement;
-(void)setErrorEncountered:(BOOL)arg1;
-(BOOL)errorEncountered;

@end

