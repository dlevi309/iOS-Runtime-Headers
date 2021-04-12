/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/


@protocol SRRequestFetching <SRRequestReading>
@property (assign) double from; 
@property (assign) double to; 
@property (assign) BOOL bypassHoldingPeriod; 
@required
-(double)to;
-(double)from;
-(void)setTo:(double)arg1;
-(void)setFrom:(double)arg1;
-(BOOL)bypassHoldingPeriod;
-(void)setBypassHoldingPeriod:(BOOL)arg1;

@end

