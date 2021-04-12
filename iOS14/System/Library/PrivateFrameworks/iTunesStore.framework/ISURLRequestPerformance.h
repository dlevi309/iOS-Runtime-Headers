/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStartTime:(double)arg1 ;
-(void)setFinishTime:(double)arg1 ;
-(void)setURLResponse:(NSURLResponse *)arg1 ;
-(double)startTime;
-(NSURLResponse *)URLResponse;
-(void)dealloc;
-(void)setRenderFinishTime:(double)arg1 ;
-(double)renderEndInterval;
-(void)setRenderBeginTime:(double)arg1 ;
-(double)finishInterval;
-(double)receivedResponseInterval;
-(double)renderBeginInterval;
-(void)setReceivedResponseTime:(double)arg1 ;
@end

