/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOMapServiceThrottlableTicket;
@interface _GEOThrottledTicket : NSObject {

	unsigned qos;
	id<GEOMapServiceThrottlableTicket> ticket;
	/*^block*/id submissionHandler;
	double safeTime;

}

@property (nonatomic,retain) id<GEOMapServiceThrottlableTicket> ticket; 
@property (nonatomic,copy) id submissionHandler; 
@property (assign,nonatomic) unsigned qos; 
@property (assign,nonatomic) double safeTime; 
+(id)ticket:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(unsigned)qos;
-(void)setQos:(unsigned)arg1 ;
-(void)setTicket:(id<GEOMapServiceThrottlableTicket>)arg1 ;
-(void)setSubmissionHandler:(id)arg1 ;
-(void)setSafeTime:(double)arg1 ;
-(id<GEOMapServiceThrottlableTicket>)ticket;
-(id)submissionHandler;
-(double)safeTime;
@end

