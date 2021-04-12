/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBAWDMetricDelegate;
@interface SBAWDMetric : NSObject {

	id<SBAWDMetricDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBAWDMetricDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBAWDMetricDelegate>)delegate;
-(void)setDelegate:(id<SBAWDMetricDelegate>)arg1 ;
-(unsigned long long)componentID;
-(Class)dataClass;
-(unsigned long long)metricID;
-(void)postWithDataBuilder:(/*^block*/id)arg1 ;
-(id)configureWithData:(id)arg1 ;
-(void)_postMetric:(id)arg1 withID:(unsigned)arg2 ;
@end

