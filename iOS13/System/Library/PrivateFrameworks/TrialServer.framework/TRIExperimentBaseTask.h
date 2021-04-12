/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIBaseTask.h>
#import <libobjc.A.dylib/TRIMetricsProviding.h>

@class NSString;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {

	NSString* _experimentId;

}

@property (readonly) NSString * experimentId;              //@synthesize experimentId=_experimentId - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tags;
-(id)metrics;
-(NSString *)experimentId;
-(id)initWithExperimentId:(id)arg1 ;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(int)projectIdForExperiment;
@end

