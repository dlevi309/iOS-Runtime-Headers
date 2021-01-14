/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TRIExperimentDeployment, NSString, NSDate, NSArray;

@interface TRIExperimentRecord : NSObject <NSCopying, NSSecureCoding> {

	int _type;
	TRIExperimentDeployment* _experimentDeployment;
	NSString* _treatmentId;
	long long _status;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _namespaces;

}

@property (nonatomic,readonly) TRIExperimentDeployment * experimentDeployment;              //@synthesize experimentDeployment=_experimentDeployment - In the implementation block
@property (nonatomic,readonly) NSString * treatmentId;                                      //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) int type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long status;                                            //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                            //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSArray * namespaces;                                        //@synthesize namespaces=_namespaces - In the implementation block
+(void)load;
+(BOOL)supportsSecureCoding;
+(id)recordWithExperimentDeployment:(id)arg1 treatmentId:(id)arg2 type:(int)arg3 status:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6 namespaces:(id)arg7 ;
-(NSDate *)endDate;
-(id)init;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)treatmentId;
-(id)description;
-(BOOL)isEqualToRecord:(id)arg1 ;
-(NSArray *)namespaces;
-(int)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithReplacementType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
-(id)initWithExperimentDeployment:(id)arg1 treatmentId:(id)arg2 type:(int)arg3 status:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6 namespaces:(id)arg7 ;
-(TRIExperimentDeployment *)experimentDeployment;
-(id)copyWithReplacementExperimentDeployment:(id)arg1 ;
-(id)copyWithReplacementTreatmentId:(id)arg1 ;
-(id)copyWithReplacementStatus:(long long)arg1 ;
-(id)copyWithReplacementStartDate:(id)arg1 ;
-(id)copyWithReplacementEndDate:(id)arg1 ;
-(id)copyWithReplacementNamespaces:(id)arg1 ;
-(void)_swizzledEncodeWithCoder:(id)arg1 ;
-(BOOL)isExpiredExperiment;
@end

