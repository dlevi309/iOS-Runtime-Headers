/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBAWDMetricDelegate;
@interface SBAWDMetric : NSObject {

	id<SBAWDMetricDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBAWDMetricDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBAWDMetricDelegate>)delegate;
-(void)setDelegate:(id<SBAWDMetricDelegate>)arg1 ;
-(Class)dataClass;
-(unsigned long long)componentID;
-(unsigned long long)metricID;
-(void)postWithDataBuilder:(/*^block*/id)arg1 ;
-(id)configureWithData:(id)arg1 ;
-(void)_postMetric:(id)arg1 withID:(unsigned)arg2 ;
@end

