/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@class NSURLResponse;

@interface ISURLRequestPerformance : NSObject {

	double _finishTime;
	double _receivedResponseTime;
	double _renderBeginTime;
	double _renderEndTime;
	double _startTime;
	NSURLResponse* _urlResponse;

}

@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSURLResponse * URLResponse;                      //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) double finishInterval; 
@property (nonatomic,readonly) double receivedResponseInterval; 
@property (nonatomic,readonly) double renderBeginInterval; 
@property (nonatomic,readonly) double renderEndInterval; 
-(void)dealloc;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(NSURLResponse *)URLResponse;
-(void)setURLResponse:(NSURLResponse *)arg1 ;
-(double)receivedResponseInterval;
-(double)finishInterval;
-(void)setRenderFinishTime:(double)arg1 ;
-(double)renderEndInterval;
-(void)setRenderBeginTime:(double)arg1 ;
-(double)renderBeginInterval;
-(void)setFinishTime:(double)arg1 ;
-(void)setReceivedResponseTime:(double)arg1 ;
@end

