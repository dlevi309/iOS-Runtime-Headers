/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updatePageHistoryWithPage:(id)arg1 ;
-(void)didCreateMetricsData:(id)arg1 ;
-(void)setTrackedPageHistory:(NSMutableArray *)arg1 ;
@end

