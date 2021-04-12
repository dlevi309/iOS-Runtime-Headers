/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTStandardEventHandler.h>

@class NSMutableArray;

@interface MTPageEventHandler : MTStandardEventHandler {

	NSMutableArray* _trackedPageHistory;

}

@property (nonatomic,retain) NSMutableArray * trackedPageHistory;                         //@synthesize trackedPageHistory=_trackedPageHistory - In the implementation block
@property (assign,nonatomic,__weak) id<MTPageEventHandlerDelegate> delegate; 
-(id)eventType;
-(id)knownFields;
-(id)eventVersion:(id)arg1 ;
-(id)pageHistory:(id)arg1 ;
-(NSMutableArray *)trackedPageHistory;
-(id)metricsDataWithCallerSuppliedFields:(id)arg1 ;
-(void)updatePageHistoryWithPage:(id)arg1 ;
-(void)setTrackedPageHistory:(NSMutableArray *)arg1 ;
@end

