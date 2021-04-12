/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraMetricsLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSNumber, NSString;

@interface HMDCameraMetricsStreamLogEvent : HMDCameraMetricsLogEvent <HMDAWDLogEvent> {

	NSNumber* _referenceTimestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSNumber * referenceTimestamp;              //@synthesize referenceTimestamp=_referenceTimestamp - In the implementation block
+(void)initialize;
+(id)uuid;
-(id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(BOOL)arg3 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(NSNumber *)referenceTimestamp;
-(void)setReferenceTimestamp:(NSNumber *)arg1 ;
-(unsigned)timeSinceReference:(id)arg1 ;
-(void)addInitialConfiguration:(id)arg1 ;
-(void)addReconfiguration:(id)arg1 ;
-(void)addIDSSession:(id)arg1 ;
-(void)addIDSConnectionSetup:(id)arg1 ;
-(void)addStreamMessaging:(id)arg1 ;
@end

