/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/PMLAWDBaseTracker.h>

@protocol PMLAWDMetricQueryDelegate;
@class AWDServerConnection;

@interface PMLAWDAvailableSessionsTracker : PMLAWDBaseTracker {

	id<PMLAWDMetricQueryDelegate> _delegate;
	AWDServerConnection* _awdServerConnection;

}
-(id)init;
-(id)initWithAWDConnection:(id)arg1 ;
-(void)setAWDMetricQueryDelegate:(id)arg1 ;
-(void)reportStatsToAWD;
@end

