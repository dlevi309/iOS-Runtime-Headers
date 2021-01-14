/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCLinkProbingHandlerDelegate <NSObject>
@optional
-(void)didUpdateLinkPreferenceOrder:(id)arg1;

@required
-(void)startActiveProbingWithOptions:(id)arg1;
-(void)stopActiveProbingWithOptions:(id)arg1;
-(void)flushLinkProbingStatusWithOptions:(id)arg1;
-(void)queryProbingResultsWithOptions:(id)arg1;

@end

