/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <libobjc.A.dylib/ICFlowControl.h>

@interface _PIVideoStabilizeFlowControl : NSObject <ICFlowControl> {

	/*^block*/id _progressHandler;
	double _rangeMin;
	double _rangeMax;
	/*^block*/id _shouldCancelHandler;

}

@property (nonatomic,copy) id progressHandler;                  //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) double rangeMin;                   //@synthesize rangeMin=_rangeMin - In the implementation block
@property (assign,nonatomic) double rangeMax;                   //@synthesize rangeMax=_rangeMax - In the implementation block
@property (nonatomic,copy) id shouldCancelHandler;              //@synthesize shouldCancelHandler=_shouldCancelHandler - In the implementation block
-(double)rangeMin;
-(double)rangeMax;
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
-(BOOL)ICShouldBeCanceled;
-(void)ICReportProgress:(float)arg1 ;
-(void)setRangeMin:(double)arg1 ;
-(void)setRangeMax:(double)arg1 ;
-(id)shouldCancelHandler;
-(void)setShouldCancelHandler:(id)arg1 ;
@end

