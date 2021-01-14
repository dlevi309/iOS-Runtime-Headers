/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setQos:(unsigned)arg1 ;
-(unsigned)qos;
-(double)safeTime;
-(id<GEOMapServiceThrottlableTicket>)ticket;
-(void)setTicket:(id<GEOMapServiceThrottlableTicket>)arg1 ;
-(id)submissionHandler;
-(void)setSubmissionHandler:(id)arg1 ;
-(void)setSafeTime:(double)arg1 ;
@end

