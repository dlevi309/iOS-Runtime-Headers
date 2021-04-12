/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSMutableArray *)events;
-(id<NSSNewsAnalyticsSessionManager>)sessionManager;
-(void)observeEvent:(id)arg1 ;
-(void)observeEvents:(id)arg1 ;
-(NSSNewsAnalyticsEnvelopeDescriptor *)envelopeDescriptor;
-(id)initWithEnvelopeDescriptor:(id)arg1 sessionManager:(id)arg2 ;
-(id)dequeueEventsIntoEnvelope;
@end

