/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/PRRangingSessionDelegate.h>
#import <ARKit/ARSensor.h>

@protocol ARSensorDelegate;
@class PRRangingSession, NSMutableSet, NSMutableDictionary, NSString;

@interface ARProximitySensor : NSObject <PRRangingSessionDelegate, ARSensor> {

	PRRangingSession* _rangingSession;
	NSMutableSet* _peers;
	NSMutableDictionary* _vioSessionID;
	NSMutableSet* _vioSessions;
	os_unfair_lock_s _lockState;
	BOOL _running;
	id<ARSensorDelegate> _delegate;

}

@property (getter=isRunning) BOOL running;                                      //@synthesize running=_running - In the implementation block
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long powerUsage; 
-(id)init;
-(void)dealloc;
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(BOOL)isRunning;
-(void)setRunning:(BOOL)arg1 ;
-(void)rangingSession:(id)arg1 didFailWithError:(id)arg2 ;
-(void)rangingSession:(id)arg1 didOutputCollaborationData:(id)arg2 ;
-(void)rangingSession:(id)arg1 didMeasurePeer:(id)arg2 atRelativePosition:(id)arg3 ;
-(void)pushCollaborationData:(id)arg1 ;
-(unsigned long long)providedDataTypes;
-(void)_requestInitialCollaborationData;
@end

