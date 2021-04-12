/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id<CMAnomalyDelegate>)delegate;
-(void)setDelegate:(id<CMAnomalyDelegate>)arg1 ;
-(void)_registerForAnomalyDetection:(BOOL)arg1 ;
-(void)_sendRegistrationForAnomalyEvent:(id)arg1 ;
-(void)startAnomalyDetection;
-(void)stopAnomalyDetection;
-(void)ackAnomalyEvent:(id)arg1 withResolution:(long long)arg2 ;
-(void)respondToAnomalyEvent:(id)arg1 withResponse:(long long)arg2 ;
-(void)resolveAnomalyEvent:(id)arg1 withResolution:(long long)arg2 ;
@end

