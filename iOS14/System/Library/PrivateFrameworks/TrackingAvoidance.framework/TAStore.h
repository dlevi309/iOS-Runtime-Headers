/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/TAVisitStateObserver.h>

@class NSDate, TAEventBuffer, TAVisitState, TADeviceRecord, NSString;

@interface TAStore : NSObject <TAVisitStateObserver> {

	NSDate* _lastLocationDate;
	NSDate* _clock;
	TAEventBuffer* _eventBuffer;
	TAVisitState* _visitState;
	TADeviceRecord* _deviceRecord;

}

@property (nonatomic,readonly) NSDate * clock;                             //@synthesize clock=_clock - In the implementation block
@property (nonatomic,readonly) TAEventBuffer * eventBuffer;                //@synthesize eventBuffer=_eventBuffer - In the implementation block
@property (nonatomic,readonly) TAVisitState * visitState;                  //@synthesize visitState=_visitState - In the implementation block
@property (nonatomic,readonly) TADeviceRecord * deviceRecord;              //@synthesize deviceRecord=_deviceRecord - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)clock;
-(BOOL)shouldAddTALocationLite:(id)arg1 ;
-(TAEventBuffer *)eventBuffer;
-(TAVisitState *)visitState;
-(id)initWithEventBufferSettings:(id)arg1 scanRequestSettings:(id)arg2 visitStateSettings:(id)arg3 deviceRecordSettings:(id)arg4 ;
-(TADeviceRecord *)deviceRecord;
-(void)updateClock:(id)arg1 ;
-(NSString *)description;
-(BOOL)shouldAddTACLVisit:(id)arg1 ;
-(unsigned long long)hash;
-(void)addTAEvent:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2 ;
-(BOOL)shouldAddTASPAdvertisement:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)visitState:(id)arg1 didChangeStateFromType:(unsigned long long)arg2 toType:(unsigned long long)arg3 ;
@end

