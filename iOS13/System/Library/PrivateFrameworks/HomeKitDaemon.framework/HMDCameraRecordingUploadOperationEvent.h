/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSError, NSDate, NSUUID, NSString;

@interface HMDCameraRecordingUploadOperationEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _didCausePreviousClipToFinalizeDueToDurationLimit;
	int _operationType;
	double _runTime;
	NSError* _error;
	double _totalClipDuration;
	unsigned long long _retryCount;
	NSDate* _operationStartDate;
	NSUUID* _clipModelID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) double runTime;                                                     //@synthesize runTime=_runTime - In the implementation block
@property (readonly) unsigned long long runTimeInMilliseconds; 
@property (assign) int operationType;                                                  //@synthesize operationType=_operationType - In the implementation block
@property (assign) BOOL didCausePreviousClipToFinalizeDueToDurationLimit;              //@synthesize didCausePreviousClipToFinalizeDueToDurationLimit=_didCausePreviousClipToFinalizeDueToDurationLimit - In the implementation block
@property (retain) NSError * error;                                                    //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long totalClipDurationMilliseconds; 
@property (assign) double totalClipDuration;                                           //@synthesize totalClipDuration=_totalClipDuration - In the implementation block
@property (assign) unsigned long long retryCount;                                      //@synthesize retryCount=_retryCount - In the implementation block
@property (readonly) unsigned long long operationStartTime; 
@property (retain) NSDate * operationStartDate;                                        //@synthesize operationStartDate=_operationStartDate - In the implementation block
@property (copy,readonly) NSUUID * clipModelID;                                        //@synthesize clipModelID=_clipModelID - In the implementation block
@property (readonly) unsigned long long startTimestamp; 
+(id)uuid;
+(int)operationTypeFromOperation:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(int)operationType;
-(void)setOperationType:(int)arg1 ;
-(double)runTime;
-(void)setRunTime:(double)arg1 ;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)startTimestamp;
-(id)attributeDescriptions;
-(unsigned long long)operationStartTime;
-(unsigned long long)runTimeInMilliseconds;
-(id)initWithClipModelID:(id)arg1 operation:(id)arg2 ;
-(NSUUID *)clipModelID;
-(void)setOperationStartDate:(NSDate *)arg1 ;
-(void)setTotalClipDuration:(double)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(BOOL)didCausePreviousClipToFinalizeDueToDurationLimit;
-(unsigned long long)totalClipDurationMilliseconds;
-(double)totalClipDuration;
-(NSDate *)operationStartDate;
-(void)setDidCausePreviousClipToFinalizeDueToDurationLimit:(BOOL)arg1 ;
@end

