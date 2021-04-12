/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAWDMetricQueryDelegate:(id)arg1 ;
-(id)initWithAWDConnection:(id)arg1 ;
-(void)reportStatsToAWD;
@end

