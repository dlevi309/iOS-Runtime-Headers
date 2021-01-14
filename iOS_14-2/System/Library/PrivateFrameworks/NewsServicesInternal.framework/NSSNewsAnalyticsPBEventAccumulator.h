/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/

#import <libobjc.A.dylib/NSSNewsAnalyticsPBEventStreamObserver.h>

@protocol NSSNewsAnalyticsSessionManager;
@class NSSNewsAnalyticsEnvelopeDescriptor, NSMutableArray;

@interface NSSNewsAnalyticsPBEventAccumulator : NSObject <NSSNewsAnalyticsPBEventStreamObserver> {

	NSSNewsAnalyticsEnvelopeDescriptor* _envelopeDescriptor;
	id<NSSNewsAnalyticsSessionManager> _sessionManager;
	NSMutableArray* _events;

}

@property (nonatomic,copy,readonly) NSSNewsAnalyticsEnvelopeDescriptor * envelopeDescriptor;              //@synthesize envelopeDescriptor=_envelopeDescriptor - In the implementation block
@property (nonatomic,__weak,readonly) id<NSSNewsAnalyticsSessionManager> sessionManager;                  //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * events;                                                   //@synthesize events=_events - In the implementation block
-(id<NSSNewsAnalyticsSessionManager>)sessionManager;
-(id)init;
-(NSSNewsAnalyticsEnvelopeDescriptor *)envelopeDescriptor;
-(id)initWithEnvelopeDescriptor:(id)arg1 sessionManager:(id)arg2 ;
-(void)observeEvent:(id)arg1 ;
-(void)observeEvents:(id)arg1 ;
-(id)dequeueEventsIntoEnvelope;
-(NSMutableArray *)events;
@end

