/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/TRITask.h>

@class NSArray, NSString, NSDate;

@interface TRIRotateSubjectIdTask : NSObject <TRITask> {

	BOOL _forceUpdate;
	NSArray* dependencies;
	NSArray* tags;
	NSString* _deviceId;
	NSDate* _nextRotationDate;
	NSDate* _startTime;

}

@property (assign) BOOL forceUpdate;                                //@synthesize forceUpdate=_forceUpdate - In the implementation block
@property (retain) NSString * deviceId;                             //@synthesize deviceId=_deviceId - In the implementation block
@property (retain) NSDate * nextRotationDate;                       //@synthesize nextRotationDate=_nextRotationDate - In the implementation block
@property (retain) NSDate * startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * tags; 
@property (readonly) NSArray * dependencies; 
+(BOOL)supportsSecureCoding;
+(id)task;
+(id)taskWithDeviceId:(id)arg1 nextRotationDate:(id)arg2 forceUpdate:(BOOL)arg3 ;
-(int)run;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)dependencies;
-(NSArray *)tags;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(BOOL)forceUpdate;
-(NSString *)deviceId;
-(void)setDeviceId:(NSString *)arg1 ;
-(NSDate *)nextRotationDate;
-(void)setNextRotationDate:(NSDate *)arg1 ;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(void)setForceUpdate:(BOOL)arg1 ;
-(BOOL)isTelemetryAllowed:(id)arg1 ;
@end

