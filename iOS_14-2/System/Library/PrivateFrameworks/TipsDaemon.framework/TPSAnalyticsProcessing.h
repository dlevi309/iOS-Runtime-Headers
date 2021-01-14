/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

@class NSDate;


@protocol TPSAnalyticsProcessing <NSObject>
@property (nonatomic,retain) NSDate * dateLastRun; 
@required
-(void)resetAnalytics;
-(void)processAnalytics:(/*^block*/id)arg1;
-(void)setDateLastRun:(id)arg1;
-(NSDate *)dateLastRun;

@end

