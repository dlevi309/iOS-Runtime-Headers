/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue, CMAnomalyDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMAnomalyEvent;

@interface CMAnomalyManager : NSObject {

	NSObject*<OS_dispatch_queue> fPrivateQueue;
	NSObject*<OS_dispatch_queue> fAppQueue;
	CLConnectionClient* fLocationdConnection;
	CMAnomalyEvent* fLastReceivedEvent;
	CMAnomalyEvent* fLastDispatchedEvent;
	BOOL fRegisteredForNotification;
	id<CMAnomalyDelegate> _delegate;

}

@property (assign,nonatomic) id<CMAnomalyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isAnomalyDetectionAvailable;
+(long long)getAnomalyFeatureEnablingStrategyForUserAge:(id)arg1 ;
-(id)init;
-(id<CMAnomalyDelegate>)delegate;
-(void)_registerForAnomalyDetection:(BOOL)arg1 ;
-(void)_sendRegistrationForAnomalyEvent:(id)arg1 ;
-(void)startAnomalyDetection;
-(void)stopAnomalyDetection;
-(void)ackAnomalyEvent:(id)arg1 withResolution:(long long)arg2 ;
-(void)respondToAnomalyEvent:(id)arg1 withResponse:(long long)arg2 ;
-(void)resolveAnomalyEvent:(id)arg1 withResolution:(long long)arg2 ;
-(void)setDelegate:(id<CMAnomalyDelegate>)arg1 ;
-(void)dealloc;
@end

