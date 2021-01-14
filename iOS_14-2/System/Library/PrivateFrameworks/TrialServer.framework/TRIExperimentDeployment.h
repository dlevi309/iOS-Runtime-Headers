/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TRIExperimentDeployment : NSObject <NSCopying, NSSecureCoding> {

	int _deploymentId;
	NSString* _experimentId;

}

@property (readonly) NSString * shortDesc; 
@property (nonatomic,readonly) NSString * experimentId;              //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) int deploymentId;                     //@synthesize deploymentId=_deploymentId - In the implementation block
+(void)load;
+(BOOL)supportsSecureCoding;
+(id)deploymentWithExperimentId:(id)arg1 deploymentId:(int)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)experimentId;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(int)deploymentId;
-(id)taskTag;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDeploymentId;
-(id)initWithExperimentId:(id)arg1 deploymentId:(int)arg2 ;
-(BOOL)isEqualToDeployment:(id)arg1 ;
-(id)copyWithReplacementExperimentId:(id)arg1 ;
-(id)copyWithReplacementDeploymentId:(int)arg1 ;
-(void)_swizzledEncodeWithCoder:(id)arg1 ;
-(NSString *)shortDesc;
@end

