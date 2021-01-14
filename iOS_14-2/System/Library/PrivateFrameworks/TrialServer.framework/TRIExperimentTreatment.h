/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRIExperimentDeployment, NSString;

@interface TRIExperimentTreatment : NSObject <NSCopying> {

	TRIExperimentDeployment* _experimentDeployment;
	NSString* _treatmentId;

}

@property (nonatomic,readonly) TRIExperimentDeployment * experimentDeployment;              //@synthesize experimentDeployment=_experimentDeployment - In the implementation block
@property (nonatomic,readonly) NSString * treatmentId;                                      //@synthesize treatmentId=_treatmentId - In the implementation block
+(id)treatmentWithExperimentDeployment:(id)arg1 treatmentId:(id)arg2 ;
-(id)init;
-(NSString *)treatmentId;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(TRIExperimentDeployment *)experimentDeployment;
-(id)copyWithReplacementExperimentDeployment:(id)arg1 ;
-(id)copyWithReplacementTreatmentId:(id)arg1 ;
-(id)initWithExperimentDeployment:(id)arg1 treatmentId:(id)arg2 ;
-(BOOL)isEqualToTreatment:(id)arg1 ;
@end

