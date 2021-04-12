/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIExperimentBaseTask.h>

@class NSString;

@interface TRITreatmentBaseTask : TRIExperimentBaseTask {

	NSString* _treatmentId;

}

@property (readonly) NSString * treatmentId;              //@synthesize treatmentId=_treatmentId - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)metrics;
-(NSString *)treatmentId;
-(id)initWithExperimentId:(id)arg1 treatmentId:(id)arg2 ;
@end

