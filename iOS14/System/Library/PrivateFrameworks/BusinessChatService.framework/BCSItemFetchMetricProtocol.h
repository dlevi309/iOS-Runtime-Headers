/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

@class BCSTimingMeasurement;


@protocol BCSItemFetchMetricProtocol <NSObject>
@property (assign,nonatomic) BOOL errorEncountered; 
@property (nonatomic,retain) BCSTimingMeasurement * timingMeasurement; 
@required
-(void)setTimingMeasurement:(id)arg1;
-(BCSTimingMeasurement *)timingMeasurement;
-(void)setErrorEncountered:(BOOL)arg1;
-(BOOL)errorEncountered;

@end

